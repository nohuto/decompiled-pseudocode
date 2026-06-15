/*
 * XREFs of ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18000BC8C
 * Callers:
 *     ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x180012690 (--_GCApplicationManager@@MEAAPEAXI@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180012D98 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RemoveAt@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180011308 (-RemoveAt@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU.c)
 */

__int64 __fastcall CApplication::DelinkProcess(CApplication *this, struct CProcess *a2)
{
  unsigned int v4; // edi
  __int64 **i; // rdx
  int *v7; // rbx
  ATL::CAtlException *v8; // [rsp+28h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]
  int v11; // [rsp+50h] [rbp+8h]

  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  for ( i = (__int64 **)*((_QWORD *)this + 9); i && i[2] != (__int64 *)a2; i = (__int64 **)*i )
    ;
  if ( i )
  {
    try
    {
      ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::RemoveAt((char *)this + 72);
    }
    catch ( ATL::CAtlException *v8 )
    {
      v7 = (int *)v8;
      if ( *(_DWORD *)v8 == -1073741571 )
        _o__resetstkoflw();
      v11 = *v7;
      v4 = *v7;
      if ( v11 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, &WPP_9c3c8450e3c737dcda82a54556fbcbcb_Traceguids, v11);
        }
        AudPolicyLogError("CApplication::DelinkProcess", 366, v11);
      }
    }
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
