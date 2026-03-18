/*
 * XREFs of PopFanUpdateCsState @ 0x1406CF720
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140586350 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1406CF67C (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
  {
    if ( byte_14034AE85 )
    {
      if ( byte_14034AE84 )
        PopFanEndCsFanPeriod();
      qword_14034AE90 = 0LL;
      byte_14034AE85 = 0;
    }
  }
  else if ( !byte_14034AE85 )
  {
    byte_14034AE85 = 1;
    qword_14034AE90 = MEMORY[0xFFFFF78000000008];
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}
