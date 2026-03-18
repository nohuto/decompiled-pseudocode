/*
 * XREFs of GetStagingTexture @ 0x18018E8BC
 * Callers:
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18018E758 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetStagingTexture(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned int v4; // ebx
  __int64 v6; // rbx
  __int64 v7; // rbx
  signed int v8; // eax
  __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h] BYREF
  __int64 v13; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v14[28]; // [rsp+48h] [rbp-38h] BYREF
  int v15; // [rsp+64h] [rbp-1Ch]
  int v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+6Ch] [rbp-14h]
  int v18; // [rsp+70h] [rbp-10h]

  v2 = *(_QWORD *)a1;
  v4 = 0;
  v11 = 0LL;
  (*(void (__fastcall **)(__int64, _BYTE *))(v2 + 80))(a1, v14);
  if ( v15 == 3 )
  {
    if ( v11 != a1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      v12 = v11;
      v11 = a1;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v12);
    }
  }
  else
  {
    v13 = 0LL;
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, &v13);
    v6 = v13;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 320LL))(v6, &v12);
    v16 = 0;
    v18 = 0;
    v7 = v13;
    v15 = 3;
    v17 = 0x20000;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v11);
    v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, __int64 *))(*(_QWORD *)v7 + 40LL))(v7, v14, 0LL, &v11);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x7Du);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
      goto LABEL_8;
    }
    (*(void (__fastcall **)(__int64, const GUID *, __int64, const char *))(*(_QWORD *)v11 + 40LL))(
      v11,
      &WKPDID_D3DDebugObjectName,
      25LL,
      "DWM Temp Readback (debug)");
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 376LL))(v12, v11, a1);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  }
  v9 = v11;
  v11 = 0LL;
  *a2 = v9;
LABEL_8:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v11);
  return v4;
}
