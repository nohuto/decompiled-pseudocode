/*
 * XREFs of ?GetLogo@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUSize@Foundation@5@PEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x180004210
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800029D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800044D4 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAUIRandomAccessStream@Streams@Storage@.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004BE8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x180028AF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::DesktopAppDisplayInfoServer::GetLogo(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  HRESULT v6; // eax
  int v7; // edx
  unsigned int v8; // r8d
  int ActivationFactory; // eax
  int v10; // ebx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rdi
  HRESULT v14; // eax
  int v15; // edx
  unsigned int v16; // r8d
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v24; // [rsp+38h] [rbp-29h] BYREF
  __int64 v25; // [rsp+40h] [rbp-21h] BYREF
  __int64 v26; // [rsp+48h] [rbp-19h] BYREF
  __int64 v27; // [rsp+50h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-9h] BYREF
  HSTRING string; // [rsp+70h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v25 = 0LL;
  string = 0LL;
  v6 = WindowsCreateStringReference(L"Windows.Internal.Shell.StartUI.TileImageHelpers", 0x2Fu, &hstringHeader, &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6, v7, v8);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_2363a8f9_4138_4c23_a8a4_83fbeecaddc6, &v25);
  v10 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v11 = *(_QWORD *)(a1 + 80);
    v27 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v25 + 64LL))(v25, a2, v11, &v27);
    v10 = v12;
    if ( v12 >= 0 )
    {
      v13 = v27;
      v26 = 0LL;
      v10 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Storage::Streams::IRandomAccessStream *>,Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream *>>(v27);
      if ( v10 < 0
        || (v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 64LL))(v13, &v26), v10 < 0) )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x4A,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\desktopappdisplayinfo.cpp",
          (const char *)(unsigned int)v10);
      }
      else
      {
        v24 = 0LL;
        string = 0LL;
        v14 = WindowsCreateStringReference(
                L"Windows.Storage.Streams.RandomAccessStreamReference",
                0x33u,
                &hstringHeader,
                &string);
        if ( v14 < 0 )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14, v15, v16);
          JUMPOUT(0x1800044A6LL);
        }
        v17 = RoGetActivationFactory(string, &GUID_857309dc_3fbf_4e7d_986f_ef3b1a07a964, &v24);
        v10 = v17;
        if ( v17 >= 0 )
        {
          v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v24 + 64LL))(v24, v26, a3);
          v10 = v18;
          if ( v18 < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x55,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\desktopappdisplayinfo.cpp",
              (const char *)(unsigned int)v18);
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x53,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\desktopappdisplayinfo.cpp",
            (const char *)(unsigned int)v17);
        }
        v19 = v24;
        if ( v24 )
        {
          v24 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
      v20 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x47,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\desktopappdisplayinfo.cpp",
        (const char *)(unsigned int)v12);
    }
    v21 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x44,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\desktopappdisplayinfo.cpp",
      (const char *)(unsigned int)ActivationFactory);
  }
  v22 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return (unsigned int)v10;
}
