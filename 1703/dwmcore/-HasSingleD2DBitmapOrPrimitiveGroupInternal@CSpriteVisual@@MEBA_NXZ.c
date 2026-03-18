/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CSpriteVisual@@MEBA_NXZ @ 0x18008C7A0
 * Callers:
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180088B00 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180037F70 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800BF9D0 (-IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CSpriteVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(CSpriteVisual *this, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  bool (__fastcall *v6)(__int64, int); // rax
  char v8; // al

  v4 = 0;
  v5 = *((_QWORD *)this + 30);
  if ( v5 )
  {
    if ( (v6 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v5 + 48LL), v6 == CColorBrush::IsOfType)
      || v6 == CMaskBrush::IsOfType
      || ((char *)v6 != (char *)CSurfaceBrush::IsOfType
        ? ((char *)v6 != (char *)CNineGridBrush::IsOfType
         ? (v8 = v6(v5, 81))
         : (v8 = CNineGridBrush::IsOfType(v5, 81LL, a3)))
        : (v8 = CSurfaceBrush::IsOfType(v5, 81)),
          v8) )
    {
      v4 = 1;
    }
  }
  if ( *((_QWORD *)this + 62) )
    ++v4;
  return v4 == 1;
}
