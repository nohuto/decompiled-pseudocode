/*
 * XREFs of ?EnsureDDisplayResources@CPlaneCaptureRenderTargetEngine@@IEAAJI@Z @ 0x180139464
 * Callers:
 *     ?CreateOverlayableRenderTargetBitmap@CPlaneCaptureRenderTargetEngine@@IEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x18013901C (-CreateOverlayableRenderTargetBitmap@CPlaneCaptureRenderTargetEngine@@IEAAJPEAPEAVIRenderTargetB.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPlaneCaptureRenderTargetEngine::EnsureDDisplayResources(
        CPlaneCaptureRenderTargetEngine *this,
        int a2)
{
  unsigned int v2; // esi
  FARPROC ProcAddress; // rax
  __int64 (__fastcall *v5)(GUID *, __int64 *); // rbx
  signed int v6; // eax
  __int64 v7; // rbx
  signed int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rdi
  char v11; // r15
  unsigned int i; // r13d
  __int64 v13; // rsi
  signed int v14; // eax
  __int64 v15; // rsi
  signed int v16; // eax
  unsigned int j; // r12d
  __int64 v18; // rsi
  signed int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // rsi
  DWORD v22; // r9d
  __int64 v23; // rsi
  int v24; // eax
  __int64 v25; // rsi
  __int64 v26; // r8
  unsigned int v28; // [rsp+28h] [rbp-E0h]
  __int64 v29; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+68h] [rbp-A0h] BYREF
  int v36; // [rsp+70h] [rbp-98h]
  int v37; // [rsp+74h] [rbp-94h] BYREF
  __int64 v38[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v39[272]; // [rsp+88h] [rbp-80h] BYREF
  int v40; // [rsp+198h] [rbp+90h]
  int v41; // [rsp+19Ch] [rbp+94h]

  v2 = 0;
  v36 = a2;
  if ( !*((_QWORD *)this + 53) || !*((_QWORD *)this + 54) )
  {
    if ( !*((_QWORD *)this + 52) )
      *((_QWORD *)this + 52) = LoadLibraryW(L"DDisplay.dll");
    ProcAddress = GetProcAddress(*((HMODULE *)this + 52), "CreateDDisplayFactory");
    v29 = 0LL;
    v5 = (__int64 (__fastcall *)(GUID *, __int64 *))ProcAddress;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
    v6 = v5(&GUID_ce126bec_344f_4acb_a59f_06d2b70ebebc, &v29);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x134u);
      goto LABEL_48;
    }
    v30 = 0LL;
    v7 = v29;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
    v8 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v7 + 24LL))(
           v7,
           &GUID_61b02cfc_8414_4bbb_8c59_42c4af1e0da5,
           &v30);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x137u);
      goto LABEL_35;
    }
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0;
    v33 = 0LL;
    v32 = 0LL;
    for ( i = 0; i < (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v30 + 24LL))(v30); ++i )
    {
      if ( v11 )
        goto LABEL_41;
      v31 = 0LL;
      v13 = v30;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v13 + 32LL))(
              v13,
              i,
              &GUID_c05a39f1_e7a3_4bdf_81d0_af48be5476e5,
              &v31);
      v2 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x142u);
LABEL_33:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
        goto LABEL_34;
      }
      (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v31 + 24LL))(v31, v39);
      if ( v40 == *((_DWORD *)this + 86) && v41 == *((_DWORD *)this + 87) )
      {
        v34 = 0LL;
        v15 = v31;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
        v16 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v15 + 40LL))(
                v15,
                &GUID_61b02cfc_8414_4bbb_8c59_42c4af1e0da5,
                &v34);
        v2 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x14Au);
        }
        else
        {
          for ( j = 0; ; ++j )
          {
            if ( j >= (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v34 + 24LL))(v34) || v11 )
            {
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
              goto LABEL_30;
            }
            v35 = 0LL;
            v18 = v34;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
            v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v18 + 32LL))(
                    v18,
                    0LL,
                    &GUID_adae94d5_f542_4635_8a12_3f160d276252,
                    &v35);
            v2 = v19;
            if ( v19 < 0 )
              break;
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v35 + 64LL))(v35, &v37);
            if ( v37 == v36 )
            {
              v20 = v31;
              if ( v9 != v31 )
              {
                if ( v31 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
                v38[0] = v9;
                v9 = v20;
                v33 = v20;
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v38);
              }
              v21 = v35;
              if ( v10 != v35 )
              {
                if ( v35 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
                v38[0] = v10;
                v10 = v21;
                v32 = v21;
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v38);
              }
              v11 = 1;
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
          }
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x152u);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
        goto LABEL_33;
      }
LABEL_30:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
    }
    if ( v11 )
    {
LABEL_41:
      v23 = v29;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 53);
      v24 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, char *))(*(_QWORD *)v23 + 32LL))(
              v23,
              v9,
              &GUID_3b878944_8512_4b05_a536_39b8bf24c5b3,
              (char *)this + 424);
      v2 = v24;
      if ( v24 < 0 )
      {
        v28 = 361;
      }
      else
      {
        v25 = *((_QWORD *)this + 53);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 54);
        LOBYTE(v26) = 1;
        v24 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, char *))(*(_QWORD *)v25 + 48LL))(
                v25,
                v10,
                v26,
                (char *)this + 432);
        v2 = v24;
        if ( v24 >= 0 )
          goto LABEL_34;
        v28 = 369;
      }
      v22 = v24;
    }
    else
    {
      v2 = -2147024809;
      v28 = 358;
      v22 = -2147024809;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, v28);
LABEL_34:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
LABEL_35:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
LABEL_48:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
  }
  return v2;
}
