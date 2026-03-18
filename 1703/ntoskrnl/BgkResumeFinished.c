/*
 * XREFs of BgkResumeFinished @ 0x140409F64
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140140280 (BgkNotifyDisplayOwnershipChange.c)
 *     PopFreeHiberContext @ 0x140577660 (PopFreeHiberContext.c)
 * Callees:
 *     BgFreeContext @ 0x140755034 (BgFreeContext.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140755710 (BgkpUnlockBgfxCodeSection.c)
 */

__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !Address )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  Address = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_14036E288 = 0;
  return result;
}
