/*
 * XREFs of ?CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12Fence@@@Z @ 0x1801A6698
 * Callers:
 *     ?Initialize@CD3DPhysicalSwapChainBuffer@@AEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x1801A8D90 (-Initialize@CD3DPhysicalSwapChainBuffer@@AEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateSharedFence(
        CD3DDeviceLevel1 *this,
        const struct CResourceTag *a2,
        __int64 a3,
        struct ID3D11Fence **a4,
        struct ID3D12Fence **a5)
{
  unsigned int v7; // ebx
  __int64 v8; // rbx
  signed int v9; // eax
  HANDLE v10; // rdi
  __int64 v11; // r14
  DWORD LastError; // ebx
  __int64 v13; // rbx
  struct ID3D11Fence *v14; // rax
  struct ID3D12Fence *v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-10h]
  struct ID3D12Fence *v18; // [rsp+60h] [rbp+30h] BYREF
  HANDLE hObject; // [rsp+68h] [rbp+38h] BYREF
  struct ID3D11Fence *v20; // [rsp+70h] [rbp+40h] BYREF

  v20 = 0LL;
  v18 = 0LL;
  hObject = 0LL;
  if ( !*((_QWORD *)this + 90) )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x810u);
    goto LABEL_13;
  }
  v8 = *((_QWORD *)this + 81);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, struct ID3D11Fence **))(*(_QWORD *)v8 + 544LL))(
         v8,
         0LL,
         2LL,
         &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80,
         &v20);
  v7 = v9;
  if ( v9 < 0 )
  {
    v17 = 2067;
  }
  else
  {
    v10 = hObject;
    v11 = (__int64)v20;
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      LastError = GetLastError();
      CloseHandle(v10);
      SetLastError(LastError);
    }
    hObject = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, HANDLE *))(*(_QWORD *)v11 + 56LL))(
           v11,
           0LL,
           0x10000000LL,
           0LL,
           &hObject);
    v7 = v9;
    if ( v9 < 0 )
    {
      v17 = 2068;
    }
    else
    {
      v13 = *((_QWORD *)this + 90);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
      v9 = (*(__int64 (__fastcall **)(__int64, HANDLE, GUID *, struct ID3D12Fence **))(*(_QWORD *)v13 + 256LL))(
             v13,
             hObject,
             &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76,
             &v18);
      v7 = v9;
      if ( v9 >= 0 )
      {
        v14 = v20;
        v15 = v18;
        v20 = 0LL;
        v18 = 0LL;
        *a4 = v14;
        *a5 = v15;
        goto LABEL_13;
      }
      v17 = 2069;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, v17);
LABEL_13:
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
  return v7;
}
