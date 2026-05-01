/*
 * XREFs of ?OnShareTargetActivated@?QIApplicationOverrides@Xaml@UI@Windows@@Application@234@ME$AAAXPE$AAVShareTargetActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x1801FE39C
 * Callers:
 *     ?OnShareTargetActivated@?QIApplicationOverrides@Xaml@UI@Windows@@Application@234@OBA@E$AAAXPE$AAVShareTargetActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x1800A9410 (-OnShareTargetActivated@-QIApplicationOverrides@Xaml@UI@Windows@@Application@234@OBA@E$AAAXPE$AA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801F9D0C (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _OnShareTargetActivated__QIApplicationOverrides_Xaml_UI_Windows__Application_234_ME_AAAXPE_AAVShareTargetActivatedEventArgs_Activation_ApplicationModel_4__Z(
        __int64 (__fastcall ***a1)(_QWORD, __int64, __int64 *),
        __int64 a2)
{
  int v3; // edi
  __int64 result; // rax
  __int64 v5; // [rsp+50h] [rbp+18h]

  v5 = __abi_winrt_cast_to(0, a1, (__int64)&_uuidof__AUIApplicationOverrides_Xaml_UI_Windows__);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 80LL))(v5, a2);
  result = __abi_winrt_ptr_dtor(v5);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  return result;
}
