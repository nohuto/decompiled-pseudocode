/*
 * XREFs of ?get@?QIApplication@Xaml@UI@Windows@@RequestedTheme@Application@234@UE$AAA?AW4ApplicationTheme@234@XZ @ 0x18014F2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _get__QIApplication_Xaml_UI_Windows__RequestedTheme_Application_234_UE_AAA_AW4ApplicationTheme_234_XZ(
        __int64 (__fastcall ***a1)(_QWORD, void *, __int64 *))
{
  __int64 v1; // rbx
  int v2; // eax
  int v3; // edi
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h]

  v5 = 0;
  v1 = 0LL;
  v6 = 0LL;
  if ( a1 )
  {
    v2 = (**a1)(a1, &_uuidof__AUIApplication_Xaml_UI_Windows__, &v6);
    if ( v2 < 0 )
      __abi_WinRTraiseException(v2);
    v1 = v6;
  }
  v7 = v1;
  v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 72LL))(v1, &v5);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  return v5;
}
