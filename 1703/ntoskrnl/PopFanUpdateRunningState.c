/*
 * XREFs of PopFanUpdateRunningState @ 0x1406CF79C
 * Callers:
 *     PopFanWorker @ 0x1406CF830 (PopFanWorker.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1406CF67C (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateRunningState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
    ++PopFanTracking;
  else
    --PopFanTracking;
  if ( PopFanTracking )
  {
    if ( !byte_14034AE84 )
    {
      byte_14034AE84 = 1;
      qword_14034AE88 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_14034AE84 )
  {
    if ( byte_14034AE85 )
      PopFanEndCsFanPeriod();
    qword_14034AE88 = 0LL;
    byte_14034AE84 = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}
