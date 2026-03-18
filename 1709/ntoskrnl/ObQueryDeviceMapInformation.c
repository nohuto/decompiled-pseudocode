/*
 * XREFs of ObQueryDeviceMapInformation @ 0x1404C75E0
 * Callers:
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x1400893E0 (PsGetProcessServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     ObpReferenceDeviceMap @ 0x1404C64B0 (ObpReferenceDeviceMap.c)
 *     ObfDereferenceDeviceMap @ 0x1404C7780 (ObfDereferenceDeviceMap.c)
 */

__int64 __fastcall ObQueryDeviceMapInformation(_KPROCESS *a1, __int64 a2, int a3)
{
  char v5; // r12
  int v6; // edi
  __int64 v7; // r14
  __int64 ProcessServerSilo; // rax
  __int64 *ServerSiloGlobals; // rax
  __int64 *v10; // rsi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v12; // r13
  unsigned int v13; // esi
  __int64 v14; // r10
  __int64 v15; // rax
  int v16; // ebx
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // r9
  _OWORD v21[2]; // [rsp+20h] [rbp-48h] BYREF
  int v22; // [rsp+40h] [rbp-28h]

  v5 = 0;
  if ( (a3 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  v6 = a3 & 1;
  if ( a1 )
  {
    if ( KeGetCurrentThread()->ApcState.Process != a1 )
      return 3221225485LL;
  }
  v7 = ObpReferenceDeviceMap(0);
  if ( a1 )
  {
    ProcessServerSilo = PsGetProcessServerSilo((__int64)a1);
    ServerSiloGlobals = (__int64 *)PsGetServerSiloGlobals(ProcessServerSilo);
  }
  else
  {
    ServerSiloGlobals = (__int64 *)PsGetCurrentServerSiloGlobals();
  }
  v10 = ServerSiloGlobals;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v12 = (ULONG_PTR)(v10 + 15);
  ExAcquirePushLockSharedEx((ULONG_PTR)(v10 + 15), 0LL);
  if ( v7 )
  {
    v5 = 1;
  }
  else
  {
    if ( a1 )
      v10 = (__int64 *)&a1[1].ActiveProcessors.Bitmap[8];
    v7 = *v10;
  }
  if ( v7 )
  {
    v13 = 0;
    v14 = v7;
    v15 = *(_QWORD *)(v7 + 8);
    if ( v15 && *(_QWORD *)(v15 + 304) )
      v14 = *(_QWORD *)(v15 + 304);
    v16 = *(_DWORD *)(v7 + 28);
    LODWORD(v21[0]) = v16;
    v17 = 1;
    v18 = 0LL;
    v19 = 32LL;
    do
    {
      *((_BYTE *)v21 + v18 + 4) = *((_BYTE *)&v21[2] + v18 + v7 - ((_QWORD)v21 + 4) + 4);
      if ( (v16 & v17) == 0 && !v6 )
      {
        *((_BYTE *)v21 + v18 + 4) = *(_BYTE *)(v14 + v18 + 32);
        LODWORD(v21[0]) |= v17 & *(_DWORD *)(v14 + 28);
      }
      ++v18;
      v17 *= 2;
      --v19;
    }
    while ( v19 );
    ExReleasePushLockEx(v12, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v5 == 1 )
      ObfDereferenceDeviceMap((PVOID)v7);
    *(_OWORD *)a2 = v21[0];
    *(_OWORD *)(a2 + 16) = v21[1];
    *(_DWORD *)(a2 + 32) = v22;
  }
  else
  {
    ExReleasePushLockEx(v12, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741807;
  }
  return v13;
}
