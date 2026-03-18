/*
 * XREFs of ?GetModifierTypeString@DebugTargetInfo@CConditionalExpression@@QEAAPEBGXZ @ 0x180187A38
 * Callers:
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180187AE4 (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

const unsigned __int16 *__fastcall CConditionalExpression::DebugTargetInfo::GetModifierTypeString(
        CConditionalExpression::DebugTargetInfo *this)
{
  const void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 2) == 1 )
    return L"RestingValue";
  if ( *((_DWORD *)this + 2) == 2 )
    return L"Motion";
  if ( *((_DWORD *)this + 2) != 3 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  return L"NaturalMotion";
}
