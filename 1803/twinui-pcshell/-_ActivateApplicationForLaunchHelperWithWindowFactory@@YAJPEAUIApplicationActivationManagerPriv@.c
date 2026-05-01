/*
 * XREFs of ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x180306520
 * Callers:
 *     ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x180305FE4 (-ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18001D2D4 (--1-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180080150 (-InternalRelease@-$ComPtr@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microso.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x18008018C (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCLaunchToMonitor@@V1@AEAPEAUHMONITOR__@@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchToMonitor@@AEAPEAUHMONITOR__@@@Z @ 0x180305BC8 (--$MakeAndInitialize@VCLaunchToMonitor@@V1@AEAPEAUHMONITOR__@@@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows::ApplicationModel::Activation::IActivatedEventArgs__lambda_3745dd06eae282890ba4e64038ebf520___ @ 0x180305D00 (Windows--Internal--ComTaskPool--_MakeAndInitializeOnSTAThread_CLaunchActivatedEvent_ea_180305D00.c)
 */

__int64 __fastcall _ActivateApplicationForLaunchHelperWithWindowFactory(
        IUnknown *a1,
        const WCHAR *a2,
        const WCHAR *a3,
        const unsigned __int16 *a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8)
{
  _DWORD *v8; // r13
  unsigned __int64 v13; // rdi
  bool v14; // sf
  const WCHAR *v15; // rsi
  unsigned __int64 v16; // rax
  UINT32 v17; // ebx
  unsigned __int64 v18; // rax
  UINT32 v19; // ebx
  int v20; // edx
  APTTYPE v21; // ecx
  int v22; // ebx
  void *v23; // r15
  HSTRING v24; // rsi
  UINT32 v25; // ebx
  void *v27; // [rsp+40h] [rbp-C0h] BYREF
  IUnknown *punkSite[2]; // [rsp+48h] [rbp-B8h] BYREF
  PCWSTR sourceString; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+68h] [rbp-98h]
  HSTRING v32; // [rsp+70h] [rbp-90h] BYREF
  HSTRING v33; // [rsp+78h] [rbp-88h] BYREF
  __int64 v34; // [rsp+80h] [rbp-80h]
  HSTRING string; // [rsp+88h] [rbp-78h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-70h] BYREF
  HSTRING v37; // [rsp+A8h] [rbp-58h] BYREF
  HSTRING_HEADER v38; // [rsp+B0h] [rbp-50h] BYREF
  HSTRING v39; // [rsp+C8h] [rbp-38h] BYREF
  HSTRING_HEADER v40; // [rsp+D0h] [rbp-30h] BYREF
  HSTRING v41; // [rsp+E8h] [rbp-18h] BYREF
  HSTRING_HEADER v42; // [rsp+F0h] [rbp-10h] BYREF

  v8 = a8;
  v34 = a7;
  sourceString = 0LL;
  v30 = 0LL;
  *a8 = 0;
  v31 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
  v13 = -1LL;
  v30 = -1LL;
  v31 = -1LL;
  v14 = (int)ParseAppUserModelId(a4, 0LL, (unsigned __int16 **)&sourceString) < 0;
  v27 = 0LL;
  v15 = &word_18035ABCC;
  v16 = -1LL;
  if ( !v14 )
    a4 = sourceString;
  if ( a3 )
    v15 = a3;
  do
    ++v16;
  while ( v15[v16] );
  v17 = -1;
  if ( v16 > 0xFFFFFFFF )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  else
    v17 = v16;
  WindowsCreateStringReference(v15, v17, &hstringHeader, &string);
  v18 = -1LL;
  do
    ++v18;
  while ( a4[v18] );
  v19 = -1;
  if ( v18 > 0xFFFFFFFF )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  else
    v19 = v18;
  WindowsCreateStringReference(a4, v19, &v38, &v37);
  v32 = string;
  v33 = v37;
  Microsoft::WRL::ComPtr<Windows::ApplicationModel::Activation::IActivatedEventArgs>::InternalRelease((CLaunchActivatedEventArgs **)&v27);
  punkSite[0] = (IUnknown *)&v32;
  punkSite[1] = (IUnknown *)&v33;
  v22 = Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows::ApplicationModel::Activation::IActivatedEventArgs__lambda_3745dd06eae282890ba4e64038ebf520___(
          v21,
          v20,
          &v27,
          (__int64)punkSite);
  if ( v22 >= 0 )
  {
    punkSite[0] = 0LL;
    if ( a6 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)punkSite);
      v22 = Microsoft::WRL::Details::MakeAndInitialize<CLaunchToMonitor,CLaunchToMonitor,HMONITOR__ * &>(
              (CLaunchToMonitor **)punkSite,
              &a6);
      if ( v22 < 0 )
      {
LABEL_27:
        if ( punkSite[0] )
          IUnknown_SetSite(a1, 0LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)punkSite);
        goto LABEL_30;
      }
      v22 = IUnknown_SetSite(a1, punkSite[0]);
    }
    if ( v22 >= 0 )
    {
      v23 = v27;
      if ( WindowsCreateStringReference(L"Windows.Launch", 0xEu, &v40, &v39) < 0 )
        RaiseException(0xC000000D, 1u, 0, 0LL);
      v24 = v39;
      do
        ++v13;
      while ( a2[v13] );
      v25 = -1;
      if ( v13 > 0xFFFFFFFF )
        RaiseException(0xC000000D, 1u, 0, 0LL);
      else
        v25 = v13;
      WindowsCreateStringReference(a2, v25, &v42, &v41);
      v22 = ((__int64 (__fastcall *)(IUnknown *, HSTRING, __int64, HSTRING, void *, int, _DWORD *))a1->lpVtbl[1].AddRef)(
              a1,
              v41,
              v34,
              v24,
              v23,
              a5,
              v8);
    }
    goto LABEL_27;
  }
LABEL_30:
  Microsoft::WRL::ComPtr<Windows::ApplicationModel::Activation::IActivatedEventArgs>::InternalRelease((CLaunchActivatedEventArgs **)&v27);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&sourceString);
  return (unsigned int)v22;
}
