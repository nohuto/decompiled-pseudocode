/*
 * XREFs of ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001C550
 * Callers:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001AF08 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180015928 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x180015E90 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180017594 (-RemoveAt@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RemoveProcess(CApplicationManager *this, struct CProcess *a2)
{
  volatile signed __int32 *v2; // rdi
  int v4; // esi
  __int64 **v5; // r15
  __int64 *i; // rbx
  RTL_SRWLOCK *v7; // r14
  int *v10; // rbx
  ATL::CAtlException *v11; // [rsp+28h] [rbp-40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-38h] BYREF
  char v13; // [rsp+38h] [rbp-30h]

  v2 = (volatile signed __int32 *)a2;
  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = (__int64 **)((char *)this + 128);
  for ( i = (__int64 *)*((_QWORD *)this + 16); i && (volatile signed __int32 *)i[2] != v2; i = (__int64 *)*i )
    ;
  if ( i )
  {
    v7 = (RTL_SRWLOCK *)((char *)this + 120);
    AcquireSRWLockExclusive(v7);
    v4 = 0;
    try
    {
      ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::RemoveAt(v5, i);
    }
    catch ( ATL::CAtlException *v11 )
    {
      v10 = (int *)v11;
      if ( *(_DWORD *)v11 == -1073741571 )
        _o__resetstkoflw();
      v2 = (volatile signed __int32 *)a2;
      v4 = *v10;
    }
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    if ( v2 )
    {
      CProcess::CleanupProcessTerminationWatcher((CProcess *)v2, 0);
      CProcess::NotifyPLM((__int64)v2, 1);
      if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 32LL))(v2);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
      }
    }
    if ( v4 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids, v4);
      }
      AudPolicyLogError("CApplicationManager::RemoveProcess", 1435, v4);
    }
  }
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v4;
}
