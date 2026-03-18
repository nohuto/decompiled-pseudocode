/*
 * XREFs of BgkResumeFinished @ 0x14042A5B8
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14013EC50 (BgkNotifyDisplayOwnershipChange.c)
 *     PopFreeHiberContext @ 0x1406FB8E8 (PopFreeHiberContext.c)
 * Callees:
 *     BgkpUnlockBgfxCodeSection @ 0x1407D08B8 (BgkpUnlockBgfxCodeSection.c)
 *     BgFreeContext @ 0x1407D2E4C (BgFreeContext.c)
 */

__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !Address )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  Address = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_1403A33E0 = 0;
  return result;
}
