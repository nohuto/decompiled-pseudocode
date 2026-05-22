/*
 * XREFs of ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x1800600C0
 * Callers:
 *     ?SendInputDetectedIfController@MPCClickerProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x180054E40 (-SendInputDetectedIfController@MPCClickerProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18005EFDC (-LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18005F4E4 (-LogMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18005F6B8 (-LogMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18005F88C (-LogMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?ReportPerf@MPCPerfCounter@@AEAAX_K@Z @ 0x180063670 (-ReportPerf@MPCPerfCounter@@AEAAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCInputProviderBase::OnInputReport(MPCInputProviderBase *this, struct InputInfo *a2)
{
  __int64 v4; // rax
  char *v5; // rdi
  __int64 v6; // rax
  const char *v7; // r9
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  const char *v13; // r9
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  _DWORD *v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v21; // [rsp+40h] [rbp+18h] BYREF

  MPCHolographicInputManager::GetInstance();
  if ( !*(_QWORD *)(v4 + 3120) )
  {
    v5 = (char *)this + 24;
    if ( (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 3) + 112LL))((char *)this + 24) == 1
      && *((_DWORD *)a2 + 174) == 8 )
    {
      MPCHolographicInputManager::GetInstance();
      v8 = v6;
      if ( *(_QWORD *)(v6 + 3120) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x6B,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\inc\\mpcholographicinputmanager.h",
          v7);
        __debugbreak();
      }
      if ( *(char **)(v6 + 3120) != v5 )
      {
        if ( this != (MPCInputProviderBase *)-24LL )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))((char *)this + 24);
        v9 = *(_QWORD *)(v8 + 3120);
        *(_QWORD *)(v8 + 3120) = v5;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
  }
  MPCHolographicInputManager::GetInstance();
  if ( *(_BYTE *)(v10 + 3128) && (MPCHolographicInputManager::GetInstance(), *(_QWORD *)(v11 + 3120)) )
  {
    v21 = 1;
    v12 = (*(__int64 (__fastcall **)(char *, struct InputInfo *))(*((_QWORD *)this + 3) + 264LL))((char *)this + 24, a2);
    if ( v12 >= 0 )
      goto LABEL_17;
    v14 = 257LL;
  }
  else
  {
    v21 = 0;
    v12 = (*(__int64 (__fastcall **)(char *, struct InputInfo *))(*((_QWORD *)this + 3) + 272LL))((char *)this + 24, a2);
    if ( v12 >= 0 )
      goto LABEL_17;
    v14 = 262LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)v14,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
    (const char *)(unsigned int)v12);
LABEL_17:
  v15 = *((_QWORD *)a2 + 2);
  if ( !*((_QWORD *)this + 52) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x48,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcperfcounter.cpp",
      v13);
    JUMPOUT(0x180060324LL);
  }
  if ( !*((_QWORD *)this + 53) )
    *((_QWORD *)this + 53) = v15;
  ++*((_QWORD *)this + 54);
  if ( v15 - *((_QWORD *)this + 53) > *((_QWORD *)this + 52) )
    MPCPerfCounter::ReportPerf((MPCInputProviderBase *)((char *)this + 392), v15);
  v16 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v16 )
  {
    if ( *v16 )
    {
      ISMTracing::Instance();
      v17 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v17 > 5u
        && (*(_BYTE *)(v17 + 16) & 1) != 0
        && (*(_QWORD *)(v17 + 24) & 1LL) == *(_QWORD *)(v17 + 24) )
      {
        if ( (*(_DWORD *)a2 & 0x200) != 0 )
        {
          v18 = *((_DWORD *)a2 + 174);
          if ( v18 > 0 )
          {
            if ( v18 <= 6 )
            {
              ISMTracing::LogMPCHandInputReport(a2, &v21);
            }
            else if ( v18 == 7 )
            {
              ISMTracing::LogMPCVoiceInputReport(a2, &v21);
            }
          }
        }
        else if ( (*(_DWORD *)a2 & 0x400) != 0 )
        {
          if ( (unsigned int)(*((_DWORD *)a2 + 175) - 1) <= 5 )
            ISMTracing::LogMPCClickerInputReport(a2, &v21);
        }
        else if ( (*(_DWORD *)a2 & 0x2000) != 0 && (unsigned int)(*((_DWORD *)a2 + 175) - 1) <= 5 )
        {
          ISMTracing::LogMPCSpatialControllerInputReport(a2, &v21);
        }
      }
    }
  }
  return 0LL;
}
