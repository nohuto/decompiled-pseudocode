/*
 * XREFs of ?OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@Z @ 0x180077174
 * Callers:
 *     ?OnUserProfileChanged@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIUserProfileEventArgs@Internal@System@Windows@@@Z @ 0x180077210 (-OnUserProfileChanged@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIUserProfileEventArgs@Inte.c)
 *     ?StartUserManagerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x1800776F8 (-StartUserManagerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z @ 0x180079144 (-ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIRawInputProvider::OnUserProfileChanged_impl(
        WGIRawInputProvider *this,
        struct Windows::System::Internal::IUserProfile *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int v5; // ebx
  WGIController **i; // rbx
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+48h] [rbp+10h]

  v8 = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v9 = v4;
  v5 = (*(__int64 (__fastcall **)(struct Windows::System::Internal::IUserProfile *, unsigned int *))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v8);
  if ( v5 >= 0 )
  {
    for ( i = (WGIController **)*((_QWORD *)this + 11); i != *((WGIController ***)this + 12); ++i )
      WGIController::ApplyUserSettingsForController(*i, &v8);
    v5 = 0;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v5;
}
