/*
 * XREFs of ?ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETREDRAWREGIONMODE@@@Z @ 0x180177AAC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetRedrawRegionMode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETREDRAWREGIONMODE *a3)
{
  char v3; // al
  char v4; // dl
  char v5; // al
  char v6; // al
  bool v7; // zf
  __int64 v8; // rax

  v3 = *((_BYTE *)this + 92);
  v4 = (v3 & 0x40) != 0;
  if ( *((_DWORD *)a3 + 2) )
    v5 = v3 | 0x40;
  else
    v5 = v3 & 0xBF;
  *((_BYTE *)this + 92) = v5;
  v6 = (v5 & 0x40) != 0;
  if ( v4 != v6 )
  {
    v7 = v6 == 0;
    v8 = *((_QWORD *)this + 2);
    if ( v7 )
      --*(_DWORD *)(v8 + 1280);
    else
      ++*(_DWORD *)(v8 + 1280);
    CVisual::PropagateFlags((__int64)this, 5u, 0);
  }
  return 0LL;
}
