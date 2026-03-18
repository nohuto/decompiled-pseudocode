/*
 * XREFs of ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180159888
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x18000D778 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18002D5D0 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z @ 0x180042324 (-SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180088CFC (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015937C (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18015A0E0 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18016FEBC (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z @ 0x1801E0B64 (-OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPE.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ProcessCreate(
        CIndirectSwapchainRenderTarget *this,
        struct CResourceTable *a2,
        struct _LUID *a3)
{
  struct CD3DDeviceLevel1 *v5; // rsi
  struct CVisual *Resource; // rax
  void *v7; // r14
  struct CVisual *v8; // rbx
  int v9; // ebx
  int v10; // r9d
  int D3DDevice; // eax
  int v12; // eax
  int updated; // eax
  int v14; // r15d
  int v15; // r12d
  bool v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  CComposition *v20; // rcx
  unsigned int v22; // [rsp+20h] [rbp-69h]
  struct CD3DDeviceLevel1 *v23; // [rsp+30h] [rbp-59h] BYREF
  __int64 v24; // [rsp+38h] [rbp-51h]
  __int64 v25; // [rsp+40h] [rbp-49h] BYREF
  __int64 v26; // [rsp+48h] [rbp-41h] BYREF
  struct CVisual *v27; // [rsp+50h] [rbp-39h]
  _DWORD v28[3]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v29; // [rsp+64h] [rbp-25h]
  __int64 v30; // [rsp+6Ch] [rbp-1Dh]
  _DWORD v31[12]; // [rsp+78h] [rbp-11h] BYREF

  v24 = 0LL;
  v5 = 0LL;
  v23 = 0LL;
  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, a3[3].LowPart, 0x97u);
  v7 = (void *)a3[1];
  v26 = 0LL;
  v25 = 0LL;
  v8 = Resource;
  v27 = Resource;
  memset_0(v31, 0, 0x2CuLL);
  if ( v8 )
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, a3[2], &v23);
    v9 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D3DDevice, 0x24u);
      v5 = v23;
      goto LABEL_27;
    }
    v5 = v23;
    v12 = CD3DDeviceLevel1::OpenIndirectSwapchain(v23, v7);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x2Du);
      goto LABEL_27;
    }
    v7 = 0LL;
    updated = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v24 + 56LL))(v24, 0LL, (char *)this + 528);
    v9 = updated;
    if ( updated < 0 )
    {
      v22 = 54;
    }
    else
    {
      updated = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 66))(
                  *((_QWORD *)this + 66),
                  &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
                  &v26);
      v9 = updated;
      if ( updated < 0 )
      {
        v22 = 55;
      }
      else
      {
        (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v26 + 80LL))(v26, v31);
        v14 = v31[0];
        v15 = v31[1];
        updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, (enum DXGI_FORMAT)v31[4]);
        v9 = updated;
        if ( updated < 0 )
        {
          v22 = 63;
        }
        else
        {
          updated = CRenderTarget::SetRoot(this, v27, v16);
          v9 = updated;
          if ( updated < 0 )
          {
            v22 = 66;
          }
          else
          {
            v17 = v24;
            *((_QWORD *)this + 65) = v24;
            if ( v17 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
            *((_DWORD *)this + 90) = v14;
            *((_DWORD *)this + 91) = v15;
            *((_DWORD *)this + 136) = v14;
            *((_DWORD *)this + 137) = v15;
            *((struct _LUID *)this + 67) = a3[2];
            *((_BYTE *)this + 266) = 1;
            updated = CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer((struct _LUID *)this);
            v9 = updated;
            if ( updated < 0 )
            {
              v22 = 79;
            }
            else
            {
              updated = (****((__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))this + 34))(
                          **((_QWORD **)this + 34),
                          &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
                          &v25);
              v9 = updated;
              if ( updated < 0 )
              {
                v22 = 80;
              }
              else
              {
                updated = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 24LL))(
                            v25,
                            ((unsigned __int64)this + 80) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
                v9 = updated;
                if ( updated >= 0 )
                {
                  v18 = v25;
                  v25 = 0LL;
                  *((_QWORD *)this + 17) = v18;
                  COffScreenRenderTarget::ReleaseRenderTargets(this);
                  goto LABEL_27;
                }
                v22 = 82;
              }
            }
          }
        }
      }
    }
    v10 = updated;
  }
  else
  {
    v9 = -2003303421;
    v22 = 31;
    v10 = -2003303421;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v22);
LABEL_27:
  if ( *((_QWORD *)this + 66) )
  {
    LODWORD(v23) = 2;
    (*(void (__fastcall **)(__int64, __int64, struct CD3DDeviceLevel1 **))(*(_QWORD *)v24 + 64LL))(v24, 4LL, &v23);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 66) + 16LL))(*((_QWORD *)this + 66));
  }
  if ( v9 < 0 )
    CIndirectSwapchainRenderTarget::Unregister(this);
  ReleaseInterfaceNoNULL<IWICBitmap>(v26);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v5 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v5 + 472));
  if ( v7 )
    CloseHandle(v7);
  v20 = (CComposition *)*((_QWORD *)this + 2);
  v28[0] = 19;
  v28[1] = 0;
  v28[2] = v9;
  v29 = 0LL;
  v30 = 0LL;
  CComposition::NotifyHelper(v20, (struct MIL_MESSAGE *)v28, v19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  return 0LL;
}
