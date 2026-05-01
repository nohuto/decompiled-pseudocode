/*
 * XREFs of ?GetApplicationViewsFromLayout@XamlAllUpViewController@@AE$AAAJPEAUIAppLayout@@PEAIPEAPEAUIApplicationView@@2@Z @ 0x1801713F8
 * Callers:
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitcherViewModel@Switcher@Experiences@5WindowsInternal@@@Z @ 0x180170EAC (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitch.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlAllUpViewController::GetApplicationViewsFromLayout(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3,
        __int64 *a4,
        int a5)
{
  int v9; // eax
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 *v12; // rax
  int v13; // eax
  int v14; // esi
  _QWORD *v15; // rcx
  int v16; // eax
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 *v19; // rax
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // r8
  __int64 v27; // [rsp+30h] [rbp-20h] BYREF
  __int64 v28[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  _QWORD *v30; // [rsp+80h] [rbp+30h] BYREF

  v28[1] = -2LL;
  v27 = 0LL;
  v28[0] = 0LL;
  v30 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, _QWORD **))(*(_QWORD *)a1 + 104LL))(
         a1,
         0LL,
         1LL,
         &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
         &v30);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x9F,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = v30;
  v11 = *v30;
  v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v27);
  v13 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))(v11 + 48))(
          v10,
          &GUID_9ac0b5c8_1484_4c5b_9533_4134a0f97cea,
          v12);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xA0,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  v14 = a5;
  if ( a5 == 2 )
  {
    v15 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
    }
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, GUID *, _QWORD **))(*(_QWORD *)a1 + 104LL))(
            a1,
            1LL,
            1LL,
            &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
            &v30);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xA4,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
        (const char *)(unsigned int)v16);
      __debugbreak();
    }
    v17 = v30;
    v18 = *v30;
    v19 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v28);
    v20 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))(v18 + 48))(
            v17,
            &GUID_9ac0b5c8_1484_4c5b_9533_4134a0f97cea,
            v19);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xA5,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
        (const char *)(unsigned int)v20);
      __debugbreak();
    }
  }
  v21 = v27;
  v22 = 0LL;
  v27 = 0LL;
  *a3 = v21;
  v23 = v28[0];
  v24 = 0LL;
  v28[0] = 0LL;
  *a4 = v23;
  *a2 = v14;
  v25 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
    v22 = v27;
    v24 = v28[0];
  }
  if ( v24 )
  {
    v28[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    v22 = v27;
  }
  if ( v22 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return 0LL;
}
