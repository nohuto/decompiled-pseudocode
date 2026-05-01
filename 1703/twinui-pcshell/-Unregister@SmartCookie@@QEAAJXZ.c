/*
 * XREFs of ?Unregister@SmartCookie@@QEAAJXZ @ 0x18007866C
 * Callers:
 *     ??1CApplicationViewManager@@EEAA@XZ @ 0x1800714CC (--1CApplicationViewManager@@EEAA@XZ.c)
 *     ?UnsubscribeFromServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180071F20 (-UnsubscribeFromServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x180078734 (--1SmartCookie@@QEAA@XZ.c)
 *     ?Uninitialize@XamlTaskbarManager@@UEAAXXZ @ 0x180120820 (-Uninitialize@XamlTaskbarManager@@UEAAXXZ.c)
 *     ??_GXamlTaskbarManager@@UEAAPEAXI@Z @ 0x180121C70 (--_GXamlTaskbarManager@@UEAAPEAXI@Z.c)
 *     ?Destroy@AppViewSwitchItemDataSource@@UEAAJXZ @ 0x18015CC80 (-Destroy@AppViewSwitchItemDataSource@@UEAAJXZ.c)
 *     ??_GAppViewSwitchItemDataSource@@UEAAPEAXI@Z @ 0x18015E210 (--_GAppViewSwitchItemDataSource@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180004100 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SmartCookie::Unregister(SmartCookie *this)
{
  int v2; // r9d
  __int64 v3; // r8
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  SmartCookie *v13; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 28) )
    return 2147947423LL;
  v13 = this;
  wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)&v10, &v13);
  LODWORD(v13) = v2;
  v4 = *(_QWORD *)(v3 + 104);
  if ( !v4 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(0LL);
  v5 = (*(__int64 (__fastcall **)(__int64, SmartCookie **))(*(_QWORD *)v4 + 16LL))(v4, &v13);
  v7 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"internal\\shell\\private\\inc\\SmartCookie.h",
      (const char *)(unsigned int)v5);
  if ( v11 )
  {
    v8 = v10;
    *(_DWORD *)(v10 + 112) = 0;
    v9 = *(_QWORD *)(v8 + 104);
    if ( v9 )
    {
      LOBYTE(v6) = v9 != v8;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, v6);
      *(_QWORD *)(v8 + 104) = 0LL;
    }
    *(_QWORD *)(v8 + 104) = 0LL;
  }
  return v7;
}
