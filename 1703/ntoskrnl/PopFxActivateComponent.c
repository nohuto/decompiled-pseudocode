/*
 * XREFs of PopFxActivateComponent @ 0x140068F1C
 * Callers:
 *     PoFxActivateComponent @ 0x140068EA0 (PoFxActivateComponent.c)
 *     PopFxActivateComponentWorker @ 0x140068FE0 (PopFxActivateComponentWorker.c)
 *     PopFxRegisterDeviceWorker @ 0x1405BE6E4 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponentWorker @ 0x140068FE0 (PopFxActivateComponentWorker.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

void __fastcall PopFxActivateComponent(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v5; // bp
  __int64 *v7; // r9
  int v8; // eax
  KSPIN_LOCK *v9; // rdi
  unsigned __int64 v10; // rbx
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF

  v5 = a3;
  if ( (*(_DWORD *)(a1 + 624) & 1) == 0 )
  {
    v7 = &v11;
    if ( (a3 & 2) != 0 )
      v7 = 0LL;
    v8 = _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
    if ( v8 == 1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
      LOBYTE(a3) = a4;
      PopFxActivateComponentWorker(a1, a2, a3, v7);
    }
    else
    {
      if ( v8 < 0 )
        return;
      if ( (v8 & 0x40000000) != 0 )
      {
        v9 = (KSPIN_LOCK *)(a2 + 128);
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
        KxReleaseSpinLock(v9);
        __writecr8(v10);
      }
    }
    if ( (v5 & 1) != 0 )
      KeWaitForSingleObject((PVOID)(a2 + 104), Executive, 0, 0, 0LL);
  }
}
