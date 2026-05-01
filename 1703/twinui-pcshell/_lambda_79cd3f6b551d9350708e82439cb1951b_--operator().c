/*
 * XREFs of _lambda_79cd3f6b551d9350708e82439cb1951b_::operator() @ 0x18012C530
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_79cd3f6b551d9350708e82439cb1951b__void_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataView_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IEvaluateItemEventArgs_____ptr64_::Invoke @ 0x180131280 (Platform--Details--__abi_FunctorCapture__lambda_79cd3f6b551d9350708e82439cb1951b__void_WindowsIn.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x18011E6EC (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 *     ??$query@UIAppViewSwitchItem@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAppViewSwitchItem@@Uerr_exception_policy@wil@@@1@XZ @ 0x180130BA8 (--$query@UIAppViewSwitchItem@@@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA-.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall lambda_79cd3f6b551d9350708e82439cb1951b_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v17[5]; // [rsp+28h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v19; // [rsp+88h] [rbp+38h] BYREF
  __int64 v20; // [rsp+90h] [rbp+40h] BYREF
  __int64 v21; // [rsp+98h] [rbp+48h] BYREF

  v19 = a2;
  v17[1] = -2LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 64LL))(a3, 1LL);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  v6 = Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(a3);
  v7 = v6;
  v17[2] = v6;
  v17[3] = v6;
  v16 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v20 = 0LL;
  v8 = *(_QWORD *)wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<IAppViewSwitchItem>(&v16, v17);
  v9 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 24LL))(v8, &v20);
  if ( v10 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x51,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)v10);
  if ( v17[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
  v21 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 56LL))(v20, &v21);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x54,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)*a1 + 96LL))(*a1, v21, &v19);
  if ( v12 >= 0 )
  {
    if ( (_DWORD)v19 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3 + 64LL))(a3, 0LL);
      if ( v13 < 0 )
        __abi_WinRTraiseException(v13);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x56,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)v12);
  }
  v14 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
}
