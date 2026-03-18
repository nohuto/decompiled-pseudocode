/*
 * XREFs of ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800B3368
 * Callers:
 *     ??0CExpressionManager@@AEAA@XZ @ 0x18002D7C0 (--0CExpressionManager@@AEAA@XZ.c)
 *     ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x1800338D0 (--0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z.c)
 *     ??0CRenderData@@IEAA@PEAVCComposition@@@Z @ 0x180084210 (--0CRenderData@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x1800B1990 (--0-$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ.c)
 *     ??0?$DynArrayIA@UDeviceBitmapInfo@CBitmapOfDeviceBitmaps@@$01$00@@QEAA@XZ @ 0x1800B26D4 (--0-$DynArrayIA@UDeviceBitmapInfo@CBitmapOfDeviceBitmaps@@$01$00@@QEAA@XZ.c)
 *     ??0?$DynArrayIA@URenderTargetBitmapInfo@CCachedVisualImage@@$01$00@@QEAA@XZ @ 0x1800B2720 (--0-$DynArrayIA@URenderTargetBitmapInfo@CCachedVisualImage@@$01$00@@QEAA@XZ.c)
 *     ??0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x1800B2DE4 (--0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z @ 0x18016AF48 (--0CConditionalExpression@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800D539C (memset_0.c)
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
