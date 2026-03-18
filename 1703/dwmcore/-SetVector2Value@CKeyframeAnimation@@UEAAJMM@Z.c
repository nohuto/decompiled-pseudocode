/*
 * XREFs of ?SetVector2Value@CKeyframeAnimation@@UEAAJMM@Z @ 0x18001EF50
 * Callers:
 *     ?Commit@Animation@Animations@Components@@QEAAJXZ @ 0x18002CAD0 (-Commit@Animation@Animations@Components@@QEAAJXZ.c)
 * Callees:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z @ 0x18001F12C (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SetVector2Value(CKeyframeAnimation *this, float a2, float a3)
{
  CExpressionValueStack *v3; // rcx
  float v5; // [rsp+30h] [rbp+8h] BYREF
  float v6; // [rsp+34h] [rbp+Ch]

  v3 = (CExpressionValueStack *)*((_QWORD *)this + 14);
  v5 = a2;
  v6 = a3;
  CExpressionValueStack::PushConstant(v3, (const struct D2DVector2 *)&v5);
  return 0LL;
}
