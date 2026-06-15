/*
 * XREFs of ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001D100
 * Callers:
 *     ?Invoke@CProcessTerminatedWorkItem@@UEAAXXZ @ 0x180028F30 (-Invoke@CProcessTerminatedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x180010DA8 (-GetActiveProcessCount@CApplication@@QEAAIXZ.c)
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180011654 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x180013014 (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?VoipCallStateChanged@CApplication@@QEAAXH@Z @ 0x180013110 (-VoipCallStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001515C (-RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001520C (-RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180015928 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x180015E90 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z @ 0x180016138 (-SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001AF08 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001CCE4 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x18001DE14 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z @ 0x180026300 (-TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x1800264C4 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x1800269DC (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180026A78 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::ProcessTerminated(CApplicationManager *this, struct CProcess *a2)
{
  CApplicationManager *v3; // r13
  struct _RTL_CRITICAL_SECTION *v4; // r12
  struct CApplication *v5; // rsi
  int v6; // r15d
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  unsigned int v9; // ecx
  unsigned int v10; // edx
  __int64 v11; // rdi
  __int64 v12; // r10
  __int64 v13; // r8
  unsigned int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rax
  _DWORD *v17; // rax
  unsigned int i; // ecx
  int v19; // edx
  int v20; // edx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-28h] BYREF
  char v23; // [rsp+40h] [rbp-20h]
  LPCRITICAL_SECTION v24; // [rsp+48h] [rbp-18h] BYREF
  char v25; // [rsp+50h] [rbp-10h]
  CApplicationManager *v26; // [rsp+A0h] [rbp+40h] BYREF
  int v27; // [rsp+A8h] [rbp+48h] BYREF

  v26 = this;
  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  v24 = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  v25 = 0;
  ATL::CCritSecLock::Lock(&v24);
  v5 = (struct CApplication *)*((_QWORD *)a2 + 35);
  v27 = 0;
  v6 = 0;
  LODWORD(v26) = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)a2 + 32);
  v23 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CProcess::CleanupProcessTerminationWatcher(a2, 0);
  *((_DWORD *)a2 + 118) = 2;
  v7 = (_QWORD *)*((_QWORD *)a2 + 9);
  while ( v7 )
  {
    v8 = v7[2];
    v7 = (_QWORD *)*v7;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 80LL))(v8, (char *)a2 + 16);
  }
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)a2 + 632);
  v23 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_QWORD *)a2 + 85) )
  {
    v9 = 0;
    v10 = *((_DWORD *)a2 + 172);
    if ( v10 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(*((_QWORD *)a2 + 84) + 8LL * v9);
        if ( v11 )
          break;
        if ( ++v9 >= v10 )
          goto LABEL_18;
      }
      do
      {
        v12 = v11;
        v13 = *(_QWORD *)(v11 + 16);
        if ( !v13 )
        {
          v14 = *((_DWORD *)a2 + 172);
          v15 = *(_DWORD *)(v11 + 24) % v14 + 1;
          do
          {
            if ( (unsigned int)v15 >= v14 )
              break;
            v16 = *((_QWORD *)a2 + 84);
            if ( *(_QWORD *)(v16 + 8 * v15) )
              v13 = *(_QWORD *)(v16 + 8 * v15);
            v15 = (unsigned int)(v15 + 1);
          }
          while ( !v13 );
        }
        v11 = v13;
        (*(void (__fastcall **)(_QWORD, char *, _QWORD))(**(_QWORD **)(v12 + 8) + 24LL))(
          *(_QWORD *)(v12 + 8),
          (char *)a2 + 16,
          *(_QWORD *)v12);
      }
      while ( v11 );
    }
  }
LABEL_18:
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
  if ( (unsigned int)TsSessionIdIsAScreenReaderProcess(*((_DWORD *)a2 + 55), *((_DWORD *)a2 + 54), 0LL) )
  {
    TsSessionIdScreenReaderStateChanged(*((_DWORD *)a2 + 55), *((_DWORD *)a2 + 54), 0, 1.0, (int *)&v26);
    v6 = (int)v26;
  }
  CProcess::SimulateStreamStateChange(a2, 0, &v27);
  if ( v27 || v6 )
    CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)v3, *((_DWORD *)a2 + 55), 3u);
  if ( v5 && (unsigned int)TsSessionIsActiveMediaApplication(v5) )
  {
    lpCriticalSection = v4;
    v23 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    if ( !(unsigned int)CApplication::GetActiveProcessCount(v5) )
      CApplicationManager::UpdateActiveMediaAppForSession(v3, v5, 1);
    if ( v23 )
      LeaveCriticalSection(lpCriticalSection);
  }
  if ( (*((_BYTE *)a2 + 508) & 1) != 0 )
    CProcess::RegisteredForSoundLevelNotifications((__int64)a2, 0, -1);
  v17 = (_DWORD *)((char *)a2 + 540);
  if ( *((_DWORD *)a2 + 135) )
  {
    for ( i = 0; i < 2; ++i )
      *v17++ = 0;
    if ( v5 )
      CApplication::OnSmtcSubscriptionChanged(v5);
  }
  if ( (*((_DWORD *)a2 + 127) & 0x1000) != 0 )
    CProcess::RegisteredForTrackStateNotifications((__int64)a2, 0, -1);
  if ( *((_DWORD *)a2 + 128) )
  {
    TsSessionIdDeleteAppManagerClient(a2);
    *((_DWORD *)a2 + 128) = 0;
  }
  if ( *((_DWORD *)a2 + 129) )
    *((_DWORD *)a2 + 129) = 0;
  *((_DWORD *)a2 + 133) = 0;
  v19 = *((_DWORD *)a2 + 138);
  if ( v19 > 0 )
  {
    CApplication::CastingStateChanged(*((CApplication **)a2 + 35), -v19);
    *((_DWORD *)a2 + 138) = 0;
  }
  v20 = *((_DWORD *)a2 + 139);
  if ( v20 > 0 )
  {
    CApplication::VoipCallStateChanged(*((CApplication **)a2 + 35), -v20);
    *((_DWORD *)a2 + 139) = 0;
  }
  CProcess::NotifyPLM((__int64)a2, 1);
  CApplicationManager::Unregister(v3, a2);
  if ( v25 )
    LeaveCriticalSection(v24);
  return 0LL;
}
