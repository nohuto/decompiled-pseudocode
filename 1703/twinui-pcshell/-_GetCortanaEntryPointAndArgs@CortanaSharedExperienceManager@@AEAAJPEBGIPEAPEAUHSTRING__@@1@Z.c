/*
 * XREFs of ?_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x1800BC460
 * Callers:
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800BA790 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009BA50 (--1-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009CBDC (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009D264 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??$Start@$$V@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@SA?AV01@XZ @ 0x18009EFE0 (--$Start@$$V@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@SA-.c)
 *     ?_GetLaunchArgsSubstring@CortanaSharedExperienceManager@@CAJPEBG0IPEAPEBGPEA_K@Z @ 0x1800BC67C (-_GetLaunchArgsSubstring@CortanaSharedExperienceManager@@CAJPEBG0IPEAPEBGPEA_K@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_GetCortanaEntryPointAndArgs(
        CortanaSharedExperienceManager *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        HSTRING *a4,
        HSTRING *string)
{
  const WCHAR *v8; // rax
  UINT32 v9; // ecx
  const WCHAR *v10; // rax
  UINT32 v11; // ecx
  HRESULT v12; // eax
  const WCHAR *v13; // rax
  HRESULT v14; // eax
  unsigned int v15; // ebx
  PCNZWCH sourceString; // [rsp+30h] [rbp-D0h] BYREF
  UINT32 length[2]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v19[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::Start<>((CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs *)v19);
  v8 = L"Unknown";
  v9 = 7;
  *(_QWORD *)length = 7LL;
  if ( a2 )
  {
    v10 = wcsstr(a2, L"Positioner=");
    sourceString = v10;
    if ( v10 )
    {
      CortanaSharedExperienceManager::_GetLaunchArgsSubstring(
        a2,
        L"Positioner=",
        a3,
        &sourceString,
        (unsigned __int64 *)length);
      v10 = sourceString;
      v11 = length[0];
    }
    else
    {
      v11 = 0;
      *(_QWORD *)length = 0LL;
    }
    v12 = WindowsCreateString(v10, v11, string);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x33F,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    v13 = wcsstr(a2, L"StartMode=");
    sourceString = v13;
    if ( v13 )
    {
      CortanaSharedExperienceManager::_GetLaunchArgsSubstring(
        a2,
        L"StartMode=",
        a3,
        &sourceString,
        (unsigned __int64 *)length);
      v13 = sourceString;
    }
    else
    {
      *(_QWORD *)length = 0LL;
    }
    if ( v13 && wcsstr(v13, L"AppTransition") )
    {
      v8 = L"StartButton";
      v9 = 11;
    }
    else
    {
      v8 = wcsstr(a2, L"QuerySource=");
      sourceString = v8;
      if ( v8 )
      {
        CortanaSharedExperienceManager::_GetLaunchArgsSubstring(
          a2,
          L"QuerySource=",
          a3,
          &sourceString,
          (unsigned __int64 *)length);
        v8 = sourceString;
        v9 = length[0];
      }
      else
      {
        v9 = 0;
      }
      if ( !v8 )
      {
        v8 = L"Unknown";
        v9 = 7;
      }
    }
  }
  v14 = WindowsCreateString(v8, v9, a4);
  v15 = v14;
  if ( v14 >= 0 )
  {
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v19);
    v15 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x355,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
  }
  v19[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)v19);
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v19);
  return v15;
}
