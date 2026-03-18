/*
 * XREFs of ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1801AE008
 * Callers:
 *     ?CreateHwRenderTarget@CDisplay@@AEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x180191368 (-CreateHwRenderTarget@CDisplay@@AEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001B0E8 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x180077F1C (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x180191118 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBV.c)
 *     ??0CHDRConversionRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1801ADB84 (--0CHDRConversionRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR.c)
 *     ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1801ADD14 (--0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_.c)
 *     ??0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1801ADD98 (--0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::Create(CDisplay *this, unsigned int a2, __int64 *a3)
{
  struct _LUID v4; // rdx
  signed int D3DDevice; // eax
  struct CD3DDeviceLevel1 *v8; // r14
  unsigned int v9; // edi
  signed int v10; // eax
  int *DisplayId; // rax
  __int64 v12; // r10
  __int64 v13; // rax
  int *v14; // rax
  __int64 v15; // r10
  int *v16; // rax
  __int64 v17; // r10
  unsigned int v19; // [rsp+20h] [rbp-39h]
  _BYTE v20[16]; // [rsp+40h] [rbp-19h] BYREF
  int v21; // [rsp+50h] [rbp-9h]
  const void *retaddr; // [rsp+B8h] [rbp+5Fh]
  __int64 v23; // [rsp+C0h] [rbp+67h] BYREF
  struct CD3DDeviceLevel1 *v24; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v25; // [rsp+D8h] [rbp+7Fh] BYREF

  *a3 = 0LL;
  v4 = (struct _LUID)*((_QWORD *)this + 28);
  v24 = 0LL;
  LOBYTE(v23) = 0;
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v4, &v24);
  v8 = v24;
  v9 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v19 = 47;
  }
  else
  {
    v10 = CDisplay::CalcSwapChainParameters(this, a2, (__int64)v24, (__int64)v20, &v25, (int *)&v24, &v23);
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021BE18, 1u, v10, 0x36u);
    if ( (a2 & 0x2000) == 0 )
      goto LABEL_13;
    if ( !(_BYTE)v23 )
      a2 &= ~0x2000u;
    if ( (a2 & 0x2000) != 0 )
    {
      if ( !HeapAlloc(WPF::g_processHeap, 0, 0x260uLL) )
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      DisplayId = CDisplay::GetDisplayId((__int64)this, &v23);
      v13 = CHwStereoFullScreenRenderTarget::CHwStereoFullScreenRenderTarget(
              v12,
              (__int64)v8,
              (__int64)v20,
              (unsigned int)v25,
              (int)v24,
              *DisplayId);
    }
    else
    {
LABEL_13:
      if ( v21 == 87 || v21 == 28 || v21 == 10 )
      {
        if ( !HeapAlloc(WPF::g_processHeap, 0, 0x230uLL) )
          ModuleFailFastForHRESULT(-2147024882, retaddr);
        v16 = CDisplay::GetDisplayId((__int64)this, &v23);
        v13 = CHwFullScreenRenderTarget::CHwFullScreenRenderTarget(
                v17,
                (__int64)v8,
                (__int64)v20,
                (unsigned int)v25,
                (int)v24,
                *v16);
      }
      else
      {
        if ( !HeapAlloc(WPF::g_processHeap, 0, 0x3C8uLL) )
          ModuleFailFastForHRESULT(-2147024882, retaddr);
        v14 = CDisplay::GetDisplayId((__int64)this, &v23);
        v13 = CHDRConversionRenderTarget::CHDRConversionRenderTarget(
                v15,
                (__int64)v8,
                (__int64)v20,
                v25,
                (int)v24,
                *v14);
      }
    }
    *a3 = v13;
    if ( !v13 )
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021BE18, 1u, 0x8007000E, 0x62u);
      goto LABEL_26;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    D3DDevice = (*(__int64 (__fastcall **)(__int64, CDisplay *, _QWORD))(*(_QWORD *)*a3 + 224LL))(*a3, this, a2);
    v9 = D3DDevice;
    if ( D3DDevice >= 0 )
      goto LABEL_28;
    v19 = 104;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021BE18, 1u, D3DDevice, v19);
LABEL_26:
  if ( *a3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a3 + 16LL))(*a3);
    *a3 = 0LL;
  }
LABEL_28:
  if ( v8 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v8 + 472));
  return v9;
}
