/*
 * XREFs of ?GetProperty@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18002B850
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18003B590 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x1800517BC (-GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComponentTransform3D::GetProperty(CComponentTransform3D *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  __int64 i; // rax
  const struct AnimationHelper::AnimatedProperty *v6; // rdx
  float v8; // xmm0_4

  v3 = 0;
  if ( a2 == 13 )
  {
    v8 = *((float *)this + 53) * 57.295776;
    *((_DWORD *)a3 + 18) = 18;
    *((_BYTE *)a3 + 76) = 1;
    *(float *)a3 = v8;
  }
  else
  {
    for ( i = 0LL; i != 7; ++i )
    {
      v6 = (const struct AnimationHelper::AnimatedProperty *)(&CComponentTransform3D::k_rgAnimDef)[i];
      if ( a2 == *(_DWORD *)v6 )
      {
        if ( v6 )
        {
          CResource::GetPropertyImpl(this, v6, a3);
          return v3;
        }
        break;
      }
    }
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x78u);
  }
  return v3;
}
