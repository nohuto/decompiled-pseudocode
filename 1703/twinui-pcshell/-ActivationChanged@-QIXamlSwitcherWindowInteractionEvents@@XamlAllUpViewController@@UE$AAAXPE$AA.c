/*
 * XREFs of ?ActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z @ 0x1801428CC
 * Callers:
 *     ?ActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@WBI@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z @ 0x180143480 (-ActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@WBI@E$AAAXPE.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_c12dfab9154669097a3cd6f4b2210f79___ @ 0x180142A44 (CreationThreadDispatcher--RunAsync__lambda_c12dfab9154669097a3cd6f4b2210f79___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall _ActivationChanged__QIXamlSwitcherWindowInteractionEvents__XamlAllUpViewController__UE_AAAXPE_AAVObject_Platform__PE_AAVWindowActivatedEventArgs_Core_UI_Windows___Z(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  int v5; // eax
  _QWORD v6[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v8; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(v8) = 0;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)a3 + 48LL))(a3, &v8);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  if ( (_DWORD)v8 == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    v8 = a1;
    if ( a1 )
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    v6[2] = a1;
    if ( a1 )
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    v6[3] = a1;
    if ( a1 )
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    v6[0] = a1;
    if ( a1 )
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    v6[1] = a1;
    v5 = CreationThreadDispatcher::RunAsync__lambda_c12dfab9154669097a3cd6f4b2210f79___(a1[11], v6);
    if ( v5 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x21,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
        (const char *)(unsigned int)v5);
    (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
    (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
  }
  return result;
}
