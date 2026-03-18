/*
 * XREFs of WmipAllocRegEntry @ 0x140154290
 * Callers:
 *     WmipRegisterDevice @ 0x14059FDA8 (WmipRegisterDevice.c)
 *     WmipInitializeDataStructs @ 0x1407FF6C4 (WmipInitializeDataStructs.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14005302C (ExAllocateFromNPagedLookasideList.c)
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     memset @ 0x140192D80 (memset.c)
 *     WmipAllocProviderId @ 0x14045CDA0 (WmipAllocProviderId.c)
 */

_QWORD *__fastcall WmipAllocRegEntry(__int64 a1, int a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  KIRQL v6; // al
  _QWORD *v7; // rcx
  KIRQL v8; // di

  v4 = ExAllocateFromNPagedLookasideList(&WmipRegLookaside);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x40uLL);
    v5[2] = a1;
    *((_DWORD *)v5 + 12) = a2 & 0xFF000000 | 1;
    *((_DWORD *)v5 + 14) = WmipAllocProviderId();
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v6 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
    v7 = off_14033C578[0];
    v8 = v6;
    ++WmipInUseRegEntryCount;
    if ( *(_UNKNOWN ***)off_14033C578[0] != &WmipInUseRegEntryHead )
      __fastfail(3u);
    v5[1] = off_14033C578[0];
    *v5 = &WmipInUseRegEntryHead;
    *v7 = v5;
    off_14033C578[0] = (_UNKNOWN **)v5;
    KxReleaseSpinLock(&WmipRegistrationSpinLock);
    __writecr8(v8);
    KeReleaseMutex(&WmipSMMutex, 0);
  }
  return v5;
}
