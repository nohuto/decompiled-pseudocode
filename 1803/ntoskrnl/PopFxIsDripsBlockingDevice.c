/*
 * XREFs of PopFxIsDripsBlockingDevice @ 0x1402755A4
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x140274C18 (PopFxBuildDripsBlockingDeviceList.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

char __fastcall PopFxIsDripsBlockingDevice(__int64 a1, unsigned __int64 a2, unsigned int *a3)
{
  char v6; // si
  __int64 v7; // r12
  __int64 v8; // rbx
  KIRQL v9; // di
  unsigned int i; // ebx
  __int64 v11; // rdi
  KIRQL v12; // r13

  v6 = 0;
  v7 = MEMORY[0xFFFFF78000000008];
  if ( PopFxDeviceAccountingLevel < 0 )
  {
    v8 = a1 + 576;
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 576));
    if ( ((PopFxDeviceAccountingLevel & 1) != 0 || !PopFxDeviceAccountingPaused)
      && *(_BYTE *)(v8 + 8)
      && v7 - *(_QWORD *)(v8 + 24) >= a2 )
    {
      *a3 = -1;
      v6 = 1;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)v8);
    __writecr8(v9);
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 708); ++i )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 712) + 8LL * i);
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 200));
    if ( ((PopFxDeviceAccountingLevel & 1) != 0 || !PopFxDeviceAccountingPaused)
      && *(_BYTE *)(v11 + 208)
      && v7 - *(_QWORD *)(v11 + 224) >= a2 )
    {
      v6 = 1;
      *a3 = i;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v11 + 200));
    __writecr8(v12);
  }
  return v6;
}
