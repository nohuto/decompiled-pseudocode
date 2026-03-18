/*
 * XREFs of ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x180076BDC
 * Callers:
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x180010D80 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180010EA8 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180015000 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001A4D0 (-CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x18001A6C0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180029EC0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180041E30 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x1800ABA7C (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x18011DBD8 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateTokenThread@CSurfaceManager@@IEAAJXZ @ 0x180131634 (-CreateTokenThread@CSurfaceManager@@IEAAJXZ.c)
 */

__int64 __fastcall CSurfaceManager::ResetTokenThread(CSurfaceManager *this)
{
  unsigned int v2; // ebx
  void *v3; // rcx
  DWORD ThreadId; // ebx
  signed int TokenThread; // eax

  v2 = -2147467260;
  v3 = (void *)*((_QWORD *)this + 51);
  if ( v3 )
  {
    if ( !*((_BYTE *)this + 424) )
    {
      ThreadId = GetThreadId(v3);
      if ( ThreadId != GetCurrentThreadId() )
        SetEvent(*((HANDLE *)this + 52));
      return 0;
    }
  }
  else
  {
    TokenThread = CSurfaceManager::CreateTokenThread(this);
    v2 = TokenThread;
    if ( TokenThread < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, TokenThread, 0x93u);
  }
  return v2;
}
