/*
 * XREFs of ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180007B78
 * Callers:
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x18002C1E0 (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18002F7B0 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x1800977A0 (-LockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x18009E830 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 *     ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x180107B40 (-TerminateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z @ 0x180035E30 (-WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z.c)
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180035E40 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDGProcess::CancelADGTerminationTimer(struct _RTL_CRITICAL_SECTION *this)
{
  CAudioThreadPool *v2; // rbx
  struct _TP_TIMER *v3; // rdx
  void (__fastcall *v4)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int); // rax
  struct _TP_TIMER *v5; // rdx
  void (__fastcall *v6)(CAudioThreadPool *__hidden, struct _TP_TIMER *, int); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v8; // [rsp+40h] [rbp-18h]

  v2 = ThreadPool;
  lpCriticalSection = this;
  v8 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v3 = *(struct _TP_TIMER **)&this[3].LockCount;
  if ( v3 )
  {
    v4 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int))(*(_QWORD *)v2 + 24LL);
    if ( v4 == CAudioThreadPool::SetTimer )
      CAudioThreadPool::SetTimer(v2, v3, 0LL, 0, 0);
    else
      v4(v2, v3, 0LL, 0, 0);
    v5 = *(struct _TP_TIMER **)&this[3].LockCount;
    v6 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, int))(*(_QWORD *)v2 + 32LL);
    if ( v6 == CAudioThreadPool::WaitForTimerCallbacks )
      CAudioThreadPool::WaitForTimerCallbacks(v2, v5, 1);
    else
      v6(v2, v5, 1);
  }
  if ( v8 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v8 = 0;
  }
}
