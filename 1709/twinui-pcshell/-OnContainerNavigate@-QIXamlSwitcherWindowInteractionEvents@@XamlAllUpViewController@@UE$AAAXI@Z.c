/*
 * XREFs of ?OnContainerNavigate@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXI@Z @ 0x1801719EC
 * Callers:
 *     ?OnContainerNavigate@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@WBI@E$AAAXI@Z @ 0x1801779F0 (-OnContainerNavigate@-QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@WBI@E$AAAX.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ @ 0x1801536F4 (-GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ.c)
 *     CreationThreadDispatcher::RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa___ @ 0x1801750C8 (CreationThreadDispatcher--RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall _OnContainerNavigate__QIXamlSwitcherWindowInteractionEvents__XamlAllUpViewController__UE_AAAXI_Z(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  int v4; // esi
  __int64 v6; // r14
  __int64 (__fastcall **v7)(__int64, GUID *, __int64 *); // rbx
  __int64 *v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  __int64 result; // rax
  __int64 v14; // rcx
  _QWORD v15[2]; // [rsp+38h] [rbp-48h] BYREF
  int v16; // [rsp+48h] [rbp-38h]
  __int64 v17; // [rsp+50h] [rbp-30h]
  _QWORD *v18; // [rsp+58h] [rbp-28h]
  _QWORD *v19; // [rsp+60h] [rbp-20h]
  int v20; // [rsp+68h] [rbp-18h]
  __int64 v21; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 v23; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+38h] BYREF

  v4 = a2;
  v23 = 0LL;
  v6 = Windows::UI::Core::CoreWindow::GetForCurrentThread((__int64)a1, a2, a3, a4);
  v7 = *(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v6;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v23);
  v9 = (*v7)(v6, &GUID_45d64a29_a63e_4cb6_b498_5781d298cb4f, v8);
  if ( v9 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xEF,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v9);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 24LL))(v23, &v24);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xF1,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  if ( a1 )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  }
  v18 = a1;
  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v19 = a1;
  v20 = v4;
  v11 = v24;
  v21 = v24;
  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v15[0] = a1;
  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v15[1] = a1;
  v16 = v4;
  v17 = v11;
  v12 = CreationThreadDispatcher::RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa___(a1[11], v15);
  if ( v12 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xFA,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v12);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
  result = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
  v14 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return result;
}
