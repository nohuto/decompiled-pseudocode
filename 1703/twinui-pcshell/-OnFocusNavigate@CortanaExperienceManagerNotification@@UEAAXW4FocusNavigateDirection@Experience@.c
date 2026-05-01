/*
 * XREFs of ?OnFocusNavigate@CortanaExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x1800BE090
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIIconFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009C380 (-Release@-$RuntimeClass@U-$InterfaceList@UIIconFactory@Common@Multitasking@Experiences@Composabl.c)
 *     Microsoft::WRL::Details::Make__CortanaExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs_enum_Windows::Internal::Shell::Experience::FocusNavigateDirection_&___ptr64_ @ 0x1800BF4DC (Microsoft--WRL--Details--Make__CortanaExperienceManagerNotification--OnFocusNavigate_--_2_--CFoc.c)
 *     ??$InvokeAll@PEAVCortanaSharedExperienceManager@@PEAUIFocusNavigateEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIFocusNavigateEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@PEAUIFocusNavigateEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800BF584 (--$InvokeAll@PEAVCortanaSharedExperienceManager@@PEAUIFocusNavigateEventArgs@Experience@Shell@In.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall CortanaExperienceManagerNotification::OnFocusNavigate(__int64 a1, int a2)
{
  _UNKNOWN **result; // rax
  __int64 *v4; // rax
  __int64 v5; // rbx
  volatile signed __int64 *v6; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  volatile signed __int64 *v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  result = &retaddr;
  v9 = a2;
  if ( *(_QWORD *)(a1 + 48) && *(_BYTE *)(a1 + 40) )
  {
    v4 = (__int64 *)Microsoft::WRL::Details::Make__CortanaExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs_enum_Windows::Internal::Shell::Experience::FocusNavigateDirection_____ptr64_(
                      &v8,
                      &v9);
    v5 = *v4;
    *v4 = 0LL;
    v6 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IIconFactory,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v6);
    }
    result = (_UNKNOWN **)Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CortanaSharedExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>(
                            *(_QWORD *)(a1 + 48) + 192LL,
                            *(_QWORD *)(a1 + 48),
                            v5);
    if ( v5 )
      return (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
