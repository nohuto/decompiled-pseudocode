/*
 * XREFs of ?set@?QIApplication@Xaml@UI@Windows@@RequestedTheme@Application@234@UE$AAAXW4ApplicationTheme@234@@Z @ 0x1801250D0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _set__QIApplication_Xaml_UI_Windows__RequestedTheme_Application_234_UE_AAAXW4ApplicationTheme_234__Z(
        __int64 (__fastcall ***a1)(_QWORD, void *, __int64 *),
        unsigned int a2)
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
    v4 = (**a1)(a1, &_uuidof__AUIApplication_Xaml_UI_Windows__, &v7);
    if ( v4 < 0 )
      __abi_WinRTraiseException(v4);
    v3 = v7;
  }
  v8 = v3;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 80LL))(v3, a2);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  return result;
}
