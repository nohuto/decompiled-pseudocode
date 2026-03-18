/*
 * XREFs of WmipAllocRegEntry @ 0x140123F48
 * Callers:
 *     WmipRegisterDevice @ 0x14057F3F8 (WmipRegisterDevice.c)
 *     WmipInitializeDataStructs @ 0x140844214 (WmipInitializeDataStructs.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14001509C (ExAllocateFromNPagedLookasideList.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x140192F40 (memset.c)
 *     WmipAllocProviderId @ 0x14057F554 (WmipAllocProviderId.c)
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
    v7 = off_140354900;
    v8 = v6;
    ++WmipInUseRegEntryCount;
    if ( *off_140354900 != (_UNKNOWN *)&WmipInUseRegEntryHead )
      __fastfail(3u);
    v5[1] = off_140354900;
    *v5 = &WmipInUseRegEntryHead;
    *v7 = v5;
    off_140354900 = (_UNKNOWN **)v5;
    KxReleaseSpinLock(&WmipRegistrationSpinLock);
    __writecr8(v8);
    KeReleaseMutex(&WmipSMMutex, 0);
  }
  return v5;
}
