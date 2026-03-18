/*
 * XREFs of ?Initialize@CD3DPhysicalSwapChainBuffer@@AEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x1801A8D90
 * Callers:
 *     ?Create@CD3DPhysicalSwapChainBuffer@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x1801A8CD0 (-Create@CD3DPhysicalSwapChainBuffer@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18011F7F0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801202D0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12Fence@@@Z @ 0x1801A6698 (-CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12F.c)
 *     ?GetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x1801A7740 (-GetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 */

__int64 __fastcall CD3DPhysicalSwapChainBuffer::Initialize(
        CD3DPhysicalSwapChainBuffer *this,
        struct CD3DResourceManager *a2,
        struct ID3D11Texture2D *a3)
{
  char *v3; // rax
  char *v5; // rcx
  char **v7; // rdx
  unsigned int v9; // eax
  int D3D12DeviceNoRef; // eax
  int LastError; // ebx
  signed int v12; // eax
  signed int v13; // eax
  signed int v14; // eax
  const struct CResourceTag *v15; // rdx
  __int64 v16; // r8
  const struct CResourceTag *v17; // rdx
  __int64 v18; // r8
  const struct CResourceTag *v19; // rdx
  __int64 v20; // r8
  signed int SharedFence; // eax
  wil::details *Event; // rbx
  const char *v23; // r9
  bool v24; // sf
  DWORD v25; // r9d
  unsigned int v27; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v29; // [rsp+50h] [rbp+20h] BYREF
  HANDLE hObject; // [rsp+58h] [rbp+28h] BYREF
  struct ID3D12Device *v31; // [rsp+68h] [rbp+38h] BYREF

  *((_DWORD *)this + 16) = 0;
  v3 = (char *)this + 32;
  *((_BYTE *)this + 69) = 1;
  v5 = (char *)a2 + 32;
  v7 = (char **)*((_QWORD *)a2 + 5);
  if ( *v7 != v5 )
    __fastfail(3u);
  *(_QWORD *)v3 = v5;
  *((_QWORD *)v3 + 1) = v7;
  *v7 = v3;
  *((_QWORD *)v5 + 1) = v3;
  if ( *((_BYTE *)this + 68) )
    ++*((_DWORD *)a2 + 18);
  *((_DWORD *)a2 + 12) += *((_DWORD *)this + 16);
  v9 = *((_DWORD *)a2 + 12);
  if ( *((_DWORD *)a2 + 13) < v9 )
    *((_DWORD *)a2 + 13) = v9;
  *((_QWORD *)this + 2) = a2;
  D3D12DeviceNoRef = CD3DDeviceLevel1::GetD3D12DeviceNoRef(*((CD3DDeviceLevel1 **)a2 + 10), &v31);
  LastError = D3D12DeviceNoRef;
  if ( D3D12DeviceNoRef < 0 )
  {
    v27 = 32;
    goto LABEL_33;
  }
  v29 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
  v12 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
          a3,
          &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
          &v29);
  LastError = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x25u);
LABEL_31:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
    return (unsigned int)LastError;
  }
  hObject = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, HANDLE *))(*(_QWORD *)v29 + 104LL))(
          v29,
          0LL,
          0x10000000LL,
          0LL,
          &hObject);
  LastError = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x28u);
LABEL_28:
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    goto LABEL_31;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 15);
  v14 = ((__int64 (__fastcall *)(struct ID3D12Device *, HANDLE, GUID *, char *))v31->lpVtbl->OpenSharedHandle)(
          v31,
          hObject,
          &GUID_696442be_a72e_4059_bc79_5b5c98040fad,
          (char *)this + 120);
  LastError = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x2Au);
    goto LABEL_28;
  }
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
  D3D12DeviceNoRef = CD3DDeviceLevel1::CreateSharedFence(
                       *(CD3DDeviceLevel1 **)(*((_QWORD *)this + 2) + 80LL),
                       v15,
                       v16,
                       (struct ID3D11Fence **)this + 16,
                       (struct ID3D12Fence **)this + 17);
  LastError = D3D12DeviceNoRef;
  if ( D3D12DeviceNoRef < 0 )
  {
    v27 = 50;
    goto LABEL_33;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 18);
  D3D12DeviceNoRef = CD3DDeviceLevel1::CreateSharedFence(
                       *(CD3DDeviceLevel1 **)(*((_QWORD *)this + 2) + 80LL),
                       v17,
                       v18,
                       (struct ID3D11Fence **)this + 18,
                       (struct ID3D12Fence **)this + 19);
  LastError = D3D12DeviceNoRef;
  if ( D3D12DeviceNoRef < 0 )
  {
    v27 = 51;
LABEL_33:
    v25 = D3D12DeviceNoRef;
    goto LABEL_34;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 20);
  SharedFence = CD3DDeviceLevel1::CreateSharedFence(
                  *(CD3DDeviceLevel1 **)(*((_QWORD *)this + 2) + 80LL),
                  v19,
                  v20,
                  (struct ID3D11Fence **)this + 20,
                  (struct ID3D12Fence **)this + 21);
  LastError = SharedFence;
  if ( SharedFence < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, SharedFence, 0x34u);
  }
  else
  {
    Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        (wil::details **)this + 22,
        Event);
      LastError = 0;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x15E3,
                    (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
                    v23);
    }
    v24 = LastError < 0;
    if ( LastError > 0 )
    {
      LastError = (unsigned __int16)LastError | 0x80070000;
      v24 = LastError < 0;
    }
    if ( v24 )
    {
      v27 = 53;
      v25 = LastError;
LABEL_34:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v25, v27);
    }
  }
  return (unsigned int)LastError;
}
