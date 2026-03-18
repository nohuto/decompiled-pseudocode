/*
 * XREFs of PopFxActivateComponent @ 0x1400780EC
 * Callers:
 *     PoFxActivateComponent @ 0x140078070 (PoFxActivateComponent.c)
 *     PopFxActivateComponentWorker @ 0x1400781D4 (PopFxActivateComponentWorker.c)
 *     PopFxRegisterDeviceWorker @ 0x140614C84 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponentWorker @ 0x1400781D4 (PopFxActivateComponentWorker.c)
 *     KeLeaveGuardedRegion @ 0x14007C0A0 (KeLeaveGuardedRegion.c)
 *     KeEnterGuardedRegion @ 0x1400A4130 (KeEnterGuardedRegion.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 */

void __fastcall PopFxActivateComponent(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v5; // r14
  int v8; // esi
  char *v9; // r9
  int v10; // eax
  unsigned __int64 v11; // rbx
  char v12; // [rsp+30h] [rbp-58h] BYREF

  v5 = a3;
  if ( (*(_DWORD *)(a1 + 704) & 1) == 0 )
  {
    v8 = a3 & 6;
    if ( v8 == 4 )
      KeEnterGuardedRegion();
    v9 = &v12;
    if ( (v5 & 2) != 0 )
      v9 = 0LL;
    v10 = _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
    if ( v10 == 1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
      LOBYTE(a3) = a4;
      PopFxActivateComponentWorker(a1, a2, a3, v9);
    }
    else
    {
      if ( v10 < 0 )
      {
LABEL_13:
        if ( v8 == 4 )
          KeLeaveGuardedRegion();
        return;
      }
      if ( (v10 & 0x40000000) != 0 )
      {
        v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
        KxReleaseSpinLock((PKSPIN_LOCK)(a2 + 128));
        __writecr8(v11);
      }
    }
    if ( (v5 & 1) != 0 )
      KeWaitForSingleObject((PVOID)(a2 + 104), Executive, 0, 0, 0LL);
    goto LABEL_13;
  }
}
