/*
 * XREFs of ?CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJXZ @ 0x180075818
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180075F10 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CheckD3D11Caps(CD3DDeviceLevel1 *this)
{
  __int64 (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rbx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  __int64 v8; // rcx
  __int64 v9; // [rsp+30h] [rbp-58h] BYREF
  int v10; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v11[16]; // [rsp+40h] [rbp-48h] BYREF
  int v12; // [rsp+50h] [rbp-38h]

  v1 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 81);
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  v3 = (**v1)(v1, &GUID_26c5dc23_e49c_4b0a_8f79_e7b1ac804d32, &v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x3CEu);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *))(**((_QWORD **)this + 81) + 264LL))(
           *((_QWORD *)this + 81),
           5LL,
           v11);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x3D1u);
    }
    else
    {
      if ( v12 )
        *((_BYTE *)this + 792) = 1;
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 81) + 264LL))(
             *((_QWORD *)this + 81),
             6LL,
             &v10);
      v4 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x3D8u);
      }
      else if ( v10 )
      {
        v8 = v9;
        *((_BYTE *)this + 793) = 1;
        if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 88LL))(v8) & 1) == 0 )
          *((_BYTE *)this + 794) = 1;
      }
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  return v4;
}
