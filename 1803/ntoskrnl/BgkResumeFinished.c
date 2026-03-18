/*
 * XREFs of BgkResumeFinished @ 0x1404767D0
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140164C40 (BgkNotifyDisplayOwnershipChange.c)
 *     PopFreeHiberContext @ 0x1405EF808 (PopFreeHiberContext.c)
 * Callees:
 *     BgFreeContext @ 0x14083B034 (BgFreeContext.c)
 *     BgkpUnlockBgfxCodeSection @ 0x14083B364 (BgkpUnlockBgfxCodeSection.c)
 */

__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !Address )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  Address = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_1403CDB50 = 0;
  return result;
}
