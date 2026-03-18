/*
 * XREFs of ?ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETREDRAWREGIONMODE@@@Z @ 0x18012B270
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetRedrawRegionMode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETREDRAWREGIONMODE *a3)
{
  char v3; // al
  bool v4; // dl
  char v5; // al
  __int64 v6; // rax

  v3 = *((_BYTE *)this + 89);
  v4 = (v3 & 0x40) != 0;
  if ( *((_DWORD *)a3 + 2) )
    v5 = v3 | 0x40;
  else
    v5 = v3 & 0xBF;
  *((_BYTE *)this + 89) = v5;
  if ( v4 != ((v5 & 0x40) != 0) )
  {
    v6 = *((_QWORD *)this + 2);
    if ( (*((_BYTE *)this + 89) & 0x40) != 0 )
      ++*(_DWORD *)(v6 + 1344);
    else
      --*(_DWORD *)(v6 + 1344);
    CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0, 0);
  }
  return 0LL;
}
