/*
 * XREFs of ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x18013F0AC
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180043720 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180079180 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-.c)
 *     ?DDAExcludeVisualSetExclude@CComposition@@QEAAX_N@Z @ 0x18013E538 (-DDAExcludeVisualSetExclude@CComposition@@QEAAX_N@Z.c)
 *     ?MagnifierSetExclude@CComposition@@QEAAX_N@Z @ 0x18014A430 (-MagnifierSetExclude@CComposition@@QEAAX_N@Z.c)
 *     ?Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETEXCLUDEFROMDDA@@@Z @ 0x18014A77C (-Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMIL.c)
 *     ?Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x18014A820 (-Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_P.c)
 *     ?SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z @ 0x1801A98AC (-SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  if ( a2 >= v2 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x21Fu);
  }
  else
  {
    if ( a2 < v2 - 1 )
    {
      *(_QWORD *)(*(_QWORD *)a1 + 8LL * a2) = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (v2 - 1));
      v2 = *(_DWORD *)(a1 + 24);
    }
    *(_DWORD *)(a1 + 24) = v2 - 1;
  }
  return v3;
}
