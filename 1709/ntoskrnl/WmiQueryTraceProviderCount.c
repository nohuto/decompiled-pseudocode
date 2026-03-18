/*
 * XREFs of WmiQueryTraceProviderCount @ 0x140279EB0
 * Callers:
 *     EtwpUpdateFileInfoDriverState @ 0x14059726C (EtwpUpdateFileInfoDriverState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 WmiQueryTraceProviderCount()
{
  unsigned int v0; // ebx
  KIRQL v1; // al
  int *v2; // r8
  KIRQL v3; // di

  v0 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v1 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  v2 = (int *)WmipInUseRegEntryHead;
  v3 = v1;
  while ( v2 != (int *)&WmipInUseRegEntryHead )
  {
    if ( ((v2[12] >> 4) & 0x400000) != 0 && (v2[12] & 0x40000000) != 0 && *((_QWORD *)v2 + 2) )
      ++v0;
    v2 = *(int **)v2;
  }
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  __writecr8(v3);
  KeReleaseMutex(&WmipSMMutex, 0);
  return v0;
}
