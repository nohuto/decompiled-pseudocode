/*
 * XREFs of ?set@?QIApplication@Xaml@UI@Windows@@Resources@Application@234@UE$AAAXPE$AAVResourceDictionary@234@@Z @ 0x180200AA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801F9D0C (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _set__QIApplication_Xaml_UI_Windows__Resources_Application_234_UE_AAAXPE_AAVResourceDictionary_234__Z(
        __int64 (__fastcall ***a1)(_QWORD, __int64, __int64 *),
        __int64 a2)
{
  int v3; // edi
  __int64 result; // rax
  __int64 v5; // [rsp+50h] [rbp+18h]

  v5 = __abi_winrt_cast_to(0, a1, (__int64)&_uuidof__AUIApplication_Xaml_UI_Windows__);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 56LL))(v5, a2);
  result = __abi_winrt_ptr_dtor(v5);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  return result;
}
