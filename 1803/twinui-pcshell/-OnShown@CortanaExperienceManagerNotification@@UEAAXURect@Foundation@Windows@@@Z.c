/*
 * XREFs of ?OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x180085480
 * Callers:
 *     ?OnViewShown@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180064920 (-OnViewShown@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ @ 0x18008542C (-_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaShownEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_4935cb68771a3c75d2224a753f78fcb0___ @ 0x18008582C (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_18008582C.c)
 *     Microsoft::WRL::Details::Make__CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_&___ptr64_ @ 0x180085A94 (Microsoft--WRL--Details--Make__CortanaExperienceManagerNotification--OnShown_--_2_--CCortanaShow.c)
 *     _CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs::Release @ 0x180085B00 (_CortanaExperienceManagerNotification--OnShown_--_2_--CCortanaShownEventArgs--Release.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180085BD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEven.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CortanaExperienceManagerNotification::OnShown(__int64 a1)
{
  char result; // al
  __int64 *v3; // rax
  __int64 v4; // rbx
  void *v5; // rcx
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(__int64); // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-10h] BYREF
  void *v9; // [rsp+50h] [rbp+20h] BYREF
  __int64 v10; // [rsp+60h] [rbp+30h] BYREF
  __int64 v11; // [rsp+68h] [rbp+38h] BYREF

  result = CortanaExperienceManagerNotification::_CanNotify((CortanaExperienceManagerNotification *)(a1 - 8));
  if ( result )
  {
    v3 = (__int64 *)Microsoft::WRL::Details::Make__CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_____ptr64_(&v9);
    v4 = *v3;
    *v3 = 0LL;
    v5 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release(v5);
    }
    v6 = *(_QWORD *)(a1 + 48);
    v8[0] = &v10;
    v10 = v6;
    v8[1] = &v11;
    v11 = v4;
    result = Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaShownEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_4935cb68771a3c75d2224a753f78fcb0___(
               v6 + 48,
               v8);
    if ( v4 )
    {
      v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL);
      if ( v7 == CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs::Release )
        return CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs::Release(v4);
      else
        return v7(v4);
    }
  }
  return result;
}
