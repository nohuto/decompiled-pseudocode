/*
 * XREFs of ?OnAppRequestedTransition@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x1800BDFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@$$T@Z @ 0x1800BF134 (--$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVCor.c)
 */

void __fastcall CortanaExperienceManagerNotification::OnAppRequestedTransition(
        CortanaExperienceManagerNotification *this)
{
  if ( *((_QWORD *)this + 6) )
  {
    if ( *((_BYTE *)this + 40) )
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CortanaSharedExperienceManager *,std::nullptr_t>(
        *((_QWORD *)this + 6) + 264LL,
        *((_QWORD *)this + 6));
  }
}
