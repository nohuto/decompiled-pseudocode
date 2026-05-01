/*
 * XREFs of ?_GetFileDescription@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEBV?$ComPtr@UIStorageItemProperties@Storage@Windows@@@WRL@Microsoft@@PEAPEAUHSTRING__@@@Z @ 0x1800115F4
 * Callers:
 *     _lambda_2c9b109c06d9045e37c547b3020af78e_::operator() @ 0x18001112C (_lambda_2c9b109c06d9045e37c547b3020af78e_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A970 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAVGam.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@U?$IIterable@PEAUHSTRING__@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180011B50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180011B50.c)
 *     ??0?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@1234@Upermission@01234@@Z @ 0x180012E9C (--0-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foun.c)
 *     ?InsertAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUHSTRING__@@_N@Z @ 0x180012F78 (-InsertAtInternal@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@C.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180013878 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAU-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collecti.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180014338 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x180040F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
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
  __int64 v13; // rax
  __int64 v14; // r9
  volatile signed __int64 *v15; // rsi
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  HSTRING v21; // rcx
  HSTRING v22; // rcx
  __int64 v23; // rcx
  __int64 (__fastcall ***v24)(_QWORD, GUID *, _QWORD *); // rcx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 (__fastcall ***v29)(_QWORD, GUID *, _QWORD *); // rbx
  int v30; // eax
  HSTRING v31; // rax
  __int64 (__fastcall ***v32)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v33; // rcx
  __int64 (__fastcall ***v34)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v35; // rcx
  __int64 (__fastcall ***v36)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  HSTRING v40; // [rsp+20h] [rbp-60h] BYREF
  __int64 (__fastcall ***v41)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-58h] BYREF
  __int64 v42; // [rsp+30h] [rbp-50h] BYREF
  __int64 v43; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v44[3]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v44[1] = -2LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(L"System.FileDescription", 0x16u, &hstringHeader, &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5, v6, v7);
  v43 = 0LL;
  v41 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)*a2 + 96LL))(
         *a2,
         &v41);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v42 = 0LL;
    v10 = (**v41)(v41, &GUID_c54361b2_54cd_432b_bdbc_4b19c4b470d7, &v42);
    v9 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x14B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        (const char *)(unsigned int)v10);
LABEL_54:
      v37 = v42;
      if ( v42 )
      {
        v42 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      }
      goto LABEL_56;
    }
    v11 = 0LL;
    v12 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v12
      || (v13 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>(v12),
          (v15 = (volatile signed __int64 *)v13) == 0LL) )
    {
      v9 = -2147024882;
      v17 = 2147942414LL;
      v18 = 334LL;
      goto LABEL_51;
    }
    v11 = (volatile signed __int64 *)v13;
    v44[2] = v13;
    LOBYTE(v14) = 1;
    v16 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::InsertAtInternal(
            v13,
            0LL,
            string,
            v14);
    v9 = v16;
    if ( v16 < 0 )
    {
      v17 = (unsigned int)v16;
      v18 = 336LL;
LABEL_51:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v18,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        (const char *)v17);
LABEL_52:
      if ( v11 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::IIterable<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::FtmBase>::Release(v11);
      goto LABEL_54;
    }
    v40 = 0LL;
    v19 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>,Microsoft::WRL::FtmBase>::QueryInterface(
            v15,
            &GUID_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e,
            &v40);
    v9 = v19;
    if ( v19 < 0 )
    {
      v20 = 339LL;
      goto LABEL_15;
    }
    v19 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v42 + 48LL))(v42, v40, &v43);
    v9 = v19;
    if ( v19 < 0 )
    {
      v20 = 345LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v20,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        (const char *)(unsigned int)v19);
      v21 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v21 + 16LL))(v21);
      }
      goto LABEL_52;
    }
    v22 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v22 + 16LL))(v22);
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::IIterable<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::FtmBase>::Release(v15);
    v23 = v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v24 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v24)[2])(v24);
    }
    v25 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *> *>(v43);
    v9 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x161,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        (const char *)(unsigned int)v25);
      goto LABEL_59;
    }
    v44[0] = 0LL;
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v43 + 64LL))(v43, v44);
    v9 = v26;
    if ( v26 >= 0 )
    {
      v42 = 0LL;
      v27 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64 *))(*(_QWORD *)v44[0] + 48LL))(v44[0], string, &v42);
      v9 = v27;
      if ( v27 >= 0 )
      {
        if ( v42 )
        {
          v41 = 0LL;
          v28 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD))v42)(
                  v42,
                  &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
                  &v41);
          v9 = v28;
          if ( v28 >= 0 )
          {
            v40 = 0LL;
            v29 = v41;
            WindowsDeleteString(0LL);
            v40 = 0LL;
            v30 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), HSTRING *))(*v29)[19])(
                    v29,
                    &v40);
            v9 = v30;
            if ( v30 >= 0 )
            {
              if ( v40 && !WindowsIsStringEmpty(v40) )
              {
                v31 = v40;
                v40 = 0LL;
                *a3 = v31;
                WindowsDeleteString(0LL);
                v40 = 0LL;
                v32 = v41;
                if ( v41 )
                {
                  v41 = 0LL;
                  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v32)[2])(v32);
                }
                v33 = v42;
                if ( v42 )
                {
                  v42 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
                }
                v9 = 0;
                goto LABEL_48;
              }
              v9 = -2147467259;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x175,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
                (const char *)0x80004005LL);
            }
            else
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x173,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
                (const char *)(unsigned int)v30);
            }
            WindowsDeleteString(v40);
            v40 = 0LL;
          }
          else
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x170,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
              (const char *)(unsigned int)v28);
          }
          v34 = v41;
          if ( v41 )
          {
            v41 = 0LL;
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v34)[2])(v34);
          }
        }
        else
        {
          v9 = -2147467259;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x16C,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
            (const char *)0x80004005LL);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x168,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
          (const char *)(unsigned int)v27);
      }
      v35 = v42;
      if ( v42 )
      {
        v42 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x164,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        (const char *)(unsigned int)v26);
    }
LABEL_48:
    v36 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v44[0];
    if ( !v44[0] )
      goto LABEL_59;
    v44[0] = 0LL;
    goto LABEL_58;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x148,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
    (const char *)(unsigned int)v8);
LABEL_56:
  v36 = v41;
  if ( !v41 )
    goto LABEL_59;
  v41 = 0LL;
LABEL_58:
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v36)[2])(v36);
LABEL_59:
  v38 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
  return v9;
}
