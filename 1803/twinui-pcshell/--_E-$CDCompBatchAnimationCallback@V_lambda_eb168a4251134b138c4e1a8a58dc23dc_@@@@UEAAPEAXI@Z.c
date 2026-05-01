/*
 * XREFs of ??_E?$CDCompBatchAnimationCallback@V_lambda_eb168a4251134b138c4e1a8a58dc23dc_@@@@UEAAPEAXI@Z @ 0x1802DA3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___ @ 0x1802DA0C4 (CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___--_CDCompBatchAnimationC.c)
 */

void *__fastcall CDCompBatchAnimationCallback<_lambda_eb168a4251134b138c4e1a8a58dc23dc_>::`vector deleting destructor'(
        void *Block,
        char a2)
{
  CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
