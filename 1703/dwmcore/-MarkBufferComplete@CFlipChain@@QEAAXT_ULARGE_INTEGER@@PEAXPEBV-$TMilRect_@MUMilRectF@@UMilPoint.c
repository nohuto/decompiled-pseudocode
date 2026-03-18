/*
 * XREFs of ?MarkBufferComplete@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4BufferState@1@@Z @ 0x1800B1244
 * Callers:
 *     ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B1304 (-ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 * Callees:
 *     ?UpdateBufferState@CFlipChain@@AEAAXIW4BufferState@1@T_ULARGE_INTEGER@@@Z @ 0x1800B0F64 (-UpdateBufferState@CFlipChain@@AEAAXIW4BufferState@1@T_ULARGE_INTEGER@@@Z.c)
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B2260 (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 */

__int64 __fastcall CFlipChain::MarkBufferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 result; // rax
  __int64 v8; // rdx

  result = a3;
  if ( *(_DWORD *)(a1 + 160) && *(_DWORD *)(a1 + 112) )
  {
    result = CBitmapOfDeviceBitmaps::AddUpdateRect(**(_QWORD **)(a1 + 136), a3, a4);
    if ( (unsigned int)a2 <= *(_DWORD *)(a1 + 184) )
      --*(_DWORD *)(a1 + 112);
    else
      return CFlipChain::UpdateBufferState(a1, v8, a5, a2);
  }
  return result;
}
