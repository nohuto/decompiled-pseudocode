/*
 * XREFs of ??1?$function@$$A6AXAEBK@Z@wistd@@QEAA@XZ @ 0x18002B330
 * Callers:
 *     _wil::details_abi::RecordWnfUsageIndex_::_1_::dtor$2 @ 0x1801E77E9 (_wil--details_abi--RecordWnfUsageIndex_--_1_--dtor$2.c)
 *     _SmartCookie::_SmartCookie_::_1_::dtor$0 @ 0x1801E99EF (_SmartCookie--_SmartCookie_--_1_--dtor$0.c)
 *     _HolographicPositioner::SubscribeToServices_::_1_::dtor$0 @ 0x1801ED164 (_HolographicPositioner--SubscribeToServices_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::SubscribeToServices_::_1_::dtor$2 @ 0x1801F6559 (_TouchKeyboardExperienceManager--SubscribeToServices_--_1_--dtor$2.c)
 *     _AccessibilityExperienceManager::RuntimeClassInitialize_::_1_::dtor$4 @ 0x1801F6B3A (_AccessibilityExperienceManager--RuntimeClassInitialize_--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function<void (unsigned long const &)>::~function<void (unsigned long const &)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v3 = *(_QWORD *)(a1 + 104);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, a2);
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
  {
    LOBYTE(a2) = v5 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, a2);
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  return result;
}
