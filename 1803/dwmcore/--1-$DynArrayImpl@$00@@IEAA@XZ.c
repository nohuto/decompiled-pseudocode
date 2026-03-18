/*
 * XREFs of ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800CCF78
 * Callers:
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18003E930 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_.c)
 *     ??1CRenderData@@MEAA@XZ @ 0x1800572D0 (--1CRenderData@@MEAA@XZ.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x1800B4D7C (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ??1CBitmapOfDeviceBitmaps@@MEAA@XZ @ 0x1800CC61C (--1CBitmapOfDeviceBitmaps@@MEAA@XZ.c)
 *     ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x1800CCA10 (--1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801497E4 (--1CComposition@@MEAA@XZ.c)
 *     ??1CRenderTargetManager@@EEAA@XZ @ 0x1801521BC (--1CRenderTargetManager@@EEAA@XZ.c)
 *     ??1?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x18017ED60 (--1-$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x18017ED68 (--1CExpressionManager@@UEAA@XZ.c)
 *     ??1CCompositionCubeMap@@UEAA@XZ @ 0x180183490 (--1CCompositionCubeMap@@UEAA@XZ.c)
 *     ??_ECConditionalExpression@@UEAAPEAXI@Z @ 0x1801873B0 (--_ECConditionalExpression@@UEAAPEAXI@Z.c)
 *     ??_ECExpressionValueStack@@UEAAPEAXI@Z @ 0x1801B7340 (--_ECExpressionValueStack@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

void __fastcall DynArrayImpl<1>::~DynArrayImpl<1>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 != a1[1] )
  {
    operator delete(v2);
    *a1 = 0LL;
  }
}
