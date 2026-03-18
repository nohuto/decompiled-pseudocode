/*
 * XREFs of ObfDereferenceDeviceMap @ 0x1404C7780
 * Callers:
 *     ObpLookupObjectName @ 0x1404B2490 (ObpLookupObjectName.c)
 *     ObQueryDeviceMapInformation @ 0x1404C75E0 (ObQueryDeviceMapInformation.c)
 *     ObDereferenceDeviceMap @ 0x1404FC1D4 (ObDereferenceDeviceMap.c)
 *     ObSetCurrentProcessDeviceMap @ 0x14056FCE0 (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x14056FDEC (SeGetTokenDeviceMap.c)
 *     SepDeReferenceLogonSession @ 0x1405A7534 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1405A79E0 (SepDeleteLogonSessionTrack.c)
 *     ObpSetDeviceMap @ 0x1405B2684 (ObpSetDeviceMap.c)
 *     PspDeleteServerSiloGlobals @ 0x14071514C (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall ObfDereferenceDeviceMap(PVOID P)
{
  signed __int32 v1; // ebx
  bool v3; // zf
  signed __int32 v4; // eax
  void *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v7; // rsi
  void *v8; // rcx

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
    ExReleasePushLockEx(v7, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_3:
    if ( v1 <= 0 )
      __fastfail(0xEu);
    return;
  }
  *(_QWORD *)(*(_QWORD *)P + 304LL) = 0LL;
  ExReleasePushLockEx(v7, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  v8 = (void *)*((_QWORD *)P + 8);
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x6D44624Fu);
  ZwClose(*((HANDLE *)P + 2));
  ObfDereferenceObject(*(PVOID *)P);
  ExFreePoolWithTag(P, 0x6D44624Fu);
}
