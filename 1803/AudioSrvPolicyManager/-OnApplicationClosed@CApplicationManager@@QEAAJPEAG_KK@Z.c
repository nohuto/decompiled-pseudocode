/*
 * XREFs of ?OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z @ 0x18001DBA4
 * Callers:
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x18001F2B0 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z.c)
 *     ?Invoke@CAppClosedWorkItem@@UEAAXXZ @ 0x180029490 (-Invoke@CAppClosedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x180010EE0 (-UpdateAppState@CApplication@@QEAAXHPEAH@Z.c)
 *     ?SendAppClosureNotification@CApplication@@QEAAXXZ @ 0x180012544 (-SendAppClosureNotification@CApplication@@QEAAXXZ.c)
 *     ?DisconnectExclusiveModeStreams@CApplication@@QEAAXXZ @ 0x180012670 (-DisconnectExclusiveModeStreams@CApplication@@QEAAXXZ.c)
 *     ?IsVoipCallCapableAndCallIsActive@CApplication@@QEAAHXZ @ 0x18001320C (-IsVoipCallCapableAndCallIsActive@CApplication@@QEAAHXZ.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001C6B0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x18001CAC8 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001DA1C (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180026260 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z @ 0x180026300 (-TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::OnApplicationClosed(
        CApplicationManager *this,
        unsigned __int16 *a2,
        unsigned __int64 a3,
        unsigned int a4)
{
  int Application; // esi
  volatile signed __int32 *v9; // rbx
  CApplication *v10; // rdi
  CApplication *v11; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-18h] BYREF
  char v14; // [rsp+50h] [rbp-10h]
  CApplication *v15; // [rsp+90h] [rbp+30h] BYREF
  CApplication *v16; // [rsp+98h] [rbp+38h]

  Application = 0;
  v9 = 0LL;
  v16 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a2 )
  {
    if ( *a2 )
    {
      Application = CApplicationManager::GetApplication(this, a2, a3, a4, &v15, 0, 0LL);
      if ( Application >= 0 )
      {
        v10 = v15;
        v9 = (volatile signed __int32 *)v15;
        v16 = v15;
        if ( v15 )
        {
          _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
          v9 = (volatile signed __int32 *)v16;
          v10 = v15;
        }
        if ( !(unsigned int)CApplication::IsVoipCallCapableAndCallIsActive(v10) && *((_DWORD *)v10 + 139) )
          CApplicationManager::SilenceAndRevokePLMExemption(this, v10);
        CApplication::UpdateAppState(v10, 0, 0LL);
        if ( (unsigned int)TsSessionIsActiveMediaApplication(v10) )
          TsSessionIdRemoveActiveMediaApp(a4, v10);
        CApplication::SendAppClosureNotification(v10);
        if ( *((_BYTE *)v10 + 616) )
          Application = CApplicationManager::RemoveApplication(this, &v15);
      }
    }
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v9 )
  {
    CApplication::DisconnectExclusiveModeStreams((CApplication *)v9);
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      v11 = v16;
      (*(void (__fastcall **)(CApplication *))(*(_QWORD *)v16 + 16LL))(v16);
      (*(void (__fastcall **)(CApplication *, __int64))(*(_QWORD *)v11 + 8LL))(v11, 1LL);
    }
  }
  return (unsigned int)Application;
}
