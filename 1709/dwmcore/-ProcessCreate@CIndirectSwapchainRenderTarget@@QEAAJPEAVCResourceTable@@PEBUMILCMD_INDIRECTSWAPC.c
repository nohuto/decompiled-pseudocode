/*
 * XREFs of ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180137474
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001B0E8 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x18001B418 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x180079310 (-SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800AAB4C (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180137C48 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18014A10C (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z @ 0x1801A8104 (-OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPE.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ProcessCreate(
        CComposition **this,
        struct CResourceTable *a2,
        struct _LUID *a3)
{
  struct CD3DDeviceLevel1 *v5; // rsi
  struct CVisual *Resource; // rax
  void *v7; // r14
  struct CVisual *v8; // rbx
  int v9; // ebx
  DWORD v10; // r9d
  signed int D3DDevice; // eax
  signed int v12; // eax
  int updated; // eax
  int v14; // r15d
  int v15; // r12d
  CComposition *v16; // rcx
  struct _LUID v17; // rax
  __int64 v18; // r8
  CComposition *v19; // rcx
  unsigned int v21; // [rsp+20h] [rbp-69h]
  struct CD3DDeviceLevel1 *v22; // [rsp+30h] [rbp-59h] BYREF
  CComposition *v23; // [rsp+38h] [rbp-51h]
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-49h] BYREF
  __int64 v25; // [rsp+48h] [rbp-41h] BYREF
  struct CVisual *v26; // [rsp+50h] [rbp-39h]
  _DWORD v27[3]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v28; // [rsp+64h] [rbp-25h]
  __int64 v29; // [rsp+6Ch] [rbp-1Dh]
  _DWORD v30[12]; // [rsp+78h] [rbp-11h] BYREF

  v23 = 0LL;
  v5 = 0LL;
  v22 = 0LL;
  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, a3[3].LowPart, 0x86u);
  v7 = (void *)a3[1];
  v24 = 0LL;
  v25 = 0LL;
  v8 = Resource;
  v26 = Resource;
  memset_0(v30, 0, 0x2CuLL);
  if ( !v8 )
  {
    v9 = -2003303421;
    v21 = 31;
    v10 = -2003303421;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, v21);
    goto LABEL_23;
  }
  CIndirectSwapchainRenderTarget::Unregister((CIndirectSwapchainRenderTarget *)this);
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, a3[2], &v22);
  v9 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, D3DDevice, 0x27u);
    v5 = v22;
    goto LABEL_23;
  }
  v5 = v22;
  v12 = CD3DDeviceLevel1::OpenIndirectSwapchain(v22, v7);
  v9 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x30u);
    goto LABEL_23;
  }
  v7 = 0LL;
  updated = (*(__int64 (__fastcall **)(CComposition *, _QWORD, _QWORD))(*(_QWORD *)v23 + 56LL))(v23, 0LL, &v24);
  v9 = updated;
  if ( updated < 0 )
  {
    v21 = 56;
    goto LABEL_20;
  }
  updated = (**v24)(v24, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v25);
  v9 = updated;
  if ( updated < 0 )
  {
    v21 = 57;
    goto LABEL_20;
  }
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v25 + 80LL))(v25, v30);
  v14 = v30[0];
  v15 = v30[1];
  updated = COffScreenRenderTarget::UpdatePixelFormatInfo((COffScreenRenderTarget *)this, (enum DXGI_FORMAT)v30[4]);
  v9 = updated;
  if ( updated < 0 )
  {
    v21 = 65;
    goto LABEL_20;
  }
  updated = CRenderTarget::SetRoot((CRenderTarget *)this, v26);
  v9 = updated;
  if ( updated < 0 )
  {
    v21 = 68;
    goto LABEL_20;
  }
  updated = CRenderTargetManager::AddRenderTarget(*((CRenderTargetManager **)this[2] + 9), (struct CRenderTarget *)this);
  v9 = updated;
  if ( updated < 0 )
  {
    v21 = 71;
LABEL_20:
    v10 = updated;
    goto LABEL_3;
  }
  v16 = v23;
  this[58] = v23;
  if ( v16 )
    (*(void (__fastcall **)(CComposition *))(*(_QWORD *)v16 + 8LL))(v16);
  *((_DWORD *)this + 76) = v14;
  *((_DWORD *)this + 77) = v15;
  *((_DWORD *)this + 122) = v14;
  *((_DWORD *)this + 123) = v15;
  v17 = a3[2];
  *((_BYTE *)this + 456) &= ~8u;
  this[60] = (CComposition *)v17;
  *((_BYTE *)this + 210) = 1;
LABEL_23:
  if ( v24 )
  {
    LODWORD(v22) = 2;
    (*(void (__fastcall **)(CComposition *, __int64, struct CD3DDeviceLevel1 **))(*(_QWORD *)v23 + 64LL))(
      v23,
      4LL,
      &v22);
  }
  if ( v9 < 0 )
    CIndirectSwapchainRenderTarget::Unregister((CIndirectSwapchainRenderTarget *)this);
  ReleaseInterfaceNoNULL<CManipulationManager>(v25);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v24);
  if ( v23 )
    (*(void (__fastcall **)(CComposition *))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v5 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v5 + 472));
  if ( v7 )
    CloseHandle(v7);
  v19 = this[2];
  v27[0] = 19;
  v27[1] = 0;
  v27[2] = v9;
  v28 = 0LL;
  v29 = 0LL;
  CComposition::NotifyHelper(v19, (struct MIL_MESSAGE *)v27, v18);
  return 0LL;
}
