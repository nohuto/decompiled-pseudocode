/*
 * XREFs of ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x18001CAC8
 * Callers:
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001ADC8 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z @ 0x18001DBA4 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RemoveAt@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180017594 (-RemoveAt@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RemoveApplication(CApplicationManager *this, struct CApplication **a2)
{
  struct CApplication **v2; // rsi
  unsigned int v4; // edi
  __int64 *v5; // rdx
  volatile signed __int32 *v6; // rbx
  int *v8; // rbx
  ATL::CAtlException *v9; // [rsp+28h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]
  int v12; // [rsp+50h] [rbp+8h]

  v2 = a2;
  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v11 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = (__int64 *)*((_QWORD *)this + 9);
  if ( v5 )
  {
    while ( (struct CApplication *)v5[2] != *v2 )
    {
      v5 = (__int64 *)*v5;
      if ( !v5 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v5 = 0LL;
  }
  if ( v5 )
  {
    v4 = 0;
    try
    {
      ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::RemoveAt((__int64 **)this + 9, v5);
    }
    catch ( ATL::CAtlException *v9 )
    {
      v8 = (int *)v9;
      if ( *(_DWORD *)v9 == -1073741571 )
        _o__resetstkoflw();
      v12 = *v8;
      v4 = *v8;
      if ( v12 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids, v12);
        }
        AudPolicyLogError("CApplicationManager::RemoveApplication", 1557, v12);
      }
      v2 = a2;
    }
  }
  v6 = (volatile signed __int32 *)*v2;
  if ( *v2 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1LL);
    }
    *v2 = 0LL;
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
