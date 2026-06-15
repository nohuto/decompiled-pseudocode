/*
 * XREFs of ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180016FF0
 * Callers:
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x180013120 (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18001E970 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x1800CDAF0 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18001746C (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z @ 0x180024220 (-WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z.c)
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180024230 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioDGProcess::LockADGProcess(CAudioDGProcess *this)
{
  LPCRITICAL_SECTION v1; // rbx
  unsigned int v2; // ebx
  CAudioThreadPool *v4; // rdi
  struct _TP_TIMER *DebugInfo; // rdx
  void (__fastcall *v6)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int); // rax
  struct _TP_TIMER *v7; // rdx
  void (__fastcall *v8)(CAudioThreadPool *__hidden, struct _TP_TIMER *, int); // rax
  LPCRITICAL_SECTION v9; // [rsp+38h] [rbp-30h] BYREF
  char v10; // [rsp+40h] [rbp-28h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-20h] BYREF
  char v12; // [rsp+50h] [rbp-18h]

  v1 = g_ADGProcess;
  lpCriticalSection = g_ADGProcess;
  v12 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids);
  }
  if ( ++LODWORD(v1[1].DebugInfo) == 1 )
  {
    v4 = ThreadPool;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids);
    }
    v9 = v1;
    v10 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v9);
    DebugInfo = (struct _TP_TIMER *)v1[3].DebugInfo;
    if ( DebugInfo )
    {
      v6 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int))(*(_QWORD *)v4 + 24LL);
      if ( v6 == CAudioThreadPool::SetTimer )
        CAudioThreadPool::SetTimer(v4, DebugInfo, 0LL, 0, 0);
      else
        v6(v4, DebugInfo, 0LL, 0, 0);
      v7 = (struct _TP_TIMER *)v1[3].DebugInfo;
      v8 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, int))(*(_QWORD *)v4 + 32LL);
      if ( v8 == CAudioThreadPool::WaitForTimerCallbacks )
        CAudioThreadPool::WaitForTimerCallbacks(v4, v7, 1);
      else
        v8(v4, v7, 1);
    }
    if ( v10 )
    {
      LeaveCriticalSection(v9);
      v10 = 0;
    }
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v1);
  }
  v2 = (unsigned int)v1[1].DebugInfo;
  if ( v12 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v12 = 0;
  }
  return v2;
}
