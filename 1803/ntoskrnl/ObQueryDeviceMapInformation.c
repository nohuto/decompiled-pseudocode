/*
 * XREFs of ObQueryDeviceMapInformation @ 0x1404FCF70
 * Callers:
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x14006CFF0 (PsGetProcessServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ObfDereferenceDeviceMap @ 0x1404FD110 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x1404FD200 (ObpReferenceDeviceMap.c)
 */

__int64 __fastcall ObQueryDeviceMapInformation(_KPROCESS *a1, __int64 a2, int a3)
{
  char v5; // r12
  int v6; // ebx
  __int64 v7; // r14
  __int64 ProcessServerSilo; // rax
  __int64 *ServerSiloGlobals; // rax
  __int64 *v10; // rsi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v12; // r13
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // esi
  __int64 v16; // r10
  __int64 v17; // rax
  int v18; // r11d
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // r9
  _BYTE *v22; // r8
  __int64 *v24; // rax
  _OWORD v25[2]; // [rsp+20h] [rbp-48h] BYREF
  int v26; // [rsp+40h] [rbp-28h]

  v5 = 0;
  if ( (a3 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  v6 = a3 & 1;
  if ( a1 )
  {
    if ( KeGetCurrentThread()->ApcState.Process != a1 )
      return 3221225485LL;
  }
  v7 = ObpReferenceDeviceMap(0LL);
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
    v24 = (__int64 *)&a1[1].ActiveProcessors.Bitmap[8];
    if ( !a1 )
      v24 = v10;
    v7 = *v24;
  }
  if ( v7 )
  {
    v15 = 0;
    v16 = v7;
    v17 = *(_QWORD *)(v7 + 8);
    if ( v17 && *(_QWORD *)(v17 + 304) )
      v16 = *(_QWORD *)(v17 + 304);
    v18 = *(_DWORD *)(v7 + 28);
    LODWORD(v25[0]) = v18;
    v19 = 1;
    v20 = 0LL;
    v21 = 32LL;
    do
    {
      v22 = (char *)v25 + v20 + 4;
      *((_BYTE *)v25 + v20 + 4) = *((_BYTE *)&v25[2] + v20 + v7 - ((_QWORD)v25 + 4) + 4);
      if ( (v18 & v19) == 0 && !v6 )
      {
        *v22 = *(_BYTE *)(v20 + v16 + 32);
        LODWORD(v25[0]) |= v19 & *(_DWORD *)(v16 + 28);
      }
      ++v20;
      v19 *= 2;
      --v21;
    }
    while ( v21 );
    ExReleasePushLockEx(v12, 0LL, (__int64)v22, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v5 == 1 )
      ObfDereferenceDeviceMap((PVOID)v7);
    *(_OWORD *)a2 = v25[0];
    *(_OWORD *)(a2 + 16) = v25[1];
    *(_DWORD *)(a2 + 32) = v26;
  }
  else
  {
    ExReleasePushLockEx((ULONG_PTR)(v10 + 15), 0LL, v13, v14);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741807;
  }
  return v15;
}
