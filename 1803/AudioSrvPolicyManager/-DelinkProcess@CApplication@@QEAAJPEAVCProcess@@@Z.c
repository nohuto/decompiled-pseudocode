/*
 * XREFs of ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180010BBC
 * Callers:
 *     ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x18001A8D0 (--_GCApplicationManager@@MEAAPEAXI@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001AF08 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180014A30 (-GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180017594 (-RemoveAt@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180019C98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplication::DelinkProcess(CApplication *this, struct CProcess *a2)
{
  unsigned int v4; // edi
  int ApplicationSpecificEndpointInfo; // eax
  struct IApplicationSpecificEndpointInfo *v6; // rbx
  int v7; // eax
  __int64 **i; // rdx
  int *v10; // rbx
  ATL::CAtlException *v11; // [rsp+28h] [rbp-30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v13; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v15; // [rsp+60h] [rbp+8h]
  struct IApplicationSpecificEndpointInfo *v16; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v16 = 0LL;
  ApplicationSpecificEndpointInfo = CProcess::GetApplicationSpecificEndpointInfo(
                                      (struct CProcess *)((char *)a2 + 16),
                                      &v16);
  v6 = v16;
  if ( ApplicationSpecificEndpointInfo >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(struct IApplicationSpecificEndpointInfo *, _QWORD))(*(_QWORD *)v16 + 72LL))(
           v16,
           *((unsigned int *)a2 + 54));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x15B,
        (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v7,
        -2);
  }
  for ( i = (__int64 **)*((_QWORD *)this + 9); i && i[2] != (__int64 *)a2; i = (__int64 **)*i )
    ;
  if ( i )
  {
    v4 = 0;
    try
    {
      ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::RemoveAt();
    }
    catch ( ATL::CAtlException *v11 )
    {
      v10 = (int *)v11;
      if ( *(_DWORD *)v11 == -1073741571 )
        _o__resetstkoflw();
      v15 = *v10;
      v4 = *v10;
      if ( v15 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, &WPP_16513b4b06ea364292c42252679a25cf_Traceguids, v15);
        }
        AudPolicyLogError("CApplication::DelinkProcess", 362, v15);
      }
      v6 = v16;
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(struct IApplicationSpecificEndpointInfo *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
