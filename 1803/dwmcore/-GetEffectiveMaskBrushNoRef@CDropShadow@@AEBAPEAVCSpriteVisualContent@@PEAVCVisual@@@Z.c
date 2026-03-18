/*
 * XREFs of ?GetEffectiveMaskBrushNoRef@CDropShadow@@AEBAPEAVCSpriteVisualContent@@PEAVCVisual@@@Z @ 0x18018A26C
 * Callers:
 *     ?IsReadyToDraw@CDropShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18018A6A0 (-IsReadyToDraw@CDropShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsRectangular@CDropShadow@@AEBA_NPEAVCVisual@@@Z @ 0x18018A71C (-IsRectangular@CDropShadow@@AEBA_NPEAVCVisual@@@Z.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x1800C1BB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?CanUseVisualBrushAsMaskBrush@CDropShadow@@AEBA_NXZ @ 0x180188F08 (-CanUseVisualBrushAsMaskBrush@CDropShadow@@AEBA_NXZ.c)
 */

struct CSpriteVisualContent *__fastcall CDropShadow::GetEffectiveMaskBrushNoRef(__int64 **this, struct CVisual *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r11
  __int64 *v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rax
  __int64 *i; // rcx
  __int64 *v11; // rdx
  struct CVisual *v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = a2;
  if ( !CDropShadow::CanUseVisualBrushAsMaskBrush((CDropShadow *)this) )
    return *(struct CSpriteVisualContent **)(v4 + 224);
  v5 = std::_Hash_bytes((const unsigned __int8 *)&v13, 8uLL);
  v7 = this[12];
  v8 = 2 * ((unsigned __int64)this[15] & v5);
  v9 = this[10];
  for ( i = (__int64 *)v7[v8]; ; i = (__int64 *)*i )
  {
    v11 = (__int64 *)v7[v8] == v9 ? this[10] : *(__int64 **)v7[v8 + 1];
    if ( i == v11 )
      break;
    if ( (struct CVisual *)i[2] == a2 )
    {
      v9 = i;
      break;
    }
  }
  if ( v9 != this[10] )
    return (struct CSpriteVisualContent *)v9[7];
  return (struct CSpriteVisualContent *)v6;
}
