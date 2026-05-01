/*
 * XREFs of ?add@?QIApplication@Xaml@UI@Windows@@UnhandledException@Application@234@UE$AAA?AVEventRegistrationToken@Foundation@4@PE$AAVUnhandledExceptionEventHandler@234@@Z @ 0x180200260
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801F9D0C (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall _add__QIApplication_Xaml_UI_Windows__UnhandledException_Application_234_UE_AAA_AVEventRegistrationToken_Foundation_4_PE_AAVUnhandledExceptionEventHandler_234__Z(
        __int64 (__fastcall ***a1)(_QWORD, __int64, __int64 *),
        _QWORD *a2,
        __int64 a3)
{
  int v5; // edi
  __int64 v7; // [rsp+58h] [rbp+20h]

  *a2 = 0LL;
  v7 = __abi_winrt_cast_to(0, a1, (__int64)&_uuidof__AUIApplication_Xaml_UI_Windows__);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v7 + 88LL))(v7, a3, a2);
  __abi_winrt_ptr_dtor(v7);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  return a2;
}
