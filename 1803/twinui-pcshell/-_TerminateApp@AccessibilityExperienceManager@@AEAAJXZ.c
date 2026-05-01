/*
 * XREFs of ?_TerminateApp@AccessibilityExperienceManager@@AEAAJXZ @ 0x18025AF40
 * Callers:
 *     ?OnNotificationEvent@AccessibilityExperienceManager@@UEAAXPEBXK@Z @ 0x180259350 (-OnNotificationEvent@AccessibilityExperienceManager@@UEAAXPEBXK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VStubImmersiveApplication@@V1@AEBQEAG@Details@WRL@Microsoft@@YAJPEAPEAVStubImmersiveApplication@@AEBQEAG@Z @ 0x18025747C (--$MakeAndInitialize@VStubImmersiveApplication@@V1@AEBQEAG@Details@WRL@Microsoft@@YAJPEAPEAVStub.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AccessibilityExperienceManager::_TerminateApp(AccessibilityExperienceManager *this)
{
  HRESULT Instance; // eax
  int v2; // ebx
  LPVOID v3; // rbx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  LPVOID ppv[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+10h]
  AccessibilityExperienceManager *v10; // [rsp+60h] [rbp+18h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF
  StubImmersiveApplication *v12; // [rsp+70h] [rbp+28h] BYREF
  __int64 v13; // [rsp+78h] [rbp+30h] BYREF

  v10 = this;
  ppv[1] = (LPVOID)-2LL;
  ppv[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppv);
  Instance = CoCreateInstance(&CLSID_ShellServiceHost, 0LL, 0x404u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, ppv);
  v2 = Instance;
  if ( Instance >= 0 )
  {
    v13 = 0LL;
    v3 = ppv[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    v4 = (*(__int64 (__fastcall **)(LPVOID, SID *, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL))(
           v3,
           &SID_ProcessLifetimeManagerControl,
           &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d,
           &v13);
    v2 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1DD,
        (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
LABEL_14:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      goto LABEL_15;
    }
    LODWORD(v10) = 0;
    v5 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, AccessibilityExperienceManager **))(*(_QWORD *)v13 + 112LL))(
           v13,
           L"Microsoft.ECApp_8wekyb3d8bbwe!App",
           &v10);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        480LL,
        (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    if ( (unsigned int)((_DWORD)v10 - 4) > 1 )
    {
      v12 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
      v6 = Microsoft::WRL::Details::MakeAndInitialize<StubImmersiveApplication,StubImmersiveApplication,unsigned short * const &>(
             &v12,
             (const unsigned __int16 **)&off_180322C00);
      v2 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E6,
          (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
          (const char *)(unsigned int)v6);
LABEL_11:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
        goto LABEL_14;
      }
      v11 = 0;
      v2 = (*(__int64 (__fastcall **)(__int64, StubImmersiveApplication *, __int64, int *))(*(_QWORD *)v13 + 184LL))(
             v13,
             v12,
             8LL,
             &v11);
      if ( v2 < 0 )
        goto LABEL_11;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    }
    v2 = 0;
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1DA,
    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)(unsigned int)Instance);
LABEL_15:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppv);
  return (unsigned int)v2;
}
