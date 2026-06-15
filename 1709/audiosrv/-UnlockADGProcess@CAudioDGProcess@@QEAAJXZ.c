/*
 * XREFs of ?UnlockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x18001D870
 * Callers:
 *     ??_GCAPOWrapperClient@@UEAAPEAXI@Z @ 0x18001F360 (--_GCAPOWrapperClient@@UEAAPEAXI@Z.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18002AD2C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     AUDIOSERVER_rundown @ 0x18002B350 (AUDIOSERVER_rundown.c)
 *     AudioServerDisconnect @ 0x18008DFF0 (AudioServerDisconnect.c)
 *     HAUDIOSRVDIAGNOSTICS_rundown @ 0x1800D9A70 (HAUDIOSRVDIAGNOSTICS_rundown.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x1800D9B80 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x18001F510 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::UnlockADGProcess(CAudioDGProcess *this)
{
  LPCRITICAL_SECTION v1; // rbx
  CAudioThreadPool *v3; // rdi
  __int64 v4; // rax
  struct _TP_TIMER *v5; // rdx
  void (__fastcall *v6)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int); // rax
  unsigned int DebugInfo; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-30h] BYREF
  char v10; // [rsp+50h] [rbp-28h]
  CAudioDGProcess *pvData; // [rsp+80h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+88h] [rbp+10h] BYREF
  struct _FILETIME v13; // [rsp+90h] [rbp+18h] BYREF

  pvData = this;
  v1 = g_ADGProcess;
  lpCriticalSection = g_ADGProcess;
  v10 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 53LL, &WPP_c059856c368f347c07e9a39e19191005_Traceguids);
  }
  if ( LODWORD(v1[1].DebugInfo)-- == 1 )
  {
    v3 = ThreadPool;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 50LL, &WPP_c059856c368f347c07e9a39e19191005_Traceguids);
    }
    if ( !*(_QWORD *)&v1[3].LockCount )
      *(_QWORD *)&v1[3].LockCount = (*(__int64 (__fastcall **)(CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), LPCRITICAL_SECTION))(*(_QWORD *)v3 + 8LL))(
                                      v3,
                                      CAudioDGProcess::OnADGInactivityTimerFiredHandler,
                                      v1);
    pcbData = 4;
    if ( RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
           L"AudioDGInactiveTimeout",
           0x18u,
           0LL,
           &pvData,
           &pcbData) )
    {
      v4 = 300LL;
      LODWORD(pvData) = 300;
    }
    else
    {
      v4 = (unsigned int)pvData;
    }
    v5 = *(struct _TP_TIMER **)&v1[3].LockCount;
    if ( v5 )
    {
      v13 = (struct _FILETIME)(-10000000 * v4);
      v6 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int))(*(_QWORD *)v3 + 24LL);
      if ( v6 == CAudioThreadPool::SetTimer )
        CAudioThreadPool::SetTimer(v3, v5, &v13, 0, 0);
      else
        v6(v3, v5, &v13, 0, 0);
    }
  }
  DebugInfo = (unsigned int)v1[1].DebugInfo;
  if ( v10 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v10 = 0;
  }
  return DebugInfo;
}
