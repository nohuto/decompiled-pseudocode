/*
 * XREFs of ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180010A08
 * Callers:
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001ADC8 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x180010DA8 (-GetActiveProcessCount@CApplication@@QEAAIXZ.c)
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x1800134F4 (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCTrackedEndpoint@@V?$CElementTraits@PEAVCTrackedEndpoint@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCTrackedEndpoint@@@Z @ 0x180017498 (-AddHead@-$CAtlList@PEAVCTrackedEndpoint@@V-$CElementTraits@PEAVCTrackedEndpoint@@@ATL@@@ATL@@QE.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180019C98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::LinkProcess(CApplication *this, struct CProcess *a2)
{
  struct CProcess *v2; // rdi
  CApplication *v3; // rbx
  int v4; // edx
  unsigned int v5; // esi
  int v6; // eax
  volatile signed __int32 *v7; // r14
  __int64 result; // rax
  int *v9; // rbx
  ATL::CAtlException *v10; // [rsp+28h] [rbp-30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v12; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct CProcess *v15; // [rsp+68h] [rbp+10h] BYREF
  int v16; // [rsp+70h] [rbp+18h]

  v15 = a2;
  v2 = a2;
  v3 = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *((_DWORD *)v3 + 138) = *((_DWORD *)v2 + 119);
  v4 = *((_DWORD *)v2 + 120);
  *((_DWORD *)v3 + 139) = v4;
  *((_BYTE *)v3 + 616) = *((_BYTE *)v2 + 753);
  if ( !v4 )
  {
    *((_DWORD *)v3 + 42) |= 1u;
    *((_DWORD *)v3 + 44) = 2;
    *((_DWORD *)v3 + 71) = 2;
    *((_DWORD *)v3 + 72) = 2;
  }
  if ( !CApplication::GetActiveProcessCount(v3) )
    *((_DWORD *)v3 + 144) = 1;
  v5 = 0;
  try
  {
    ATL::CAtlList<CTrackedEndpoint *,ATL::CElementTraits<CTrackedEndpoint *>>::AddHead((char *)v3 + 72, &v15);
  }
  catch ( ATL::CAtlException *v10 )
  {
    v9 = (int *)v10;
    if ( *(_DWORD *)v10 == -1073741571 )
      _o__resetstkoflw();
    v16 = *v9;
    v5 = v16;
    if ( v16 >= 0 )
    {
      v3 = this;
      v2 = v15;
      goto LABEL_8;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_16513b4b06ea364292c42252679a25cf_Traceguids, v16);
    }
    AudPolicyLogError("CApplication::LinkProcess", 326, v5);
LABEL_18:
    if ( v12 )
      LeaveCriticalSection(lpCriticalSection);
    result = v5;
  }
LABEL_8:
  v6 = CApplication::RegisterProcessWithApplicationSpecificEndpointInfo(v3, v2);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x13E,
      (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v6,
      -2);
  v7 = (volatile signed __int32 *)*((_QWORD *)v2 + 35);
  *((_QWORD *)v2 + 35) = v3;
  _InterlockedIncrement((volatile signed __int32 *)v3 + 2);
  if ( v7 && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 1LL);
  }
  goto LABEL_18;
}
