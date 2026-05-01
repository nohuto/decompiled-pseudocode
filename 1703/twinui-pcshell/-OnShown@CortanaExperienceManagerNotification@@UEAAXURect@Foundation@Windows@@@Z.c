/*
 * XREFs of ?OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x1800BE270
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIIconFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009C380 (-Release@-$RuntimeClass@U-$InterfaceList@UIIconFactory@Common@Multitasking@Experiences@Composabl.c)
 *     ??$InvokeAll@PEAVCortanaSharedExperienceManager@@PEAUIFocusNavigateEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIFocusNavigateEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@PEAUIFocusNavigateEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800BF584 (--$InvokeAll@PEAVCortanaSharedExperienceManager@@PEAUIFocusNavigateEventArgs@Experience@Shell@In.c)
 *     Microsoft::WRL::Details::Make__CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_&___ptr64_ @ 0x1800BF684 (Microsoft--WRL--Details--Make__CortanaExperienceManagerNotification--OnShown_--_2_--CCortanaShow.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CortanaExperienceManagerNotification::OnShown(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rbx
  volatile signed __int64 *v4; // rcx
  volatile signed __int64 *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 48) && *(_BYTE *)(a1 + 40) )
  {
    v2 = (__int64 *)Microsoft::WRL::Details::Make__CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_____ptr64_(&v5);
    v3 = *v2;
    *v2 = 0LL;
    v4 = v5;
    if ( v5 )
    {
      v5 = 0LL;
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IIconFactory,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v4);
    }
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CortanaSharedExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>(
      *(_QWORD *)(a1 + 48) + 48LL,
      *(_QWORD *)(a1 + 48),
      v3);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
