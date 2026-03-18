/*
 * XREFs of ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x18005A150
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180058640 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDeviceLevel1@@I@Z @ 0x18005A128 (-Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDeviceLevel1@@I@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateBuffer@CD3DDeviceLevel1@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Buffer@@@Z @ 0x1800757D4 (-CreateBuffer@CD3DDeviceLevel1@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUI.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDynamicAppendBuffer::EnsureByteSpace(CD3DDynamicAppendBuffer *this, UINT a2, char a3)
{
  unsigned int v3; // esi
  UINT i; // ebx
  UINT v6; // ecx
  UINT v7; // eax
  int v8; // eax
  struct ID3D11Buffer *v9; // r14
  UINT v11; // eax
  UINT v12; // edx
  struct ID3D11Buffer *v13; // [rsp+30h] [rbp-30h] BYREF
  struct ID3D11Buffer *v14; // [rsp+38h] [rbp-28h] BYREF
  struct D3D11_BUFFER_DESC v15; // [rsp+40h] [rbp-20h] BYREF

  v3 = 0;
  v13 = 0LL;
  i = a2;
  v6 = *((_DWORD *)this + 10);
  if ( a2 > v6 )
  {
    if ( !a3 )
    {
      v11 = a2;
      if ( v6 )
        v11 = v6;
      v12 = v6 + a2;
      for ( i = v11; i < v12; i *= 2 )
        ;
      if ( i > *((_DWORD *)this + 11) )
        i = *((_DWORD *)this + 11);
    }
    v7 = *((_DWORD *)this + 4);
    v15.MiscFlags = 0;
    v15.StructureByteStride = 0;
    v15.BindFlags = v7;
    v15.ByteWidth = i;
    v15.Usage = D3D11_USAGE_DYNAMIC;
    v15.CPUAccessFlags = 0x10000;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v13);
    v8 = CD3DDeviceLevel1::CreateBuffer(*(CD3DDeviceLevel1 **)this, &v15, 0LL, &v13);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x48u);
    }
    else
    {
      v9 = v13;
      if ( *((struct ID3D11Buffer **)this + 1) != v13 )
      {
        v14 = v13;
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v14);
        v14 = (struct ID3D11Buffer *)*((_QWORD *)this + 1);
        *((_QWORD *)this + 1) = v9;
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v14);
      }
      *((_DWORD *)this + 9) = 0;
      *((_DWORD *)this + 10) = i;
    }
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v13);
  return v3;
}
