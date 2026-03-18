/*
 * XREFs of TtmpSessionWorker @ 0x1406D9A30
 * Callers:
 *     <none>
 * Callees:
 *     MmDetachSession @ 0x140073870 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400738F0 (MmAttachSession.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     MmGetSessionById @ 0x140094460 (MmGetSessionById.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     TtmiLogError @ 0x140584D50 (TtmiLogError.c)
 *     TtmiSessionDeviceListWorker @ 0x1406D7240 (TtmiSessionDeviceListWorker.c)
 *     TtmiSessionTerminalListWorker @ 0x1406D8250 (TtmiSessionTerminalListWorker.c)
 *     TtmpActivateSessionWorker @ 0x1406D9834 (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x1406D98DC (TtmpDeactivateSessionWorker.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x1406D9958 (TtmpDereferenceSessionMaybeLast.c)
 *     TtmiLogSessionWorkerPass @ 0x1406DCF30 (TtmiLogSessionWorkerPass.c)
 *     TtmiLogSessionWorkerStart @ 0x1406DCFF4 (TtmiLogSessionWorkerStart.c)
 *     TtmiLogSessionWorkerStop @ 0x1406DD090 (TtmiLogSessionWorkerStop.c)
 */

__int64 __fastcall TtmpSessionWorker(unsigned int *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // r13
  __int64 v3; // r14
  unsigned int v5; // r12d
  unsigned int v6; // ecx
  ULONG_PTR SessionById; // rax
  unsigned int v8; // esi
  int v9; // r8d
  int v10; // r9d
  int v11; // edx
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int i; // r15d
  __int64 v15; // rdx
  char v16; // bl
  unsigned int v17; // ebx
  char v18; // bp
  char v19; // bl
  bool v20; // bp
  unsigned int v21; // eax
  char v23; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v24[7]; // [rsp+21h] [rbp-67h] BYREF
  _BYTE v25[48]; // [rsp+28h] [rbp-60h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  v5 = *a1;
  TtmiLogSessionWorkerStart(*a1);
  v6 = a1[1] & 0xFFFFFFFC | 2;
  a1[1] = v6;
  *((_QWORD *)a1 + 20) = KeGetCurrentThread();
  if ( (v6 & 4) == 0 )
  {
    SessionById = MmGetSessionById(v5);
    v3 = SessionById;
    if ( !SessionById )
    {
      v8 = -1073740715;
      v9 = -1;
      v10 = -1073740715;
      v11 = 1877;
LABEL_4:
      TtmiLogError("TtmpSessionWorker", v11, v9, v10);
      goto LABEL_25;
    }
    v12 = MmAttachSession(SessionById);
    v8 = v12;
    if ( v12 < 0 )
    {
      v10 = v12;
      v9 = v12;
      v11 = 1886;
      goto LABEL_4;
    }
    v2 = 1;
  }
  v13 = a1[38];
  v8 = 0;
  a1[38] = 0;
  for ( i = 1; ; ++i )
  {
    v17 = v13 & 7;
    if ( !v17 )
      break;
    TtmiLogSessionWorkerPass(v5, v17, i);
    if ( (v17 & 2) != 0 )
    {
      TtmiSessionTerminalListWorker(a1, &v23, v24);
      v16 = (v17 & 0xFD ^ (v17 & 0xFD | (4 * v23))) & 4 ^ v17 & 0xFD;
      LOBYTE(v17) = (v16 ^ (v16 | v24[0])) & 1 ^ v16;
    }
    v18 = v17;
    v19 = v17 & 0xFB;
    v20 = (v18 & 4) != 0;
    if ( v20 && (a1[1] & 0x10) != 0 )
    {
      v8 = TtmpActivateSessionWorker((__int64)a1, v15);
      if ( v8 != 259 )
      {
        v21 = a1[1];
        if ( (v21 & 0x1000) != 0 )
        {
          a1[1] = v21 & 0xFFFFEFFF;
          v19 |= 1u;
        }
      }
    }
    if ( (v19 & 1) != 0 )
      TtmiSessionDeviceListWorker(a1);
    if ( v20 && (a1[1] & 0x20) != 0 )
      v8 = TtmpDeactivateSessionWorker((__int64)a1, v15);
    v13 = a1[38];
    a1[38] = 0;
  }
  if ( v2 )
    MmDetachSession(v3, (__int64)v25);
LABEL_25:
  a1[1] &= ~2u;
  *((_QWORD *)a1 + 20) = 0LL;
  ExReleaseResourceLite(&TtmpSessionLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  TtmpDereferenceSessionMaybeLast((volatile signed __int32 *)a1);
  return TtmiLogSessionWorkerStop(v5, v8);
}
