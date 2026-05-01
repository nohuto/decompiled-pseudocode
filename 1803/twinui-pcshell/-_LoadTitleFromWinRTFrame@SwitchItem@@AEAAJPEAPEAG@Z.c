/*
 * XREFs of ?_LoadTitleFromWinRTFrame@SwitchItem@@AEAAJPEAPEAG@Z @ 0x180286640
 * Callers:
 *     ?_LoadTitle@SwitchItem@@AEAAJXZ @ 0x18028658C (-_LoadTitle@SwitchItem@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18001CF60 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18001D2D4 (--1-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F8454 (--$As@UIWinRTApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_IsOnlyWhitespace@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBA_NXZ @ 0x1802864F0 (-_IsOnlyWhitespace@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBA.c)
 */

__int64 __fastcall SwitchItem::_LoadTitleFromWinRTFrame(SwitchItem *this, unsigned __int16 **a2)
{
  int v3; // ebx
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  unsigned __int16 *v9; // rbx
  __int64 v11; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v14; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h]
  __int64 v16; // [rsp+58h] [rbp-A8h]
  HWND hWnd[2]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR pString[264]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  *a2 = 0LL;
  v13 = 0LL;
  v3 = Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>((_QWORD *)this + 12, &v13);
  if ( v3 >= 0 )
  {
    v4 = v13;
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 24LL))(v4, &v12);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v6 = v12;
      v11 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
      v3 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL))(
             v6,
             5LL,
             &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
             &v11);
      if ( v3 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v11 + 32LL))(v11, hWnd);
        v3 = v7;
        if ( v7 >= 0 )
        {
          InternalGetWindowText(hWnd[0], pString, 260);
          v14 = 0LL;
          v15 = 0LL;
          v16 = 0LL;
          v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                 (__int64)&v14,
                 (__int64)pString,
                 0xFFFFFFFFFFFFFFFFuLL);
          v3 = v8;
          if ( v8 >= 0 )
          {
            v9 = v14;
            if ( v14
              && *v14
              && !Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_IsOnlyWhitespace(&v14) )
            {
              *a2 = v9;
              v3 = 0;
              v14 = 0LL;
              v16 = 0LL;
              v15 = 0LL;
            }
            else
            {
              v3 = -2147023728;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x9A,
              (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitem.cpp",
              (const char *)(unsigned int)v8);
          }
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&v14);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x94,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitem.cpp",
            (const char *)(unsigned int)v7);
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8E,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitem.cpp",
        (const char *)(unsigned int)v5);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return (unsigned int)v3;
}
