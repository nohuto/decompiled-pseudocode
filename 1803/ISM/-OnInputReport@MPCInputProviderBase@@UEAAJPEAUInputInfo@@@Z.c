/*
 * XREFs of ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x180049C00
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?LogMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18004A594 (-LogMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18004B0E0 (-LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18004B5DC (-LogMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18004B7BC (-LogMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?ReportPerf@MPCPerfCounter@@AEAAX_K@Z @ 0x180057E70 (-ReportPerf@MPCPerfCounter@@AEAAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCInputProviderBase::OnInputReport(MPCInputProviderBase *this, struct InputInfo *a2)
{
  char *v4; // rdi
  struct MPCHolographicInputManager *Instance; // rbp
  const char *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rdx
  _OWORD *v9; // rcx
  struct InputInfo *v10; // rax
  __int128 v11; // xmm1
  bool v12; // al
  char *v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  const char *v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  _DWORD *v20; // rcx
  __int64 v21; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v24; // [rsp+38h] [rbp+10h] BYREF

  if ( !*((_QWORD *)MPCHolographicInputManager::GetInstance() + 250) )
  {
    v4 = (char *)this + 24;
    if ( (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 3) + 112LL))((char *)this + 24) == 1
      && *((_DWORD *)a2 + 130) == 8 )
    {
      Instance = MPCHolographicInputManager::GetInstance();
      if ( *((_QWORD *)Instance + 250) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x6A,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\inc\\MPCHolographicInputManager.h",
          v6);
        __debugbreak();
      }
      if ( this != (MPCInputProviderBase *)-24LL )
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 8LL))((char *)this + 24);
        v7 = *((_QWORD *)Instance + 250);
        *((_QWORD *)Instance + 250) = v4;
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
  }
  v8 = 13LL;
  v9 = (_OWORD *)((char *)this + 464);
  v10 = a2;
  do
  {
    *v9 = *(_OWORD *)v10;
    v9[1] = *((_OWORD *)v10 + 1);
    v9[2] = *((_OWORD *)v10 + 2);
    v9[3] = *((_OWORD *)v10 + 3);
    v9[4] = *((_OWORD *)v10 + 4);
    v9[5] = *((_OWORD *)v10 + 5);
    v9[6] = *((_OWORD *)v10 + 6);
    v9 += 8;
    v11 = *((_OWORD *)v10 + 7);
    v10 = (struct InputInfo *)((char *)v10 + 128);
    *(v9 - 1) = v11;
    --v8;
  }
  while ( v8 );
  *v9 = *(_OWORD *)v10;
  v9[1] = *((_OWORD *)v10 + 1);
  v9[2] = *((_OWORD *)v10 + 2);
  v9[3] = *((_OWORD *)v10 + 3);
  *((_QWORD *)v9 + 8) = *((_QWORD *)v10 + 8);
  v12 = *((_BYTE *)MPCHolographicInputManager::GetInstance() + 2008)
     && *((_QWORD *)MPCHolographicInputManager::GetInstance() + 250);
  v24 = v12;
  v13 = (char *)this + 24;
  v14 = *((_QWORD *)this + 3);
  if ( v12 )
  {
    v15 = (*(__int64 (__fastcall **)(char *, struct InputInfo *))(v14 + 272))(v13, a2);
    if ( v15 >= 0 )
      goto LABEL_20;
    v17 = 248LL;
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(char *, struct InputInfo *))(v14 + 280))(v13, a2);
    if ( v15 >= 0 )
      goto LABEL_20;
    v17 = 253LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)v17,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
    (const char *)(unsigned int)v15);
LABEL_20:
  v18 = *((_QWORD *)a2 + 2);
  if ( !*((_QWORD *)this + 279) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x48,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcperfcounter.cpp",
      v16);
    JUMPOUT(0x180049E9BLL);
  }
  v19 = *((_QWORD *)this + 280);
  if ( !v19 )
  {
    *((_QWORD *)this + 280) = v18;
    v19 = v18;
  }
  ++*((_QWORD *)this + 281);
  if ( v18 - v19 > *((_QWORD *)this + 279) )
    MPCPerfCounter::ReportPerf((MPCInputProviderBase *)((char *)this + 2208), v18);
  v20 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v20 )
  {
    if ( *v20 )
    {
      ISMTracing::Instance();
      v21 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v21 > 5u
        && (*(_BYTE *)(v21 + 16) & 1) != 0
        && (*(_QWORD *)(v21 + 24) & 1LL) == *(_QWORD *)(v21 + 24) )
      {
        if ( (*(_DWORD *)a2 & 0x200) != 0 )
        {
          if ( *((_DWORD *)a2 + 130) == 7 )
            ISMTracing::LogMPCVoiceInputReport(a2, &v24);
          else
            ISMTracing::LogMPCHandInputReport(a2, &v24);
        }
        else if ( (*(_DWORD *)a2 & 0x400) != 0 )
        {
          ISMTracing::LogMPCClickerInputReport(a2, &v24);
        }
        else if ( (*(_DWORD *)a2 & 0x2000) != 0 )
        {
          ISMTracing::LogMPCSpatialControllerInputReport(a2, &v24);
        }
      }
    }
  }
  return 0LL;
}
