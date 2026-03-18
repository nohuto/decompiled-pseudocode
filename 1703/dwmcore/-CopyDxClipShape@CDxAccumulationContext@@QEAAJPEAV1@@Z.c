/*
 * XREFs of ?CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z @ 0x18018109C
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x180053F34 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 * Callees:
 *     ?Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z @ 0x180006D30 (-Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18006F290 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 */

__int64 __fastcall CDxAccumulationContext::CopyDxClipShape(
        CDxAccumulationContext *this,
        struct CDxAccumulationContext *a2)
{
  struct CRegionShape **v2; // rdi
  CRegionShape *v4; // rcx
  unsigned int v5; // ebx
  __int64 v7; // rcx
  int v8; // eax
  struct CVisual *v9; // rcx

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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC3u);
  }
  else
  {
    v9 = *(struct CVisual **)this;
    *((_BYTE *)this + 16) = *((_BYTE *)a2 + 16);
    *((_BYTE *)v9 + 984) = 0;
    CVisual::PropagateFlags(v9, 1, 1, 0, 0, 0, 0, 0);
  }
  return v5;
}
