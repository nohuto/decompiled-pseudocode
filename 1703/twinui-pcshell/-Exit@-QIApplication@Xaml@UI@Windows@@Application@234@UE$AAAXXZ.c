/*
 * XREFs of ?Exit@?QIApplication@Xaml@UI@Windows@@Application@234@UE$AAAXXZ @ 0x1801255F0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _Exit__QIApplication_Xaml_UI_Windows__Application_234_UE_AAAXXZ(
        __int64 (__fastcall ***a1)(_QWORD, void *, __int64 *))
{
  __int64 v1; // rbx
  int v2; // eax
  int v3; // edi
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h]

  v1 = 0LL;
  v5 = 0LL;
  if ( a1 )
  {
    v2 = (**a1)(a1, &_uuidof__AUIApplication_Xaml_UI_Windows__, &v5);
    if ( v2 < 0 )
      __abi_WinRTraiseException(v2);
    v1 = v5;
  }
  v6 = v1;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 136LL))(v1);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  return result;
}
