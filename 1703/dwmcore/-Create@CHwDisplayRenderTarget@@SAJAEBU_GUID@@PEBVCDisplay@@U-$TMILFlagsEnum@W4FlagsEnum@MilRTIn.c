/*
 * XREFs of ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800C93E0
 * Callers:
 *     ?CreateHwRenderTarget@CDisplay@@AEAAJAEBU_GUID@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x1800B796C (-CreateHwRenderTarget@CDisplay@@AEAAJAEBU_GUID@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800431FC (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x180070A60 (--0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_.c)
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x1800B7A48 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBV.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x1800B8124 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x18019C2A8 (--0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::Create(struct _GUID *a1, struct _LUID *this, unsigned int a3, __int64 *a4)
{
  int D3DDevice; // eax
  struct CD3DDeviceLevel1 *v8; // r13
  unsigned int v9; // edi
  int v10; // eax
  unsigned int *v11; // rax
  __int64 v12; // r10
  __int64 v13; // rax
  _DWORD *DisplayId; // rax
  __int64 v16; // r10
  unsigned int v17; // [rsp+20h] [rbp-49h]
  __int64 v18; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v19[112]; // [rsp+50h] [rbp-19h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]
  __int64 v22; // [rsp+D8h] [rbp+6Fh] BYREF
  struct CD3DDeviceLevel1 *v23; // [rsp+E8h] [rbp+7Fh] BYREF

  *a4 = 0LL;
  v23 = 0LL;
  LOBYTE(v22) = 0;
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, a1, this[28], &v23);
  v8 = v23;
  v9 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v17 = 57;
  }
  else
  {
    v10 = CDisplay::CalcSwapChainParameters((CDisplay *)this, a3, v23, (__int64)v19, &v18, (int *)&v23, (char *)&v22);
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v10, 0x40u);
    if ( (a3 & 0x2000) == 0 )
      goto LABEL_5;
    if ( !(_BYTE)v22 )
      a3 &= ~0x2000u;
    if ( (a3 & 0x2000) != 0 )
    {
      if ( !HeapAlloc(WPF::g_processHeap, 0, 0x1A0uLL) )
      {
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
        __debugbreak();
      }
      DisplayId = CDisplay::GetDisplayId((__int64)this, &v22);
      v13 = CHwStereoFullScreenRenderTarget::CHwStereoFullScreenRenderTarget(
              v16,
              v8,
              v19,
              (unsigned int)v18,
              (_DWORD)v23,
              *DisplayId);
    }
    else
    {
LABEL_5:
      if ( !HeapAlloc(WPF::g_processHeap, 0, 0x170uLL) )
      {
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
        __debugbreak();
      }
      v11 = CDisplay::GetDisplayId((__int64)this, &v22);
      v13 = CHwFullScreenRenderTarget::CHwFullScreenRenderTarget(
              v12,
              (__int64)v8,
              (__int64)v19,
              (unsigned int)v18,
              (int)v23,
              *v11);
    }
    *a4 = v13;
    if ( !v13 )
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, -2147024882, 0x5Eu);
      goto LABEL_23;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    D3DDevice = (*(__int64 (__fastcall **)(__int64, struct _GUID *, struct _LUID *, _QWORD))(*(_QWORD *)*a4 + 216LL))(
                  *a4,
                  a1,
                  this,
                  a3);
    v9 = D3DDevice;
    if ( D3DDevice >= 0 )
      goto LABEL_9;
    v17 = 100;
  }
  MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, D3DDevice, v17);
LABEL_23:
  if ( *a4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a4 + 16LL))(*a4);
    *a4 = 0LL;
  }
LABEL_9:
  if ( v8 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v8 + 488));
  return v9;
}
