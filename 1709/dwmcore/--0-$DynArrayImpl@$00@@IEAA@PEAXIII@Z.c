/*
 * XREFs of ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x18007E6CC
 * Callers:
 *     ??0CRenderData@@IEAA@PEAVCComposition@@@Z @ 0x18001F028 (--0CRenderData@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0?$DynArrayIA@UDeviceBitmapInfo@CBitmapOfDeviceBitmaps@@$01$00@@QEAA@XZ @ 0x18007E2F8 (--0-$DynArrayIA@UDeviceBitmapInfo@CBitmapOfDeviceBitmaps@@$01$00@@QEAA@XZ.c)
 *     ??0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x18007E380 (--0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     ??0?$DynArrayIA@URenderTargetBitmapInfo@CCachedVisualImage@@$01$00@@QEAA@XZ @ 0x18007E4BC (--0-$DynArrayIA@URenderTargetBitmapInfo@CCachedVisualImage@@$01$00@@QEAA@XZ.c)
 *     ??0?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x18011D8E0 (--0-$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ.c)
 *     ??0CExpressionManager@@AEAA@XZ @ 0x180155CBC (--0CExpressionManager@@AEAA@XZ.c)
 *     ??0CCompositionCubeMap@@QEAA@PEAVCComposition@@@Z @ 0x18015A1A4 (--0CCompositionCubeMap@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z @ 0x18015E230 (--0CConditionalExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x1801835E8 (--0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800C3238 (memset_0.c)
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
