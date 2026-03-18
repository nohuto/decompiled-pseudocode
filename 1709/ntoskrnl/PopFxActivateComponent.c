/*
 * XREFs of PopFxActivateComponent @ 0x1400FD6FC
 * Callers:
 *     PoFxActivateComponent @ 0x1400FD690 (PoFxActivateComponent.c)
 *     PopFxActivateComponentWorker @ 0x1400FD7C0 (PopFxActivateComponentWorker.c)
 *     PopFxRegisterDeviceWorker @ 0x1405CA234 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponentWorker @ 0x1400FD7C0 (PopFxActivateComponentWorker.c)
 */

void __fastcall PopFxActivateComponent(ULONG_PTR a1, __int64 a2, char a3)
{
  int v5; // eax
  KSPIN_LOCK *v6; // rdi
  unsigned __int64 v7; // rbx

  if ( (*(_DWORD *)(a1 + 624) & 1) == 0 )
  {
    v5 = _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
    if ( v5 == 1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
      PopFxActivateComponentWorker(a1);
    }
    else
    {
      if ( v5 < 0 )
        return;
      if ( (v5 & 0x40000000) != 0 )
      {
        v6 = (KSPIN_LOCK *)(a2 + 128);
        v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
        KxReleaseSpinLock(v6);
        __writecr8(v7);
      }
    }
    if ( (a3 & 1) != 0 )
      KeWaitForSingleObject((PVOID)(a2 + 104), Executive, 0, 0, 0LL);
  }
}
