/*
 * XREFs of ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x1800150E4
 * Callers:
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x180016750 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z.c)
 *     ?Invoke@CAppClosedWorkItem@@UEAAXXZ @ 0x18001FE70 (-Invoke@CAppClosedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x18000BF44 (-UpdateAppState@CApplication@@QEAAXHPEAH@Z.c)
 *     ?SendAppClosureNotification@CApplication@@QEAAXXZ @ 0x18000D5C8 (-SendAppClosureNotification@CApplication@@QEAAXXZ.c)
 *     ?DisconnectExclusiveModeStreams@CApplication@@QEAAXXZ @ 0x18000D6F4 (-DisconnectExclusiveModeStreams@CApplication@@QEAAXXZ.c)
 *     ?IsVoipCallCapableAndCallIsActive@CApplication@@QEAAHXZ @ 0x18000E0C0 (-IsVoipCallCapableAndCallIsActive@CApplication@@QEAAHXZ.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x180013D3C (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014F5C (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18001CEE0 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z @ 0x18001CF80 (-TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnApplicationClosed(
        CApplicationManager *this,
        unsigned __int16 *a2,
        unsigned int a3)
{
  int Application; // esi
  CApplication *v7; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-30h] BYREF
  char v10; // [rsp+40h] [rbp-28h]
  CApplication *v11; // [rsp+70h] [rbp+8h] BYREF

  Application = 0;
  v7 = 0LL;
  v11 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a2 )
  {
    if ( *a2 )
    {
      Application = CApplicationManager::GetApplication(this, a2, a3, &v11, 0, 0LL);
      v7 = v11;
      if ( Application >= 0 )
      {
        if ( !(unsigned int)CApplication::IsVoipCallCapableAndCallIsActive(v11) && *((_DWORD *)v7 + 139) )
          CApplicationManager::SilenceAndRevokePLMExemption(this, v7);
        CApplication::UpdateAppState(v7, 0, 0LL);
        if ( (unsigned int)TsSessionIsActiveMediaApplication(v7) )
          TsSessionIdRemoveActiveMediaApp(a3, v7);
        CApplication::SendAppClosureNotification(v7);
      }
    }
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v7 )
    CApplication::DisconnectExclusiveModeStreams(v7);
  return (unsigned int)Application;
}
