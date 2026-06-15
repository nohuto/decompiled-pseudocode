/*
 * XREFs of ?SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z @ 0x18000F850
 * Callers:
 *     ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z @ 0x180012B7C (-SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x18000C6C8 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 */

void __fastcall CProcess::SetHasSmtcSubscription(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  int v6; // r8d
  int v7; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  v3 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 16);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (unsigned int)v3 <= 1 )
  {
    v6 = *(_DWORD *)(a1 + 4 * v3 + 516);
    if ( v6 || a3 )
    {
      v7 = v6 + (a3 != 0 ? 1 : -1);
      *(_DWORD *)(a1 + 4 * v3 + 516) = v7;
      if ( !v7 || v7 == 1 && a3 )
        CApplication::OnSmtcSubscriptionChanged(*(CApplication **)(a1 + 256));
    }
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
