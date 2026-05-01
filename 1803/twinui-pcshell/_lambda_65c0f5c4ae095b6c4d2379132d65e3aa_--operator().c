/*
 * XREFs of _lambda_65c0f5c4ae095b6c4d2379132d65e3aa_::operator() @ 0x1800A1A4C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_65c0f5c4ae095b6c4d2379132d65e3aa___::Run @ 0x1800A2320 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_65c0f5c4ae095b6c4d2379132d65e3aa___--Run.c)
 * Callees:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18007FCC0 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800F60C4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800F60F4 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$Start@$$V@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@XZ @ 0x18023B4C8 (--$Start@$$V@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@SA-AV01@XZ.c)
 *     ??1InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18023BFAC (--1InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?RegisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180240E14 (-RegisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?RegisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180240F6C (-RegisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJAEBV-$basic_string@GU-$char_traits@G.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MultiViewInputApp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180241564 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MultiViewInputApp@@@wil@@CAX_NW4Repo.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180241D84 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTa.c)
 *     ?UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180243280 (-UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1802433D4 (-UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18024AA44 (-OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_65c0f5c4ae095b6c4d2379132d65e3aa_::operator()(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rbx
  TouchKeyboardExperienceManager **v3; // rdi
  int v4; // esi
  __int64 v5; // rdx
  __int64 v7; // r9
  int v8; // esi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  _BYTE v12[8]; // [rsp+30h] [rbp-168h] BYREF
  __int64 v13; // [rsp+38h] [rbp-160h]
  _BYTE v14[320]; // [rsp+40h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  v13 = -2LL;
  v2 = a1;
  LOBYTE(a2) = 3;
  wil::Feature<__WilFeatureTraits_Feature_MultiViewInputApp>::ReportUsageToService(a1, a2);
  v3 = (TouchKeyboardExperienceManager **)(v2 + 4);
  v4 = TouchKeyboardExperienceManager::UnregisterForViewEvents((TouchKeyboardExperienceManager *)v2[4]);
  if ( v4 < 0 )
  {
    v5 = 1539LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = TouchKeyboardExperienceManager::RegisterForViewEvents(*v3, v2);
  if ( v4 < 0 )
  {
    v5 = 1540LL;
    goto LABEL_3;
  }
  TouchKeyboardExperienceTelemetryLogger::InputAppActivation::Start<>((TouchKeyboardExperienceTelemetryLogger::InputAppActivation *)v14);
  if ( (unsigned __int64)v2[3] >= 8 )
    v2 = (__int64 *)*v2;
  v8 = ActivateApplicationForExperienceWithPropertySet((const unsigned __int16 *)v2, L"MultiViewMode", 0LL, v7, 1, 0LL);
  v9 = TouchKeyboardExperienceManager::UnregisterForApplicationStateChanges(*v3);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v9 = TouchKeyboardExperienceManager::RegisterForApplicationStateChanges(*v3);
    v10 = v9;
    if ( v9 >= 0 )
    {
      wil::srwlock::lock_exclusive((char *)*v3 + 656, v12);
      *((_DWORD *)*v3 + 162) = 1;
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((CAutoSRWExclusiveLock *)v12);
      KeyboardHosting::TabTipAdapter::OnInputAppActivated(*((KeyboardHosting::TabTipAdapter **)*v3 + 83));
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v14,
        (unsigned int)v8);
      if ( v8 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x61A,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v8);
      v10 = v8;
      goto LABEL_16;
    }
    v11 = 1553LL;
  }
  else
  {
    v11 = 1552LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_16:
  TouchKeyboardExperienceTelemetryLogger::InputAppActivation::~InputAppActivation((TouchKeyboardExperienceTelemetryLogger::InputAppActivation *)v14);
  return v10;
}
