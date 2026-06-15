/*
 * XREFs of ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180011654
 * Callers:
 *     ?SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x180015290 (-SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001D100 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x1800116DC (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180012918 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x180012AF8 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180026260 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 */

void __fastcall CApplication::OnSmtcSubscriptionChanged(CApplication *this)
{
  CApplication::ApplySmtcRelatedPolicy(this);
  if ( !(unsigned int)CApplication::HasSmtcSubscription(this, 0LL) )
    goto LABEL_8;
  if ( *((_DWORD *)this + 42) )
  {
LABEL_7:
    CApplicationManager::UpdateActiveMediaAppForSession(g_ApplicationManager, this, 0);
    return;
  }
  if ( (unsigned int)CApplication::HasSmtcSubscription(this, 1LL) )
  {
    if ( *((_DWORD *)this + 42)
      || (unsigned int)CApplication::IsBackgroundAudioCapable(this)
      && (unsigned int)CApplication::HasSmtcSubscription(this, 1LL) )
    {
      goto LABEL_7;
    }
  }
  else
  {
LABEL_8:
    TsSessionIdRemoveActiveMediaApp(*((_DWORD *)this + 43), this);
  }
}
