/*
 * XREFs of ?EnsureHDRConversionResources@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800784C4
 * Callers:
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800781F8 (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_q @ 0x18013BB44 (Template_q.c)
 */

__int64 __fastcall CD3DDeviceLevel1::EnsureHDRConversionResources(CD3DDeviceLevel1 *this)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rbx
  __int64 v14; // [rsp+58h] [rbp-29h] BYREF
  int v15; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v16[2]; // [rsp+68h] [rbp-19h] BYREF
  const char *v17; // [rsp+78h] [rbp-9h] BYREF
  int v18; // [rsp+80h] [rbp-1h]
  __int64 v19; // [rsp+84h] [rbp+3h]
  __int64 v20; // [rsp+8Ch] [rbp+Bh]
  int v21; // [rsp+94h] [rbp+13h]
  __int64 v22; // [rsp+98h] [rbp+17h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+1Fh]
  __int64 v24; // [rsp+A8h] [rbp+27h]

  v2 = 0;
  if ( *((int *)this + 185) >= 40960 )
  {
    v15 = 40960;
    v17 = "POSITION";
    v14 = 0LL;
    v18 = 0;
    v19 = 16LL;
    v20 = 0LL;
    v21 = 0;
    v22 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    v16[0] = 0LL;
    v16[1] = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_q(this, &EVTDESC_D3DSHADER_CREATE_Start, 0LL);
    v3 = *((_QWORD *)this + 80);
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 1232);
    v4 = (*(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, char *))(*(_QWORD *)v3 + 96LL))(
           v3,
           &unk_1801D5C70,
           628LL,
           0LL,
           (char *)this + 1232);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x242u);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_q(v5, &EVTDESC_D3DSHADER_CREATE_Stop, 0LL);
      v6 = *((_QWORD *)this + 80);
      Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 1240);
      v7 = (*(__int64 (__fastcall **)(__int64, const char **, __int64, void *, __int64, char *))(*(_QWORD *)v6 + 88LL))(
             v6,
             &v17,
             1LL,
             &unk_1801D5C70,
             628LL,
             (char *)this + 1240);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x24Bu);
      }
      else
      {
        v8 = *((_QWORD *)this + 80);
        LODWORD(v23) = 1;
        v22 = 0x100000030LL;
        v16[0] = &unk_1801D5F98;
        Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 156);
        v9 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *, char *))(*(_QWORD *)v8 + 24LL))(
               v8,
               &v22,
               v16,
               (char *)this + 1248);
        v2 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x25Au);
        }
        else
        {
          v10 = *((_QWORD *)this + 80);
          Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 1256);
          v11 = (*(__int64 (__fastcall **)(__int64, __int64, int *, __int64, int, GUID *, _QWORD, char *))(*(_QWORD *)v10 + 376LL))(
                  v10,
                  1LL,
                  &v15,
                  1LL,
                  7,
                  &GUID_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686,
                  0LL,
                  (char *)this + 1256);
          v2 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x267u);
          }
          else
          {
            v12 = *((_QWORD *)this + 81);
            Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v14);
            (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 1048LL))(
              v12,
              *((_QWORD *)this + 157),
              &v14);
            (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 81) + 136LL))(
              *((_QWORD *)this + 81),
              *((_QWORD *)this + 155));
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char *, const char *, int *))(**((_QWORD **)this + 81)
                                                                                         + 144LL))(
              *((_QWORD *)this + 81),
              0LL,
              1LL,
              (char *)this + 1248,
              "\b",
              &`CBaseExpression::SetTracingCookie'::`2'::sc_defaultValue);
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 81) + 88LL))(
              *((_QWORD *)this + 81),
              *((_QWORD *)this + 154),
              0LL,
              0LL);
            (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 81) + 344LL))(
              *((_QWORD *)this + 81),
              *((_QWORD *)this + 234));
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 81) + 280LL))(
              *((_QWORD *)this + 81),
              *((_QWORD *)this + 167),
              0LL,
              0xFFFFFFFFLL);
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 81) + 288LL))(
              *((_QWORD *)this + 81),
              *((_QWORD *)this + 235),
              0LL);
            (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 81) + 192LL))(*((_QWORD *)this + 81), 4LL);
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 81) + 1048LL))(
              *((_QWORD *)this + 81),
              v14,
              0LL);
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v14);
  }
  return v2;
}
