/*
 * XREFs of PopFanUpdateRunningState @ 0x1407073BC
 * Callers:
 *     PopFanWorker @ 0x140707450 (PopFanWorker.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopFanEndCsFanPeriod @ 0x14070728C (PopFanEndCsFanPeriod.c)
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
    if ( !byte_140366484 )
    {
      byte_140366484 = 1;
      qword_140366488 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_140366484 )
  {
    if ( byte_140366485 )
      PopFanEndCsFanPeriod();
    qword_140366488 = 0LL;
    byte_140366484 = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}
