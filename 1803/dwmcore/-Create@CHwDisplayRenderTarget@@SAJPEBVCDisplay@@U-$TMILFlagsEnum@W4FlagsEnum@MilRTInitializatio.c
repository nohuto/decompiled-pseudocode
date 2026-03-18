/*
 * XREFs of ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800C80C8
 * Callers:
 *     ?CreateHwRenderTarget@CDisplay@@AEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x1800B7648 (-CreateHwRenderTarget@CDisplay@@AEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x18007C9C4 (--0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180088CFC (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x1800B76C4 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBV.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x1800B7888 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0CHDRConversionRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1801E714C (--0CHDRConversionRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR.c)
 *     ??0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1801E7214 (--0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::Create(CDisplay *this, unsigned int a2, __int64 *a3)
{
  struct _LUID v4; // rdx
  int D3DDevice; // eax
  struct CD3DDeviceLevel1 *v8; // rsi
  int v9; // edi
  int v10; // eax
  unsigned int *v11; // rax
  __int64 v12; // r10
  __int64 v13; // rax
  _DWORD *DisplayId; // rax
  __int64 v16; // r10
  _DWORD *v17; // rax
  __int64 v18; // r10
  unsigned int v19; // eax
  __int128 v20; // [rsp+40h] [rbp-19h] BYREF
  int v21; // [rsp+50h] [rbp-9h]
  void *retaddr; // [rsp+B8h] [rbp+5Fh]
  __int64 v23; // [rsp+C0h] [rbp+67h] BYREF
  struct CD3DDeviceLevel1 *v24; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v25; // [rsp+D8h] [rbp+7Fh] BYREF

  *a3 = 0LL;
  v4 = (struct _LUID)*((_QWORD *)this + 31);
  v24 = 0LL;
  LOBYTE(v23) = 0;
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v4, &v24);
  v8 = v24;
  v9 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v19 = 48;
  }
  else
  {
    v10 = CDisplay::CalcSwapChainParameters(this, a2, (__int64)v24, (__int64)&v20, (int *)&v25, &v24, (bool *)&v23);
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277AC0, 2u, v10, 0x37u);
    if ( (a2 & 0x2000) == 0 )
      goto LABEL_20;
    if ( !(_BYTE)v23 )
      a2 &= ~0x2000u;
    if ( (a2 & 0x2000) != 0 )
    {
      if ( !HeapAlloc(WPF::g_processHeap, 0, 0x298uLL) )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      DisplayId = CDisplay::GetDisplayId((__int64)this, &v23);
      v13 = CHwStereoFullScreenRenderTarget::CHwStereoFullScreenRenderTarget(
              v16,
              v8,
              &v20,
              (unsigned int)v25,
              (_DWORD)v24,
              *DisplayId);
    }
    else
    {
LABEL_20:
      if ( v21 == 87 || v21 == 28 || v21 == 10 )
      {
        if ( !HeapAlloc(WPF::g_processHeap, 0, 0x258uLL) )
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        v11 = CDisplay::GetDisplayId((__int64)this, &v23);
        v13 = CHwFullScreenRenderTarget::CHwFullScreenRenderTarget(
                v12,
                (__int64)v8,
                &v20,
                (unsigned int)v25,
                (int)v24,
                *v11);
      }
      else
      {
        if ( !HeapAlloc(WPF::g_processHeap, 0, 0x3F0uLL) )
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        v17 = CDisplay::GetDisplayId((__int64)this, &v23);
        v13 = CHDRConversionRenderTarget::CHDRConversionRenderTarget(
                v18,
                v8,
                &v20,
                (unsigned int)v25,
                (_DWORD)v24,
                *v17);
      }
    }
    *a3 = v13;
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v9 = (*(__int64 (__fastcall **)(__int64, CDisplay *, _QWORD))(*(_QWORD *)*a3 + 264LL))(*a3, this, a2);
      if ( v9 >= 0 )
        goto LABEL_10;
      v19 = 105;
    }
    else
    {
      v9 = -2147024882;
      v19 = 99;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277AC0, 2u, v9, v19);
  if ( *a3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a3 + 16LL))(*a3);
    *a3 = 0LL;
  }
LABEL_10:
  if ( v8 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v8 + 472));
  return (unsigned int)v9;
}
