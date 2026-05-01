/*
 * XREFs of ?Unregister@SmartCookie@@QEAAJXZ @ 0x18007B24C
 * Callers:
 *     ?UnsubscribeFromServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180074B00 (-UnsubscribeFromServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x18007B2F8 (--1SmartCookie@@QEAA@XZ.c)
 *     ?UnsubscribeFromServices@PeoplePaneViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801108A0 (-UnsubscribeFromServices@PeoplePaneViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Uninitialize@XamlTaskbarManager@@UEAAXXZ @ 0x18014AD70 (-Uninitialize@XamlTaskbarManager@@UEAAXXZ.c)
 *     ?Unregister@?$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAXXZ @ 0x18019310C (-Unregister@-$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VAppli.c)
 *     ?UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18019B1B0 (-UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ @ 0x1801B4EA0 (-UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800042AC (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SmartCookie::Unregister(SmartCookie *this)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // edi
  SmartCookie *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v9; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 28) )
    return 2147947423LL;
  v9 = *((_DWORD *)this + 28);
  v3 = *((_QWORD *)this + 13);
  if ( !v3 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(0LL);
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 16LL))(v3, &v9);
  v6 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"internal\\shell\\private\\inc\\SmartCookie.h",
      (const char *)(unsigned int)v4);
  *((_DWORD *)this + 28) = 0;
  v7 = (SmartCookie *)*((_QWORD *)this + 13);
  if ( v7 )
  {
    LOBYTE(v5) = v7 != this;
    (*(void (__fastcall **)(SmartCookie *, __int64))(*(_QWORD *)v7 + 24LL))(v7, v5);
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_QWORD *)this + 13) = 0LL;
  return v6;
}
