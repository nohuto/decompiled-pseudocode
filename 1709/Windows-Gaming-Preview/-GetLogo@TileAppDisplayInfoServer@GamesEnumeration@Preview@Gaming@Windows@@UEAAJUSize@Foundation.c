/*
 * XREFs of ?GetLogo@TileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUSize@Foundation@5@PEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x18003F750
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180014338 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18003FA90 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Fou.c)
 *     __security_check_cookie @ 0x180040F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::TileAppDisplayInfoServer::GetLogo(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdi
  HRESULT v11; // eax
  __int64 v12; // rcx
  HSTRING v13; // rbx
  int ActivationFactory; // eax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v22; // [rsp+38h] [rbp-39h] BYREF
  __int64 v23; // [rsp+40h] [rbp-31h] BYREF
  __int64 v24; // [rsp+48h] [rbp-29h] BYREF
  __int64 v25; // [rsp+50h] [rbp-21h] BYREF
  __int64 v26; // [rsp+58h] [rbp-19h] BYREF
  __int64 v27; // [rsp+60h] [rbp-11h]
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-9h] BYREF
  HSTRING string; // [rsp+80h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v22 = a2;
  v27 = a2;
  if ( a3 )
  {
    v5 = *(_QWORD *)(a1 + 72);
    v22 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 64LL))(v5, &v22);
    v4 = v6;
    if ( v6 >= 0 )
    {
      if ( v22 )
      {
        v26 = 0LL;
        v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 64LL))(v22, &v26);
        v4 = v7;
        if ( v7 >= 0 )
        {
          if ( v26 )
          {
            v25 = 0LL;
            v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v26 + 64LL))(
                   v26,
                   v8,
                   v27,
                   &v25);
            v4 = v9;
            if ( v9 >= 0 )
            {
              v10 = v25;
              v24 = 0LL;
              v4 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream *> *>(v25);
              if ( v4 >= 0 )
                v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 64LL))(v10, &v24);
              if ( v4 >= 0 )
              {
                v23 = 0LL;
                string = 0LL;
                v11 = WindowsCreateStringReference(
                        L"Windows.Storage.Streams.RandomAccessStreamReference",
                        0x33u,
                        &hstringHeader,
                        &string);
                if ( v11 < 0 )
                {
                  Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
                  JUMPOUT(0x18003FA8DLL);
                }
                v12 = v23;
                v13 = string;
                if ( v23 )
                {
                  v23 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
                }
                ActivationFactory = RoGetActivationFactory(v13, &GUID_857309dc_3fbf_4e7d_986f_ef3b1a07a964, &v23);
                v4 = ActivationFactory;
                if ( ActivationFactory >= 0 )
                {
                  v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v23 + 64LL))(v23, v24, a3);
                  v4 = v15;
                  if ( v15 < 0 )
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x58,
                      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
                      (const char *)(unsigned int)v15);
                }
                else
                {
                  wil::details::in1diag3::Return_Hr_NoOriginate(
                    retaddr,
                    (void *)0x56,
                    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
                    (const char *)(unsigned int)ActivationFactory);
                }
                v16 = v23;
                if ( v23 )
                {
                  v23 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
                }
              }
              else
              {
                wil::details::in1diag3::Return_Hr_NoOriginate(
                  retaddr,
                  (void *)0x4D,
                  (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
                  (const char *)(unsigned int)v4);
              }
              v17 = v24;
              if ( v24 )
              {
                v24 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
              }
            }
            else
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x4A,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
                (const char *)(unsigned int)v9);
            }
            v18 = v25;
            if ( v25 )
            {
              v25 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
            }
          }
          else
          {
            v4 = -2147467261;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x44,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
              (const char *)0x80004003LL);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x43,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
            (const char *)(unsigned int)v7);
        }
        v19 = v26;
        if ( v26 )
        {
          v26 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
      else
      {
        v4 = -2147467261;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x40,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
          (const char *)0x80004003LL);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3F,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
        (const char *)(unsigned int)v6);
    }
    v20 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  else
  {
    v4 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
      (const char *)0x80004003LL);
  }
  return (unsigned int)v4;
}
