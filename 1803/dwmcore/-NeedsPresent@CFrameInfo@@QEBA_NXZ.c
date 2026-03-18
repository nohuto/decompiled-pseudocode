/*
 * XREFs of ?NeedsPresent@CFrameInfo@@QEBA_NXZ @ 0x18013FCB8
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CFrameInfo::NeedsPresent(CFrameInfo *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 1056) )
    return *((_BYTE *)this + 1057) == 0;
  return result;
}
