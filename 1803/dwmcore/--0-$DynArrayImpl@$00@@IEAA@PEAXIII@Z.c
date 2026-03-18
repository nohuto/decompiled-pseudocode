/*
 * XREFs of ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800CD200
 * Callers:
 *     ??0CExpressionManager@@AEAA@XZ @ 0x18003ACA4 (--0CExpressionManager@@AEAA@XZ.c)
 *     ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x180051B3C (--0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z.c)
 *     ??0CRenderData@@IEAA@PEAVCComposition@@@Z @ 0x180055A0C (--0CRenderData@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CRenderTargetManager@@AEAA@PEAVCComposition@@@Z @ 0x18005F130 (--0CRenderTargetManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x1800B5094 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0?$DynArrayIA@UDeviceBitmapInfo@CBitmapOfDeviceBitmaps@@$01$00@@QEAA@XZ @ 0x1800CC93C (--0-$DynArrayIA@UDeviceBitmapInfo@CBitmapOfDeviceBitmaps@@$01$00@@QEAA@XZ.c)
 *     ??0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x1800CC9B4 (--0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     ??0?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x1800CCA50 (--0-$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ.c)
 *     ??0CCompositionCubeMap@@QEAA@PEAVCComposition@@@Z @ 0x180183428 (--0CCompositionCubeMap@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z @ 0x180187350 (--0CConditionalExpression@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall DynArrayImpl<1>::DynArrayImpl<1>(__int64 a1, void *a2, int a3, __int64 a4, int a5)
{
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 20) = a3;
  if ( a2 )
    memset_0(a2, 0, (unsigned int)(a5 * a3));
  return a1;
}
