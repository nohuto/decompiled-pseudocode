/*
 * XREFs of WmiQueryTraceProviderCount @ 0x14013FF40
 * Callers:
 *     EtwpUpdateFileInfoDriverState @ 0x140435640 (EtwpUpdateFileInfoDriverState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

__int64 WmiQueryTraceProviderCount()
{
  unsigned int v0; // ebx
  KIRQL v1; // al
  _UNKNOWN **v2; // r8
  KIRQL v3; // di

  v0 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v1 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  v2 = (_UNKNOWN **)WmipInUseRegEntryHead;
  v3 = v1;
  while ( v2 != &WmipInUseRegEntryHead )
  {
    if ( ((((*((int *)v2 + 12) >> 4) & 0x400000) != 0) & _bittest((const signed __int32 *)v2 + 12, 0x1Eu)) != 0 && v2[2] )
      ++v0;
    v2 = (_UNKNOWN **)*v2;
  }
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  __writecr8(v3);
  KeReleaseMutex(&WmipSMMutex, 0);
  return v0;
}
