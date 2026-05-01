/*
 * XREFs of ?OnHidden@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180085520
 * Callers:
 *     ?OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180065BE0 (-OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ @ 0x18008542C (-_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ.c)
 *     ??$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@$$T@Z @ 0x180085640 (--$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVCor.c)
 */

void __fastcall CortanaExperienceManagerNotification::OnHidden(CortanaExperienceManagerNotification *this)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  if ( CortanaExperienceManagerNotification::_CanNotify((CortanaExperienceManagerNotification *)((char *)this - 8)) )
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CortanaSharedExperienceManager *,std::nullptr_t>(
      *(_QWORD *)(v1 + 48) + 72LL,
      *(_QWORD *)(v1 + 48),
      v2);
}
