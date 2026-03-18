/*
 * XREFs of ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18002B8A0
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18003B590 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18002B220 (-SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComponentTransform3D::SetProperty(__int64 a1, int a2, int a3, const struct _D3DCOLORVALUE *a4)
{
  const struct AnimationHelper::AnimatedProperty *const near *v6; // rdx
  __int64 i; // rax
  const struct AnimationHelper::AnimatedProperty *const near *v8; // rcx
  __int64 (__fastcall *v9)(CPropertyChangeResource *, const struct AnimationHelper::AnimatedProperty *, const struct _D3DCOLORVALUE *); // rax
  CPropertyChangeResource *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  float v14; // xmm0_4
  float v15; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 == 13 && a3 == 18 )
  {
    v6 = (const struct AnimationHelper::AnimatedProperty *const near *)&CComponentTransform3D::sc_RotationAngle;
    v14 = a4->r * 0.017453292;
    a4 = (const struct _D3DCOLORVALUE *)&v15;
    v15 = v14;
  }
  else
  {
    v6 = 0LL;
    for ( i = 0LL; i != 7; ++i )
    {
      v8 = (&CComponentTransform3D::k_rgAnimDef)[i];
      if ( a2 == *(_DWORD *)v8 && (a3 == *((_DWORD *)v8 + 1) || !a3) )
      {
        v6 = (&CComponentTransform3D::k_rgAnimDef)[i];
        break;
      }
    }
    if ( !v6 )
    {
      v12 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x54u);
      return v12;
    }
  }
  v9 = (__int64 (__fastcall *)(CPropertyChangeResource *, const struct AnimationHelper::AnimatedProperty *, const struct _D3DCOLORVALUE *))*((_QWORD *)v6 + 3);
  v10 = (CPropertyChangeResource *)(a1 + *((int *)v6 + 8));
  if ( v9 == CPropertyChangeResource::SetAnimatedProperty )
    v11 = CPropertyChangeResource::SetAnimatedProperty(v10, (const struct AnimationHelper::AnimatedProperty *)v6, a4);
  else
    v11 = v9(v10, (const struct AnimationHelper::AnimatedProperty *)v6, a4);
  v12 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x50u);
  return v12;
}
