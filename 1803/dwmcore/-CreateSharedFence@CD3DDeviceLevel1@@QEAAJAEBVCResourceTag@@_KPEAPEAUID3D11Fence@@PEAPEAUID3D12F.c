/*
 * XREFs of ?CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12Fence@@@Z @ 0x1801DF6A4
 * Callers:
 *     ?Initialize@CFramebuffer@CComputeScribbleRenderer@@AEAAJXZ @ 0x18021C744 (-Initialize@CFramebuffer@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateSharedHandleFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW4D3D11_FENCE_FLAG@@@Z @ 0x1800753D4 (-CreateSharedHandleFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180156CCC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?EnsureBeginCreateD3D12Resources@CD3DDeviceLevel1@@AEAAJXZ @ 0x1801DFC1C (-EnsureBeginCreateD3D12Resources@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?GetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x1801E0288 (-GetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021E83C (-reset@-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateSharedFence(
        CD3DDeviceLevel1 *this,
        struct ID3D11Fence *a2,
        __int64 a3,
        struct ID3D11Fence **a4,
        struct ID3D12Fence **a5)
{
  struct ID3D11Fence *v5; // rbx
  int D3D12Resources; // eax
  unsigned int v9; // edi
  struct ID3D11Fence *v10; // rsi
  const struct CResourceTag *v11; // rdx
  struct ID3D11Fence *v12; // r8
  int v13; // eax
  int v14; // eax
  struct ID3D12Fence *v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-20h]
  HANDLE hObject[2]; // [rsp+30h] [rbp-10h] BYREF
  struct ID3D11Fence *v19; // [rsp+78h] [rbp+38h] BYREF
  struct ID3D12Fence *v20; // [rsp+80h] [rbp+40h] BYREF

  v19 = a2;
  v5 = 0LL;
  v20 = 0LL;
  hObject[0] = 0LL;
  D3D12Resources = CD3DDeviceLevel1::EnsureBeginCreateD3D12Resources(this);
  v9 = D3D12Resources;
  if ( D3D12Resources < 0 )
  {
    v17 = 2196;
    goto LABEL_13;
  }
  D3D12Resources = CD3DDeviceLevel1::GetD3D12DeviceNoRef(this, (struct ID3D12Device **)&v19);
  v9 = D3D12Resources;
  if ( D3D12Resources < 0 )
  {
    v17 = 2199;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D3D12Resources, v17);
    goto LABEL_14;
  }
  v10 = v19;
  if ( !v19 )
  {
    v9 = -2003292404;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292404, 0x89Bu);
    goto LABEL_14;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    hObject,
    0LL);
  v19 = 0LL;
  v13 = CD3DDeviceLevel1::CreateSharedHandleFence(this, v11, v12, &v19, hObject, D3D11_FENCE_FLAG_NONE);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x89Eu);
  }
  else
  {
    wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(&v20);
    v14 = ((__int64 (__fastcall *)(struct ID3D11Fence *, HANDLE, GUID *, struct ID3D12Fence **))v10->lpVtbl[3].Release)(
            v10,
            hObject[0],
            &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76,
            &v20);
    v9 = v14;
    if ( v14 >= 0 )
    {
      v15 = v20;
      v20 = 0LL;
      *a4 = v19;
      *a5 = v15;
      goto LABEL_14;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x8A0u);
  }
  v5 = v19;
LABEL_14:
  if ( (unsigned __int64)hObject[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(hObject[0]);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v20);
  if ( v5 )
    ((void (__fastcall *)(struct ID3D11Fence *))v5->lpVtbl->Release)(v5);
  return v9;
}
