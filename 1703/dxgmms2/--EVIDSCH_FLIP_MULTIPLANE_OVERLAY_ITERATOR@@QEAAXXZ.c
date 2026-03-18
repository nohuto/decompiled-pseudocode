/*
 * XREFs of ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001E7B4
 * Callers:
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@IIH@Z @ 0x1C0012D78 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY.c)
 *     VidSchiUpdateFlipQueueEntriesForMove @ 0x1C0028430 (VidSchiUpdateFlipQueueEntriesForMove.c)
 *     VidSchCollectDbgInfo @ 0x1C00ACEE0 (VidSchCollectDbgInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(unsigned int *a1)
{
  char v2; // r8
  unsigned int v3; // ecx
  unsigned int v4; // eax
  bool v5; // zf
  __int64 result; // rax
  int v7; // ecx

  v2 = -1;
  v3 = a1[7];
  v4 = a1[8];
  if ( v3 >= v4 )
  {
    a1[5] &= ~(1 << v4);
    v5 = !_BitScanForward((unsigned int *)&v7, a1[5]);
    if ( !v5 )
      v2 = v7;
    result = (unsigned int)v2;
    a1[8] = result;
  }
  else
  {
    a1[4] &= ~(1 << v3);
    v5 = !_BitScanForward(&v3, a1[4]);
    if ( !v5 )
      v2 = v3;
    result = (unsigned int)v2;
    a1[7] = result;
  }
  ++a1[6];
  return result;
}
