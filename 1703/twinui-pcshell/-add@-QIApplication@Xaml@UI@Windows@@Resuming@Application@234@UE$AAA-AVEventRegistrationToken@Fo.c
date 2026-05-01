/*
 * XREFs of ?add@?QIApplication@Xaml@UI@Windows@@Resuming@Application@234@UE$AAA?AVEventRegistrationToken@Foundation@4@PE$AAV?$EventHandler@PE$AAVObject@Platform@@@84@@Z @ 0x180125230
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall _add__QIApplication_Xaml_UI_Windows__Resuming_Application_234_UE_AAA_AVEventRegistrationToken_Foundation_4_PE_AAV__EventHandler_PE_AAVObject_Platform___84__Z(
        __int64 (__fastcall ***a1)(_QWORD, void *, __int64 *),
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // rbx
  int v6; // eax
  int v7; // esi
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h]

  *a2 = 0LL;
  v5 = 0LL;
  v9 = 0LL;
  if ( a1 )
  {
    v6 = (**a1)(a1, &_uuidof__AUIApplication_Xaml_UI_Windows__, &v9);
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    v5 = v9;
  }
  v10 = v5;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v5 + 120LL))(v5, a3, a2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v7 < 0 )
    __abi_WinRTraiseException(v7);
  return a2;
}
