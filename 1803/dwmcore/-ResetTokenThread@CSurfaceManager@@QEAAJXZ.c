/*
 * XREFs of ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18002030C
 * Callers:
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18001F0FC (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x18002E598 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005DBF0 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180067410 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006ED20 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18008909C (-CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180089290 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x1801407A8 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 * Callees:
 *     ?CreateTokenThread@CSurfaceManager@@IEAAJXZ @ 0x18001FF5C (-CreateTokenThread@CSurfaceManager@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSurfaceManager::ResetTokenThread(CSurfaceManager *this)
{
  unsigned int v2; // ebx
  void *v3; // rcx
  DWORD ThreadId; // ebx
  int TokenThread; // eax

  v2 = -2147467260;
  v3 = (void *)*((_QWORD *)this + 42);
  if ( v3 )
  {
    if ( !*((_BYTE *)this + 352) )
    {
      ThreadId = GetThreadId(v3);
      if ( ThreadId != GetCurrentThreadId() )
        SetEvent(*((HANDLE *)this + 43));
      return 0;
    }
  }
  else
  {
    TokenThread = CSurfaceManager::CreateTokenThread((HANDLE *)this);
    v2 = TokenThread;
    if ( TokenThread < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TokenThread, 0x93u);
  }
  return v2;
}
