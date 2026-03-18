/*
 * XREFs of ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x18013CF48
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18003B590 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18003C8AC (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x18003CC4C (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180187AE4 (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     <none>
 */

struct CAnimationLoggingManager *__fastcall CBaseExpression::GetAnimationLoggingManagerNoRef(CBaseExpression *this)
{
  __int64 v1; // rax
  struct CAnimationLoggingManager *result; // rax

  v1 = *((_QWORD *)this + 6);
  if ( !v1 )
    return 0LL;
  result = *(struct CAnimationLoggingManager **)(v1 + 56);
  if ( !result )
    return 0LL;
  return result;
}
