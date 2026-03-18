/*
 * XREFs of ?QueryResourceResidency@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEAW4DXGI_RESIDENCY@@@Z @ 0x18001787C
 * Callers:
 *     ?CheckD3DResidencyAndDestroy@CD3DTexture@@MEAAXXZ @ 0x1800169A0 (-CheckD3DResidencyAndDestroy@CD3DTexture@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::QueryResourceResidency(
        CD3DDeviceLevel1 *this,
        struct ID3D11Resource *a2,
        enum DXGI_RESIDENCY *a3)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v11; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 80);
  v13 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v13);
  v6 = (**v3)(v3, &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c, &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xE7Bu);
  }
  else
  {
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v12);
    v8 = ((__int64 (__fastcall *)(struct ID3D11Resource *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
           &v12);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xE80u);
    }
    else
    {
      v11 = v12;
      v9 = (*(__int64 (__fastcall **)(__int64, __int64 *, enum DXGI_RESIDENCY *, __int64))(*(_QWORD *)v13 + 72LL))(
             v13,
             &v11,
             a3,
             1LL);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xE86u);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v13);
  return v7;
}
