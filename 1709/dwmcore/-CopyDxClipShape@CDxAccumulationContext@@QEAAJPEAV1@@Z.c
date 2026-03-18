/*
 * XREFs of ?CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z @ 0x18018B6E0
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x18009C6A4 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 * Callees:
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180034E90 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z @ 0x180097E78 (-Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDxAccumulationContext::CopyDxClipShape(
        CDxAccumulationContext *this,
        struct CDxAccumulationContext *a2)
{
  struct CRegionShape **v2; // rdi
  CRegionShape *v4; // rcx
  unsigned int v5; // ebx
  __int64 v7; // rcx
  signed int v8; // eax
  __int64 v9; // rcx

  v2 = (struct CRegionShape **)((char *)this + 8);
  v4 = (CRegionShape *)*((_QWORD *)this + 1);
  v5 = 0;
  if ( v4 )
  {
    CRegionShape::`vector deleting destructor'(v4, 1);
    *v2 = 0LL;
  }
  v7 = *((_QWORD *)a2 + 1);
  if ( v7 && (v8 = CRegionShape::Create(*(struct ID2D1RegionGeometry **)(v7 + 8), v2), v5 = v8, v8 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xC3u);
  }
  else
  {
    v9 = *(_QWORD *)this;
    *((_BYTE *)this + 16) = *((_BYTE *)a2 + 16);
    *(_BYTE *)(v9 + 1008) = 0;
    CVisual::PropagateFlags(v9, 5u, 0);
  }
  return v5;
}
