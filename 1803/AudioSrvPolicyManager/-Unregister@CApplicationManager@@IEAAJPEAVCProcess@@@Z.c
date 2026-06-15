/*
 * XREFs of ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001AF08
 * Callers:
 *     ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x1800099B4 (-UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18001AA78 (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B0A4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001D100 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     wil::details::lambda_call__lambda_bfd102d24aa09ec1a679abce498d7f04___::_lambda_call__lambda_bfd102d24aa09ec1a679abce498d7f04___ @ 0x18001F7E8 (wil--details--lambda_call__lambda_bfd102d24aa09ec1a679abce498d7f04___--_lambda_call__lambda_bfd1.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x180021BB0 (PbmUnregisterPlaybackManagerNotifications.c)
 *     PbmUnregisterAppClosureNotification @ 0x180022260 (PbmUnregisterAppClosureNotification.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180010BBC (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x18001509C (-CanBeRemoved@CProcess@@QEAAHXZ.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001C550 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::Unregister(CApplicationManager *this, struct CProcess *a2)
{
  CApplication *v4; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a2 && (unsigned int)CProcess::CanBeRemoved(a2) )
  {
    v4 = (CApplication *)*((_QWORD *)a2 + 35);
    if ( v4 )
      CApplication::DelinkProcess(v4, a2);
    CApplicationManager::RemoveProcess(this, a2);
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
