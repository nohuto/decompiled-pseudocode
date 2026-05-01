/*
 * XREFs of ?OnShareTargetActivated@?QIApplicationOverrides@Xaml@UI@Windows@@Application@234@ME$AAAXPE$AAVShareTargetActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x18012581C
 * Callers:
 *     ?OnShareTargetActivated@?QIApplicationOverrides@Xaml@UI@Windows@@Application@234@OBA@E$AAAXPE$AAVShareTargetActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x180124E30 (-OnShareTargetActivated@-QIApplicationOverrides@Xaml@UI@Windows@@Application@234@OBA@E$AAAXPE$AA.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _OnShareTargetActivated__QIApplicationOverrides_Xaml_UI_Windows__Application_234_ME_AAAXPE_AAVShareTargetActivatedEventArgs_Activation_ApplicationModel_4__Z(
        __int64 (__fastcall ***a1)(_QWORD, void *, __int64 *),
        __int64 a2)
{
  __int64 v3; // rbx
  int v4; // eax
  int v5; // edi
  __int64 result; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h]

  v3 = 0LL;
  v7 = 0LL;
  if ( a1 )
  {
    v4 = (**a1)(a1, &_uuidof__AUIApplicationOverrides_Xaml_UI_Windows__, &v7);
    if ( v4 < 0 )
      __abi_WinRTraiseException(v4);
    v3 = v7;
  }
  v8 = v3;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 80LL))(v3, a2);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  return result;
}
