/*
 * XREFs of PopFanUpdateCsState @ 0x140707340
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x1405F2260 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopFanEndCsFanPeriod @ 0x14070728C (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
  {
    if ( byte_140366485 )
    {
      if ( byte_140366484 )
        PopFanEndCsFanPeriod();
      qword_140366490 = 0LL;
      byte_140366485 = 0;
    }
  }
  else if ( !byte_140366485 )
  {
    byte_140366485 = 1;
    qword_140366490 = MEMORY[0xFFFFF78000000008];
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}
