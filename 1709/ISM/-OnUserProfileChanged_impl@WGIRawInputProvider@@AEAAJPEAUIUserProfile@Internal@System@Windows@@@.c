/*
 * XREFs of ?OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@Z @ 0x18009DD64
 * Callers:
 *     ?OnUserProfileChanged@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIUserProfileEventArgs@Internal@System@Windows@@@Z @ 0x18009DE40 (-OnUserProfileChanged@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIUserProfileEventArgs@Inte.c)
 *     ?StartUserManagerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x18009E414 (-StartUserManagerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z @ 0x1800A0444 (-ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIRawInputProvider::OnUserProfileChanged_impl(
        WGIRawInputProvider *this,
        struct Windows::System::Internal::IUserProfile *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  WGIController **i; // rbx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+58h] [rbp+10h]

  v12 = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v13 = v4;
  v5 = (*(__int64 (__fastcall **)(struct Windows::System::Internal::IUserProfile *, unsigned int *))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v12);
  v7 = v5;
  if ( v5 >= 0 )
  {
    for ( i = (WGIController **)*((_QWORD *)this + 11); i != *((WGIController ***)this + 12); ++i )
    {
      v9 = WGIController::ApplyUserSettingsForController(*i, &v12);
      if ( v9 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 277, v9);
    }
    v7 = 0;
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, 273, v5);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v7;
}
