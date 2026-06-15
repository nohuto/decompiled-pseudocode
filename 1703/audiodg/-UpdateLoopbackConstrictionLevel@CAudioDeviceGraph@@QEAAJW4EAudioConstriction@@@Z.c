/*
 * XREFs of ?UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z @ 0x140041AB0
 * Callers:
 *     ?RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConstriction@@@Z @ 0x140040820 (-RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConst.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140030F5C (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?SetLoopbackConstriction@CPipeInstance@@QEAAJW4EAudioConstriction@@@Z @ 0x14003F9F4 (-SetLoopbackConstriction@CPipeInstance@@QEAAJW4EAudioConstriction@@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::UpdateLoopbackConstrictionLevel(CAudioDeviceGraph *this, unsigned int a2)
{
  int v4; // ebx
  int v5; // esi
  struct _RTL_CRITICAL_SECTION *v6; // r14
  __int64 v7; // rcx
  CPipeInstance **Next; // rax
  CPipeInstance **v9; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-18h] BYREF
  char v12; // [rsp+30h] [rbp-10h]
  _QWORD *v13; // [rsp+60h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( *((_DWORD *)this + 56) )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
    v12 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v13 = (_QWORD *)*((_QWORD *)this + 17);
    if ( !v13 )
      goto LABEL_13;
    do
    {
      Next = (CPipeInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v7, &v13);
      v4 = CPipeInstance::SetLoopbackConstriction(*Next, a2);
      if ( v4 >= 0 )
        v5 = 1;
    }
    while ( v13 );
    if ( v4 < 0 )
    {
      if ( v5 )
      {
        v13 = (_QWORD *)*((_QWORD *)this + 17);
        while ( v13 )
        {
          v9 = (CPipeInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v7, &v13);
          CPipeInstance::SetLoopbackConstriction(*v9, *((unsigned int *)this + 20));
        }
      }
      if ( v12 )
        LeaveCriticalSection(lpCriticalSection);
    }
    else
    {
LABEL_13:
      if ( v12 )
        LeaveCriticalSection(lpCriticalSection);
      *((_DWORD *)this + 20) = a2;
    }
  }
  else
  {
    v4 = -2005139437;
  }
  LeaveCriticalSection(v6);
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Eu,
        (__int64)&WPP_4aa9f3a5c249328694bb02b83da61cfa_Traceguids,
        v4);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::UpdateLoopbackConstrictionLevel", 0x5FCu, v4);
  }
  return (unsigned int)v4;
}
