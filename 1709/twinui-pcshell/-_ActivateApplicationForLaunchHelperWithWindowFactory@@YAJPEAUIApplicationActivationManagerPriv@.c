/*
 * XREFs of ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x1801CDE24
 * Callers:
 *     ?_ActivateApplicationForLaunchHelper@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x1801CE080 (-_ActivateApplicationForLaunchHelper@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATE.c)
 * Callees:
 *     ??$MakeAndInitializeOnSharedSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@AEAPEAUHSTRING__@@AEAPEAU6@@ComTaskPool@Internal@Windows@@SAJPEAPEAUIActivatedEventArgs@Activation@ApplicationModel@2@AEAPEAUHSTRING__@@1@Z @ 0x1801CE43C (--$MakeAndInitializeOnSharedSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activatio.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1801E12A4 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _ActivateApplicationForLaunchHelperWithWindowFactory(
        IUnknown *a1,
        const WCHAR *a2,
        __int64 a3,
        const unsigned __int16 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8)
{
  unsigned __int64 v10; // rbx
  const WCHAR *v11; // rsi
  unsigned __int64 v12; // rax
  UINT32 v13; // edi
  int v14; // edi
  void *v15; // r12
  HSTRING v16; // rsi
  UINT32 v17; // edi
  __int64 v18; // rcx
  void *v19; // rcx
  void *v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h]
  PCWSTR sourceString[5]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v24; // [rsp+78h] [rbp-88h]
  __int64 v25; // [rsp+80h] [rbp-80h]
  HSTRING string; // [rsp+88h] [rbp-78h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-70h] BYREF
  HSTRING v28; // [rsp+A8h] [rbp-58h] BYREF
  HSTRING_HEADER v29; // [rsp+B0h] [rbp-50h] BYREF
  HSTRING v30; // [rsp+C8h] [rbp-38h] BYREF
  HSTRING_HEADER v31; // [rsp+D0h] [rbp-30h] BYREF
  HSTRING v32; // [rsp+E8h] [rbp-18h] BYREF
  HSTRING_HEADER v33; // [rsp+F0h] [rbp-10h] BYREF

  v25 = a7;
  v24 = a8;
  v10 = -1LL;
  sourceString[0] = 0LL;
  sourceString[1] = (PCWSTR)-1LL;
  *a8 = 0;
  v11 = a4;
  sourceString[2] = (PCWSTR)-1LL;
  v21 = 0LL;
  if ( (int)ParseAppUserModelId(a4, 0LL, (unsigned __int16 **)sourceString) >= 0 )
    v11 = sourceString[0];
  WindowsCreateStringReference(&word_18021F3A8, 0, &hstringHeader, &string);
  v12 = -1LL;
  do
    ++v12;
  while ( v11[v12] );
  v13 = -1;
  if ( v12 > 0xFFFFFFFF )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  else
    v13 = v12;
  WindowsCreateStringReference(v11, v13, &v29, &v28);
  sourceString[4] = (PCWSTR)string;
  sourceString[3] = (PCWSTR)v28;
  v14 = Windows::Internal::ComTaskPool::MakeAndInitializeOnSharedSTAThread<CLaunchActivatedEventArgs,Windows::ApplicationModel::Activation::IActivatedEventArgs,HSTRING__ * &,HSTRING__ * &>(&v21);
  if ( v14 >= 0 )
  {
    v22 = 0LL;
    v15 = v21;
    if ( WindowsCreateStringReference(L"Windows.Launch", 0xEu, &v31, &v30) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v16 = v30;
    do
      ++v10;
    while ( a2[v10] );
    v17 = -1;
    if ( v10 > 0xFFFFFFFF )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    else
      v17 = v10;
    WindowsCreateStringReference(a2, v17, &v33, &v32);
    v14 = ((__int64 (__fastcall *)(IUnknown *, HSTRING, __int64, HSTRING, void *, _DWORD, _DWORD *))a1->lpVtbl[1].AddRef)(
            a1,
            v32,
            v25,
            v16,
            v15,
            0,
            v24);
    if ( v22 )
    {
      IUnknown_SetSite(a1, 0LL);
      v18 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
  v19 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( sourceString[0] )
    CoTaskMemFree((LPVOID)sourceString[0]);
  return (unsigned int)v14;
}
