/*
 * XREFs of ?ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETREDRAWREGIONMODE@@@Z @ 0x1801A8648
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetRedrawRegionMode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETREDRAWREGIONMODE *a3)
{
  char v3; // al
  char v5; // cl
  char v6; // al
  char v7; // al
  char v8; // al
  __int64 v9; // rcx

  v3 = *((_BYTE *)this + 93);
  v5 = v3 & 1;
  if ( *((_DWORD *)a3 + 2) )
  {
    v6 = v3 | 1;
    *((_BYTE *)this + 93) = v6;
    if ( *((_DWORD *)a3 + 3) )
      v7 = v6 | 2;
    else
      v7 = v6 & 0xFD;
  }
  else
  {
    v7 = v3 & 0xFE;
  }
  *((_BYTE *)this + 93) = v7;
  v8 = v7 & 1;
  if ( v5 != v8 )
  {
    v9 = *((_QWORD *)this + 2);
    if ( v8 )
      ++*(_DWORD *)(v9 + 1304);
    else
      --*(_DWORD *)(v9 + 1304);
    CVisual::PropagateFlags((__int64)this, 5u, 0);
  }
  return 0LL;
}
