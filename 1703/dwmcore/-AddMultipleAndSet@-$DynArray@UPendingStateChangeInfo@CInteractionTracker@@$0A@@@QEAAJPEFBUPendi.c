/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UPendingStateChangeInfo@CInteractionTracker@@$0A@@@QEAAJPEFBUPendingStateChangeInfo@CInteractionTracker@@I@Z @ 0x18016C018
 * Callers:
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x180160844 (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMod.c)
 *     ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x18016C20C (-AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x180176CCC (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ?CopyStops@CGradientTextureGenerator@@CAJPEBU_D3DCOLORVALUE@@PEBMIPEAV?$DynArray@UMILGradientStop@@$0A@@@@Z @ 0x1801C0F10 (-CopyStops@CGradientTextureGenerator@@CAJPEBU_D3DCOLORVALUE@@PEBMIPEAV-$DynArray@UMILGradientSto.c)
 *     ?RepositionStopsForSmallGradientSpans@CGradientTextureGenerator@@CAJPEBVCGradientSpanInfo@@PEBU_D3DCOLORVALUE@@1PEAV?$DynArray@UMILGradientStop@@$0A@@@@Z @ 0x1801C12B4 (-RepositionStopsForSmallGradientSpans@CGradientTextureGenerator@@CAJPEBVCGradientSpanInfo@@PEBU_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<CInteractionTracker::PendingStateChangeInfo,0>::AddMultipleAndSet(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v6; // ecx
  unsigned int v7; // r8d
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax

  v3 = *(unsigned int *)(a1 + 24);
  v6 = v3 + 1;
  v7 = v3 + 1;
  if ( (int)v3 + 1 < (unsigned int)v3 )
    v7 = a3;
  v8 = v6 < (unsigned int)v3 ? 0x80070216 : 0;
  if ( v6 < (unsigned int)v3 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB5u);
  }
  else if ( v7 > *(_DWORD *)(a1 + 20) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x14u, 1, a2);
    v8 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
  }
  else
  {
    v9 = *(_QWORD *)a1;
    v10 = 5 * v3;
    *(_OWORD *)(v9 + 4 * v10) = *(_OWORD *)a2;
    *(_DWORD *)(v9 + 4 * v10 + 16) = *(_DWORD *)(a2 + 16);
    *(_DWORD *)(a1 + 24) = v7;
  }
  return v8;
}
