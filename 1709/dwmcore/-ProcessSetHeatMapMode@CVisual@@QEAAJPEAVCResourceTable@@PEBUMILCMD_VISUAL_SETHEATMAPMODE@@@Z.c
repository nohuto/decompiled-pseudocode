/*
 * XREFs of ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETHEATMAPMODE@@@Z @ 0x180177A28
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800B3E30 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetHeatMapMode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETHEATMAPMODE *a3)
{
  __int64 v4; // rax
  __m128i v6; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)a3 + 6) )
  {
    *((_BYTE *)this + 92) |= 0x80u;
    v6 = _mm_loadu_si128((const __m128i *)((char *)a3 + 8));
    v4 = v6.m128i_i64[0] - `CVisual::SetHeatMapColor'::`2'::sc_defaultValue;
    if ( v6.m128i_i64[0] == `CVisual::SetHeatMapColor'::`2'::sc_defaultValue )
      v4 = v6.m128i_i64[1];
    if ( v4 )
      CSparseStorage::SetData((CVisual *)((char *)this + 208), 6u, 0x10u, &v6);
    else
      *(_DWORD *)(*((_QWORD *)this + 26) + 4LL) &= ~0x4000000u;
  }
  else
  {
    *((_BYTE *)this + 92) &= ~0x80u;
  }
  CVisual::PropagateFlags((__int64)this, 5u, 0);
  return 0LL;
}
