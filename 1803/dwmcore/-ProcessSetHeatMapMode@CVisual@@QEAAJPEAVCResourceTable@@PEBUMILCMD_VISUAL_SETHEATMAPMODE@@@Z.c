/*
 * XREFs of ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETHEATMAPMODE@@@Z @ 0x1801A8598
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z @ 0x1801A8D48 (-SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetHeatMapMode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETHEATMAPMODE *a3)
{
  char v4; // cl
  char v6; // al
  __int64 v7; // rax
  __m128i v8; // xmm0
  __m128i v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+30h] [rbp-18h]

  v4 = *((_BYTE *)this + 93);
  v6 = v4;
  if ( *((_DWORD *)a3 + 6) == 2 )
  {
    if ( (v4 & 8) != 0 )
      goto LABEL_7;
    v7 = *((_QWORD *)this + 2);
    v11 = 0;
    ++*(_DWORD *)(v7 + 1308);
    *((_BYTE *)this + 93) |= 8u;
    v10 = _mm_loadu_si128((const __m128i *)((char *)a3 + 8));
    CVisual::SetHeatMapProperties(this, &v10);
  }
  else
  {
    if ( (v4 & 8) == 0 )
      goto LABEL_7;
    --*(_DWORD *)(*((_QWORD *)this + 2) + 1308LL);
    *((_BYTE *)this + 93) &= ~8u;
  }
  v6 = *((_BYTE *)this + 93);
LABEL_7:
  if ( *((_DWORD *)a3 + 6) == 1 )
  {
    *((_BYTE *)this + 93) = v6 | 4;
    v8 = _mm_loadu_si128((const __m128i *)((char *)a3 + 8));
    v11 = *((_DWORD *)a3 + 7);
    v10 = v8;
    CVisual::SetHeatMapProperties(this, &v10);
  }
  else
  {
    *((_BYTE *)this + 93) = v6 & 0xFB;
  }
  CVisual::PropagateFlags((__int64)this, 5u, 0);
  return 0LL;
}
