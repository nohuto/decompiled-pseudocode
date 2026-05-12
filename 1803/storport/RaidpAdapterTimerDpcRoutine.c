/*
 * XREFs of RaidpAdapterTimerDpcRoutine @ 0x1C0007BE0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterReleaseStartIoLock @ 0x1C0007C70 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C0007C9C (RaidAdapterAcquireStartIoLock.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C0007CD0 (RaidAcquireAdapterRemoveLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qdd @ 0x1C002C218 (WPP_SF_qdd.c)
 */

void __fastcall RaidpAdapterTimerDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  void (__fastcall *v5)(__int64); // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _DEVICE_OBJECT *v8; // rcx
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF

  v4 = DeferredContext[8];
  v5 = (void (__fastcall *)(__int64))_InterlockedExchange64((volatile __int64 *)(v4 + 1920), 0LL);
  if ( v5 )
  {
    v6 = *(unsigned int *)(v4 + 264);
    if ( (int)v6 < 6 || (v7 = *(unsigned int *)(v4 + 268), (int)v7 < 4) )
    {
      if ( (int)RaidAcquireAdapterRemoveLock(v4) >= 0 )
      {
        RaidAdapterAcquireStartIoLock(v4, v9);
        v5(*(_QWORD *)(v4 + 536) + 16LL);
        RaidAdapterReleaseStartIoLock(v4, v9);
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v4 + 256));
        if ( *(_BYTE *)(v4 + 105) )
        {
          v8 = *(struct _DEVICE_OBJECT **)(v4 + 32);
          *(_BYTE *)(v4 + 105) = 0;
          IoInvalidateDeviceRelations(v8, BusRelations);
        }
      }
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_qdd(WPP_GLOBAL_Control->AttachedDevice, v6, v7, v4, v6, *(_DWORD *)(v4 + 268));
    }
  }
}
