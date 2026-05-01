/*
 * XREFs of ??_E?$CDCompBatchAnimationCallback@V_lambda_d996df4ae651642ba189a9f5cbef4ddb_@@@@UEAAPEAXI@Z @ 0x1802DA3A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___ @ 0x1802DA098 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_CDCompBatchAnimationC.c)
 */

void *__fastcall CDCompBatchAnimationCallback<_lambda_d996df4ae651642ba189a9f5cbef4ddb_>::`vector deleting destructor'(
        void *Block,
        char a2)
{
  CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
