/*
 * XREFs of ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x18000C750
 * Callers:
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x18000C6C8 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001EBD0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@Z @ 0x18000C924 (-AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000D9A0 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000DA78 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18000DB80 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180010B6C (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x1800145C4 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18001CEE0 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 */

void __fastcall CApplication::ApplySmtcRelatedPolicy(CApplication *this)
{
  int v2; // esi
  _QWORD *v3; // rdi
  CProcess *v4; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  v2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v6 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v3 )
  {
    v4 = (CProcess *)v3[2];
    v3 = (_QWORD *)*v3;
    if ( !*((_DWORD *)v4 + 116) )
      v2 += CProcess::GetActiveRenderStreamCount(v4, 2u);
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  if ( !v2 || (unsigned int)CApplication::HasSmtcSubscription(this, 1LL) )
  {
    if ( (unsigned int)CApplication::IsBackgroundAudioCapable(this)
      && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(this)
      && !(unsigned int)CApplication::HasSmtcSubscription(this, 1LL) )
    {
      CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, this, 0xD1u, 0);
    }
  }
  else
  {
    CApplication::AddCategoryOverrideToProcesses(this, 4LL, 4LL, 1LL);
    CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, this, 0xD1u, 0);
    TsSessionIdRemoveActiveMediaApp(*((_DWORD *)this + 43), this);
  }
}
