/*
 * XREFs of WmipAllocRegEntry @ 0x140161F7C
 * Callers:
 *     WmipRegisterDevice @ 0x140600958 (WmipRegisterDevice.c)
 *     WmipInitializeDataStructs @ 0x14089F8AC (WmipInitializeDataStructs.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1400631EC (ExAllocateFromNPagedLookasideList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     WmipAllocProviderId @ 0x140584350 (WmipAllocProviderId.c)
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
    v7 = off_140397798;
    v8 = v6;
    ++WmipInUseRegEntryCount;
    if ( *off_140397798 != (_UNKNOWN *)&WmipInUseRegEntryHead )
      __fastfail(3u);
    v5[1] = off_140397798;
    *v5 = &WmipInUseRegEntryHead;
    *v7 = v5;
    off_140397798 = (_UNKNOWN **)v5;
    KxReleaseSpinLock(&WmipRegistrationSpinLock);
    __writecr8(v8);
    KeReleaseMutex(&WmipSMMutex, 0);
  }
  return v5;
}
