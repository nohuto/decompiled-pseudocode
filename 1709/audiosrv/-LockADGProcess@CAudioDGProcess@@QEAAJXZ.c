/*
 * XREFs of ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x18001D720
 * Callers:
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x18001E2B0 (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18002AD2C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x1800D9B80 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18001DAEC (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z @ 0x18001F500 (-WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z.c)
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x18001F510 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioDGProcess::LockADGProcess(CAudioDGProcess *this)
{
  LPCRITICAL_SECTION v1; // rbx
  CAudioThreadPool *v2; // rdi
  struct _TP_TIMER *v3; // rdx
  void (__fastcall *v4)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int); // rax
  struct _TP_TIMER *v5; // rdx
  void (__fastcall *v6)(CAudioThreadPool *__hidden, struct _TP_TIMER *, int); // rax
  unsigned int DebugInfo; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-30h] BYREF
  char v10; // [rsp+40h] [rbp-28h]
  LPCRITICAL_SECTION v11; // [rsp+48h] [rbp-20h] BYREF
  char v12; // [rsp+50h] [rbp-18h]

  v1 = g_ADGProcess;
  v11 = g_ADGProcess;
  v12 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v11);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_c059856c368f347c07e9a39e19191005_Traceguids);
  }
  if ( ++LODWORD(v1[1].DebugInfo) == 1 )
  {
    v2 = ThreadPool;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, &WPP_c059856c368f347c07e9a39e19191005_Traceguids);
    }
    lpCriticalSection = v1;
    v10 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v3 = *(struct _TP_TIMER **)&v1[3].LockCount;
    if ( v3 )
    {
      v4 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int))(*(_QWORD *)v2 + 24LL);
      if ( v4 == CAudioThreadPool::SetTimer )
        CAudioThreadPool::SetTimer(v2, v3, 0LL, 0, 0);
      else
        v4(v2, v3, 0LL, 0, 0);
      v5 = *(struct _TP_TIMER **)&v1[3].LockCount;
      v6 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, int))(*(_QWORD *)v2 + 32LL);
      if ( v6 == CAudioThreadPool::WaitForTimerCallbacks )
        CAudioThreadPool::WaitForTimerCallbacks(v2, v5, 1);
      else
        v6(v2, v5, 1);
    }
    if ( v10 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v10 = 0;
    }
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v1);
  }
  DebugInfo = (unsigned int)v1[1].DebugInfo;
  if ( v12 )
  {
    LeaveCriticalSection(v11);
    v12 = 0;
  }
  return DebugInfo;
}
