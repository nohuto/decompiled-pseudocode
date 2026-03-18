/*
 * XREFs of ?CreateLockableTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAVCD3DLockableTexture@@@Z @ 0x1801A64D0
 * Callers:
 *     ?CreateLockableTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x1801AF798 (-CreateLockableTexture@CHwSolidColorTextureSource@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180020318 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x1800811E4 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x1801B257C (-Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateLockableTexture(
        CD3DDeviceLevel1 *this,
        const struct DWM_TEXTURE2D_DESC *a2,
        struct CD3DLockableTexture **a3)
{
  CD3DResourceManager *v3; // r14
  __int64 v7; // rbx
  int v8; // ebx
  signed int v9; // eax
  unsigned int v10; // ebx
  struct ID3D11Texture2D *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  v3 = (CD3DDeviceLevel1 *)((char *)this + 896);
  *a3 = 0LL;
  do
  {
    v7 = *((_QWORD *)this + 81);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v12);
    v8 = (*(__int64 (__fastcall **)(__int64, const struct DWM_TEXTURE2D_DESC *, _QWORD, struct ID3D11Texture2D **))(*(_QWORD *)v7 + 40LL))(
           v7,
           a2,
           0LL,
           &v12);
  }
  while ( CD3DResourceManager::FreeSomeVideoMemory(v3, v8) );
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021C088, 9u, v8, 0x7ADu);
  }
  else
  {
    ((void (__fastcall *)(struct ID3D11Texture2D *, const GUID *, _QWORD, _QWORD))v12->lpVtbl->SetPrivateData)(
      v12,
      &WKPDID_D3DDebugObjectName,
      *((unsigned int *)a2 + 14),
      *((_QWORD *)a2 + 6));
    v9 = CD3DLockableTexture::Create(v3, v12, a3);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021C088, 9u, v9, 0x7BAu);
  }
  v10 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v8, 0);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v12);
  return v10;
}
