/*
 * XREFs of ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C015505C
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00AC42C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00DC9B0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C0108110 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 *     DxgkDisplayOnOff @ 0x1C010F5D0 (DxgkDisplayOnOff.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(DXGADAPTER **this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // r8d
  unsigned int v5; // edx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 6963LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = *((_DWORD *)this + 20);
  v5 = 0;
  if ( !v4 )
    return 0;
  while ( !*((_QWORD *)this[14] + 470 * v5 + 86) )
  {
    if ( ++v5 >= v4 )
      return 0;
  }
  return 1;
}
