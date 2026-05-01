/*
 * XREFs of ?_GetFileDescription@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEBV?$ComPtr@UIStorageItemProperties@Storage@Windows@@@WRL@Microsoft@@PEAPEAUHSTRING__@@@Z @ 0x1800119B4
 * Callers:
 *     _lambda_931f9b9c69a2973d02abbf46bb0d2b79_::operator() @ 0x1800114EC (_lambda_931f9b9c69a2973d02abbf46bb0d2b79_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A9E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAVGam.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@U?$IIterable@PEAUHSTRING__@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180011F20 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180011F20.c)
 *     ??0?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@1234@Upermission@01234@@Z @ 0x180013420 (--0-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foun.c)
 *     ?InsertAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUHSTRING__@@_N@Z @ 0x1800134F4 (-InsertAtInternal@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@C.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180013E48 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAU-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collecti.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180014928 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x180041F40 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042918 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileDescription(
        __int64 a1,
        _QWORD *a2,
        HSTRING *a3)
{
  HRESULT v5; // eax
  int v6; // edx
  unsigned int v7; // r8d
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  volatile signed __int64 *v11; // rbx
  void *v12; // rax
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  HSTRING v21; // rcx
  __int64 v22; // rcx
  __int64 (__fastcall ***v23)(_QWORD, GUID *, _QWORD *); // rcx
  HSTRING v24; // rcx
  __int64 v25; // rcx
  __int64 (__fastcall ***v26)(_QWORD, GUID *, _QWORD *); // rcx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int64 v30; // r9
  __int64 v31; // rdx
  int v32; // eax
  __int64 (__fastcall ***v33)(_QWORD, GUID *, _QWORD *); // rbx
  int v34; // eax
  __int64 v35; // r9
  __int64 v36; // rdx
  HSTRING v37; // rax
  __int64 (__fastcall ***v38)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v39; // rcx
  __int64 (__fastcall ***v40)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  HSTRING v44; // [rsp+20h] [rbp-60h] BYREF
  __int64 v45; // [rsp+28h] [rbp-58h] BYREF
  __int64 (__fastcall ***v46)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-50h] BYREF
  __int64 v47; // [rsp+38h] [rbp-48h] BYREF
  __int64 (__fastcall ***v48)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-40h] BYREF
  __int64 v49; // [rsp+48h] [rbp-38h]
  __int64 v50; // [rsp+50h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v50 = -2LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(L"System.FileDescription", 0x16u, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5, v6, v7);
    JUMPOUT(0x180011EA5LL);
  }
  v47 = 0LL;
  v46 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)*a2 + 96LL))(
         *a2,
         &v46);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x148,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v8);
LABEL_27:
    v23 = v46;
    if ( !v46 )
      goto LABEL_66;
    v46 = 0LL;
    goto LABEL_65;
  }
  v45 = 0LL;
  v10 = (**v46)(v46, &GUID_c54361b2_54cd_432b_bdbc_4b19c4b470d7, &v45);
  v9 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v10);
LABEL_25:
    v22 = v45;
    if ( v45 )
    {
      v45 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    goto LABEL_27;
  }
  v11 = 0LL;
  v49 = 0LL;
  v12 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = 0LL;
  if ( v12 )
    v14 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>(v12);
  v9 = v14 == 0 ? 0x8007000E : 0;
  v15 = v14;
  if ( v14 )
  {
    v11 = (volatile signed __int64 *)v14;
    v49 = v14;
    v15 = 0LL;
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( !v14 )
  {
    v16 = v9;
    v17 = 334LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)v16);
LABEL_23:
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::IIterable<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::FtmBase>::Release(v11);
    goto LABEL_25;
  }
  LOBYTE(v13) = 1;
  v18 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::InsertAtInternal(
          v11,
          0LL,
          string,
          v13);
  v9 = v18;
  if ( v18 < 0 )
  {
    v16 = (unsigned int)v18;
    v17 = 336LL;
    goto LABEL_16;
  }
  v44 = 0LL;
  v19 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>,Microsoft::WRL::FtmBase>::QueryInterface(
          v11,
          &GUID_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e,
          &v44);
  v9 = v19;
  if ( v19 < 0 )
  {
    v20 = 339LL;
    goto LABEL_21;
  }
  v19 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v45 + 48LL))(v45, v44, &v47);
  v9 = v19;
  if ( v19 < 0 )
  {
    v20 = 345LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v19);
    v21 = v44;
    if ( v44 )
    {
      v44 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v21 + 16LL))(v21);
    }
    goto LABEL_23;
  }
  v24 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v24 + 16LL))(v24);
  }
  if ( v11 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::IIterable<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::FtmBase>::Release(v11);
  v25 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v26 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v26)[2])(v26);
  }
  v27 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *> *>(v47);
  v9 = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v27);
    goto LABEL_66;
  }
  v48 = 0LL;
  v28 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(*(_QWORD *)v47 + 64LL))(
          v47,
          &v48);
  v9 = v28;
  if ( v28 >= 0 )
  {
    v45 = 0LL;
    v29 = (*v48)[6](v48, (GUID *)string, &v45);
    v9 = v29;
    if ( v29 >= 0 )
    {
      if ( v45 )
      {
        v46 = 0LL;
        v32 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD))v45)(
                v45,
                &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
                &v46);
        v9 = v32;
        if ( v32 >= 0 )
        {
          v44 = 0LL;
          v33 = v46;
          WindowsDeleteString(0LL);
          v44 = 0LL;
          v34 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), HSTRING *))(*v33)[19])(
                  v33,
                  &v44);
          v9 = v34;
          if ( v34 >= 0 )
          {
            if ( v44 && !WindowsIsStringEmpty(v44) )
            {
              v37 = v44;
              v44 = 0LL;
              *a3 = v37;
              WindowsDeleteString(0LL);
              v44 = 0LL;
              v38 = v46;
              if ( v46 )
              {
                v46 = 0LL;
                ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v38)[2])(v38);
              }
              v39 = v45;
              if ( v45 )
              {
                v45 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
              }
              v9 = 0;
              goto LABEL_63;
            }
            v9 = -2147467259;
            v35 = 2147500037LL;
            v36 = 373LL;
          }
          else
          {
            v35 = (unsigned int)v34;
            v36 = 371LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v36,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
            (const char *)v35);
          WindowsDeleteString(v44);
          v44 = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x170,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
            (const char *)(unsigned int)v32);
        }
        v40 = v46;
        if ( v46 )
        {
          v46 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v40)[2])(v40);
        }
        goto LABEL_61;
      }
      v9 = -2147467259;
      v30 = 2147500037LL;
      v31 = 364LL;
    }
    else
    {
      v30 = (unsigned int)v29;
      v31 = 360LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)v30);
LABEL_61:
    v41 = v45;
    if ( v45 )
    {
      v45 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    }
    goto LABEL_63;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x164,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
    (const char *)(unsigned int)v28);
LABEL_63:
  v23 = v48;
  if ( !v48 )
    goto LABEL_66;
  v48 = 0LL;
LABEL_65:
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v23)[2])(v23);
LABEL_66:
  v42 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  }
  return v9;
}
