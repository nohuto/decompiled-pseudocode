/*
 * XREFs of ?CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z @ 0x180077EB4
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180078824 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CheckD3D11Caps(CD3DDeviceLevel1 *this, struct ID3D11Device1 *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v12[16]; // [rsp+40h] [rbp-48h] BYREF
  int v13; // [rsp+50h] [rbp-38h]

  v10 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v10);
  v4 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_26c5dc23_e49c_4b0a_8f79_e7b1ac804d32,
         &v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x403u);
  }
  else
  {
    v6 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, __int64, _BYTE *))a2->lpVtbl->CheckFeatureSupport)(
           a2,
           5LL,
           v12);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x406u);
    }
    else
    {
      if ( v13 )
        *((_BYTE *)this + 776) = 1;
      v7 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, __int64, int *))a2->lpVtbl->CheckFeatureSupport)(
             a2,
             6LL,
             &v11);
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x40Du);
      }
      else if ( v11 )
      {
        v9 = v10;
        *((_BYTE *)this + 777) = 1;
        if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 88LL))(v9) & 1) == 0 )
          *((_BYTE *)this + 778) = 1;
      }
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v10);
  return v5;
}
