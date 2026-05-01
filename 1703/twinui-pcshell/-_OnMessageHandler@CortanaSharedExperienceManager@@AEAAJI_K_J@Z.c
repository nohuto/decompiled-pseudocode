/*
 * XREFs of ?_OnMessageHandler@CortanaSharedExperienceManager@@AEAAJI_K_J@Z @ 0x1800BD930
 * Callers:
 *     <none>
 * Callees:
 *     ?_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BDBC0 (-_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BDE0C (-_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ??$InvokeAll@PEAVCortanaSharedExperienceManager@@J@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@J@Z @ 0x1800BF22C (--$InvokeAll@PEAVCortanaSharedExperienceManager@@J@-$EventSource@U-$ITypedEventHandler@PEAVCorta.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_OnMessageHandler(
        CortanaSharedExperienceManager *this,
        int a2,
        CortanaSharedExperienceManager *a3,
        unsigned int a4)
{
  if ( a2 )
  {
    if ( a2 == *((_DWORD *)this + 106) )
    {
      CortanaSharedExperienceManager::_ResetActivationTimeoutPolicy(this);
    }
    else if ( a2 == *((_DWORD *)this + 110) )
    {
      CortanaSharedExperienceManager::_OnDeferredSuspensionTimer(this);
    }
  }
  else if ( a3 == this )
  {
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CortanaSharedExperienceManager *,long>(
      (char *)this + 312,
      this,
      a4);
  }
  return 0LL;
}
