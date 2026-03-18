/*
 * XREFs of PopFanUpdateCsState @ 0x14076B340
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140614150 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x14076B28C (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
  {
    if ( byte_1403A9D45 )
    {
      if ( byte_1403A9D44 )
        PopFanEndCsFanPeriod();
      qword_1403A9D50 = 0LL;
      byte_1403A9D45 = 0;
    }
  }
  else if ( !byte_1403A9D45 )
  {
    byte_1403A9D45 = 1;
    qword_1403A9D50 = MEMORY[0xFFFFF78000000008];
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}
