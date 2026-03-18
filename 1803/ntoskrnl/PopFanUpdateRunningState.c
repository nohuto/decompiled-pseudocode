/*
 * XREFs of PopFanUpdateRunningState @ 0x140643DF0
 * Callers:
 *     PopFanWorker @ 0x140643C80 (PopFanWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x14076B28C (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateRunningState(char a1)
{
  int v2; // eax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
    v2 = PopFanTracking + 1;
  else
    v2 = PopFanTracking - 1;
  PopFanTracking = v2;
  if ( v2 )
  {
    if ( !byte_1403A9D44 )
    {
      byte_1403A9D44 = 1;
      qword_1403A9D48 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_1403A9D44 )
  {
    if ( byte_1403A9D45 )
      PopFanEndCsFanPeriod();
    qword_1403A9D48 = 0LL;
    byte_1403A9D44 = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}
