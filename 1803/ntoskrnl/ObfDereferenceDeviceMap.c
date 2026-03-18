/*
 * XREFs of ObfDereferenceDeviceMap @ 0x1404FD110
 * Callers:
 *     ObQueryDeviceMapInformation @ 0x1404FCF70 (ObQueryDeviceMapInformation.c)
 *     ObDereferenceDeviceMap @ 0x14050EA74 (ObDereferenceDeviceMap.c)
 *     ObSetCurrentProcessDeviceMap @ 0x14055FBE0 (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x14055FCF8 (SeGetTokenDeviceMap.c)
 *     SepDeReferenceLogonSession @ 0x14056FB40 (SepDeReferenceLogonSession.c)
 *     ObpSetDeviceMap @ 0x14057D9B8 (ObpSetDeviceMap.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 *     SepDeleteLogonSessionTrack @ 0x1405F0844 (SepDeleteLogonSessionTrack.c)
 *     PspDeleteServerSiloGlobals @ 0x1407792DC (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall ObfDereferenceDeviceMap(PVOID P)
{
  signed __int32 v1; // ebx
  bool v3; // zf
  signed __int32 v4; // eax
  void *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rcx

  v1 = *((_DWORD *)P + 6);
  if ( v1 != 1 )
  {
    do
    {
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)P + 6, v1 - 1, v1);
      v3 = v1 == v4;
      v1 = v4;
      if ( v3 )
        goto LABEL_3;
    }
    while ( v4 != 1 );
  }
  ServerSiloGlobals = PsGetServerSiloGlobals(*((_QWORD *)P + 8));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = (ULONG_PTR)ServerSiloGlobals + 120;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)ServerSiloGlobals + 120, 0LL);
  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 6, 0xFFFFFFFF);
  if ( v1 != 1 )
  {
    ExReleasePushLockEx(v7, 0LL, v8, v9);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_3:
    if ( v1 <= 0 )
      __fastfail(0xEu);
    return;
  }
  *(_QWORD *)(*(_QWORD *)P + 304LL) = 0LL;
  ExReleasePushLockEx(v7, 0LL, v8, v9);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  v10 = (void *)*((_QWORD *)P + 8);
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x6D44624Fu);
  ZwClose(*((HANDLE *)P + 2));
  ObfDereferenceObject(*(PVOID *)P);
  ExFreePoolWithTag(P, 0x6D44624Fu);
}
