/*
 * XREFs of ?HasGpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180032C24
 * Callers:
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031D18 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 * Callees:
 *     <none>
 */

bool __fastcall CScopedClipStack::HasGpuClipsInScope(CScopedClipStack *this)
{
  int v1; // eax
  char v2; // r9

  v1 = *((_DWORD *)this + 6);
  v2 = 0;
  if ( v1 )
    return *(_DWORD *)(*(_QWORD *)this + 80LL * (unsigned int)(v1 - 1) + 4) != 0;
  return v2;
}
