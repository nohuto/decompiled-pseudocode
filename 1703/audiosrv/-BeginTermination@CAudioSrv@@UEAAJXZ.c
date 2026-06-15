/*
 * XREFs of ?BeginTermination@CAudioSrv@@UEAAJXZ @ 0x180080760
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveHead@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAVCOnDeviceWorkItem@@XZ @ 0x18007C14C (-RemoveHead@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@AT.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x1800B4E20 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::BeginTermination(CAudioSrv *this)
{
  __int64 v2; // rdx
  CMonitorManager *v3; // rcx
  int v4; // edi
  __int64 v5; // rax
  void (__fastcall ***v6)(_QWORD, __int64); // rsi
  RPC_STATUS v7; // eax
  int v8; // eax
  RPC_STATUS v9; // eax
  int v10; // eax
  RPC_STATUS v11; // eax
  int v12; // eax
  RPC_STATUS v13; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v16; // [rsp+30h] [rbp-28h]

  if ( *((_DWORD *)this + 27) )
  {
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)&g_DeviceEnumerator + 56LL))(
      *(_QWORD *)&g_DeviceEnumerator,
      (char *)this + 72);
    *((_DWORD *)this + 27) = 0;
  }
  if ( ThreadPool )
  {
    v2 = *((_QWORD *)this + 25);
    if ( v2 )
    {
      (*(void (__fastcall **)(CAudioThreadPool *, __int64, _QWORD))(*(_QWORD *)ThreadPool + 40LL))(ThreadPool, v2, 0LL);
      (*(void (__fastcall **)(CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 64LL))(
        ThreadPool,
        *((_QWORD *)this + 25));
      *((_QWORD *)this + 25) = 0LL;
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 112);
  v16 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = 1;
  while ( *((_QWORD *)this + 21) )
  {
    v5 = ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveHead((__int64 **)this + 19);
    v6 = (void (__fastcall ***)(_QWORD, __int64))v5;
    v3 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Au,
        (__int64)&WPP_45152eef543736c8acd7716a7d1bb4fd_Traceguids,
        *(const wchar_t **)(v5 + 8));
    }
    if ( v6 )
      (**v6)(v6, 1LL);
  }
  if ( v16 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v16 = 0;
  }
  if ( *((_DWORD *)this + 26) && _MonitorManager )
  {
    CMonitorManager::Shutdown(v3);
    (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)_MonitorManager + 16LL))(_MonitorManager);
    _MonitorManager = 0LL;
  }
  if ( *((_DWORD *)this + 16) )
  {
    v7 = RpcServerUnregisterIfEx(&unk_1800DD930, 0LL, 1);
    if ( v7 )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Bu,
          (__int64)&WPP_45152eef543736c8acd7716a7d1bb4fd_Traceguids,
          v7);
      }
      v8 = 1;
    }
    else
    {
      v8 = 0;
    }
    *((_DWORD *)this + 16) = v8;
  }
  if ( *((_DWORD *)this + 14) )
  {
    v9 = RpcServerUnregisterIfEx(&unk_1800DD9F0, 0LL, 1);
    if ( v9 )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Cu,
          (__int64)&WPP_45152eef543736c8acd7716a7d1bb4fd_Traceguids,
          v9);
      }
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
    *((_DWORD *)this + 14) = v10;
  }
  if ( *((_DWORD *)this + 15) )
  {
    v11 = RpcServerUnregisterIfEx(&unk_1800DD990, 0LL, 1);
    if ( v11 )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Du,
          (__int64)&WPP_45152eef543736c8acd7716a7d1bb4fd_Traceguids,
          v11);
      }
      v12 = 1;
    }
    else
    {
      v12 = 0;
    }
    *((_DWORD *)this + 15) = v12;
  }
  if ( *((_DWORD *)this + 17) )
  {
    v13 = RpcServerUnregisterIfEx(&unk_1800DD8D0, 0LL, 1);
    if ( v13 )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Eu,
          (__int64)&WPP_45152eef543736c8acd7716a7d1bb4fd_Traceguids,
          v13);
      }
    }
    else
    {
      v4 = 0;
    }
    *((_DWORD *)this + 17) = v4;
  }
  return 0LL;
}
