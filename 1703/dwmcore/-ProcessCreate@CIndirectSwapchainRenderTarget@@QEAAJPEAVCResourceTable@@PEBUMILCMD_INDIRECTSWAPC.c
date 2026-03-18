/*
 * XREFs of ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1801293EC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800431FC (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18005BB24 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x18006B4C8 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1800B4BF8 (-SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180129734 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180148D20 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z @ 0x180197264 (-OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPE.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ProcessCreate(
        CComposition **this,
        struct CResourceTable *a2,
        struct _LUID *a3)
{
  struct CD3DDeviceLevel1 *v4; // rsi
  struct CVisual *Resource; // rax
  void *v7; // r14
  struct CVisual *v8; // rbx
  int v9; // ebx
  int v10; // r9d
  int D3DDevice; // eax
  __int64 v12; // r8
  int v13; // eax
  int updated; // eax
  int v15; // r15d
  int v16; // r12d
  CComposition *v17; // rcx
  struct _LUID v18; // rax
  CComposition *v19; // rcx
  unsigned int v21; // [rsp+20h] [rbp-69h]
  struct CD3DDeviceLevel1 *v22; // [rsp+30h] [rbp-59h] BYREF
  CComposition *v23; // [rsp+38h] [rbp-51h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-49h] BYREF
  __int64 v25; // [rsp+48h] [rbp-41h] BYREF
  struct CVisual *v26; // [rsp+50h] [rbp-39h]
  _DWORD v27[3]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v28; // [rsp+64h] [rbp-25h]
  __int64 v29; // [rsp+6Ch] [rbp-1Dh]
  _DWORD v30[12]; // [rsp+78h] [rbp-11h] BYREF

  v23 = 0LL;
  v4 = 0LL;
  v22 = 0LL;
  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, a3[3].LowPart, 0x1Fu);
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v21);
    goto LABEL_23;
  }
  CIndirectSwapchainRenderTarget::Unregister((CIndirectSwapchainRenderTarget *)this);
  D3DDevice = CD3DDeviceManager::GetD3DDevice(
                (CD3DDeviceManager *)&g_D3DDeviceManager,
                (struct _GUID *)((char *)this[2] + 324),
                a3[2],
                &v22);
  v9 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDevice, 0x28u);
    v4 = v22;
    goto LABEL_23;
  }
  v4 = v22;
  v13 = CD3DDeviceLevel1::OpenIndirectSwapchain(v22, v7, v12, 5LL, 0x10000000, &v23);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x31u);
    goto LABEL_23;
  }
  v7 = 0LL;
  updated = (*(__int64 (__fastcall **)(CComposition *, _QWORD, _QWORD))(*(_QWORD *)v23 + 56LL))(v23, 0LL, &v24);
  v9 = updated;
  if ( updated < 0 )
  {
    v21 = 57;
    goto LABEL_20;
  }
  updated = (**v24)(v24, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v25);
  v9 = updated;
  if ( updated < 0 )
  {
    v21 = 58;
    goto LABEL_20;
  }
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v25 + 80LL))(v25, v30);
  v15 = v30[0];
  v16 = v30[1];
  updated = COffScreenRenderTarget::UpdatePixelFormatInfo((COffScreenRenderTarget *)this, (enum DXGI_FORMAT)v30[4]);
  v9 = updated;
  if ( updated < 0 )
  {
    v21 = 66;
    goto LABEL_20;
  }
  updated = CRenderTarget::SetRoot((CRenderTarget *)this, v26);
  v9 = updated;
  if ( updated < 0 )
  {
    v21 = 69;
    goto LABEL_20;
  }
  updated = CRenderTargetManager::AddRenderTarget(*((CRenderTargetManager **)this[2] + 4), (struct CRenderTarget *)this);
  v9 = updated;
  if ( updated < 0 )
  {
    v21 = 72;
LABEL_20:
    v10 = updated;
    goto LABEL_3;
  }
  v17 = v23;
  this[58] = v23;
  if ( v17 )
    (*(void (__fastcall **)(CComposition *))(*(_QWORD *)v17 + 8LL))(v17);
  *((_DWORD *)this + 76) = v15;
  *((_DWORD *)this + 77) = v16;
  *((_DWORD *)this + 122) = v15;
  *((_DWORD *)this + 123) = v16;
  v18 = a3[2];
  *((_BYTE *)this + 456) &= ~8u;
  this[60] = (CComposition *)v18;
  *((_BYTE *)this + 288) = 1;
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
  ReleaseInterfaceNoNULL<CD2DPencil>(v25);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v24);
  if ( v23 )
    (*(void (__fastcall **)(CComposition *))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v4 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v4 + 488));
  if ( v7 )
    CloseHandle(v7);
  v19 = this[2];
  v27[0] = 19;
  v27[1] = 0;
  v27[2] = v9;
  v28 = 0LL;
  v29 = 0LL;
  CComposition::NotifyHelper(v19, (struct MIL_MESSAGE *)v27);
  return 0LL;
}
