/*
 * XREFs of ?_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x1800A29E4
 * Callers:
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800A0B90 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@QEAAXXZ @ 0x18009F738 (-StartActivity@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@Q.c)
 *     ??1?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009FE0C (--1-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?_GetLaunchArgsSubstring@CortanaSharedExperienceManager@@CAJPEBG0IPEAPEBGPEA_K@Z @ 0x1800A2C88 (-_GetLaunchArgsSubstring@CortanaSharedExperienceManager@@CAJPEBG0IPEAPEBGPEA_K@Z.c)
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A61EC (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A6874 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_GetCortanaEntryPointAndArgs(
        CortanaSharedExperienceManager *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        HSTRING *a4,
        HSTRING *string)
{
  UINT32 v8; // ecx
  const WCHAR *v9; // rax
  const WCHAR *v10; // rax
  UINT32 v11; // ecx
  HRESULT v12; // eax
  const WCHAR *v13; // rax
  HRESULT v14; // eax
  unsigned int v15; // ebx
  PCNZWCH sourceString; // [rsp+30h] [rbp-D0h] BYREF
  UINT32 length[2]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v19[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+60h] [rbp-A0h]
  int *v21; // [rsp+68h] [rbp-98h]
  int *v22; // [rsp+70h] [rbp-90h]
  int v23; // [rsp+78h] [rbp-88h] BYREF
  char v24; // [rsp+7Ch] [rbp-84h]
  int v25; // [rsp+A0h] [rbp-60h] BYREF
  const char *v26; // [rsp+A8h] [rbp-58h]
  __int64 v27; // [rsp+B0h] [rbp-50h]
  char v28; // [rsp+B8h] [rbp-48h]
  __int64 v29; // [rsp+C0h] [rbp-40h]
  _BYTE v30[144]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v31; // [rsp+158h] [rbp+58h]
  __int64 v32; // [rsp+160h] [rbp+60h]
  __int64 v33; // [rsp+168h] [rbp+68h]
  __int64 v34; // [rsp+170h] [rbp+70h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v19[2] = v19;
  v19[1] = 0LL;
  v21 = &v25;
  v19[3] = 0LL;
  v22 = &v23;
  v20 = 0;
  v26 = "CortanaExperienceManager_GetCortanaEntryPointAndArgs";
  v23 = 0;
  v24 = 0;
  v28 = 0;
  v25 = 0;
  v27 = 0LL;
  v29 = 1LL;
  v31 = 0LL;
  v32 = 0LL;
  memset(v30, 0, sizeof(v30));
  v33 = 0LL;
  v19[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::`vftable';
  v34 = 0LL;
  CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs *)v19);
  v8 = 7;
  *(_QWORD *)length = 7LL;
  v9 = L"Unknown";
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
        (void *)0x34E,
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
      v9 = L"StartButton";
      v8 = 11;
    }
    else
    {
      v9 = wcsstr(a2, L"QuerySource=");
      sourceString = v9;
      if ( v9 )
      {
        CortanaSharedExperienceManager::_GetLaunchArgsSubstring(
          a2,
          L"QuerySource=",
          a3,
          &sourceString,
          (unsigned __int64 *)length);
        v9 = sourceString;
        v8 = length[0];
      }
      else
      {
        v8 = 0;
      }
      if ( !v9 )
      {
        v9 = L"Unknown";
        v8 = 7;
      }
    }
  }
  v14 = WindowsCreateString(v9, v8, a4);
  v15 = v14;
  if ( v14 >= 0 )
  {
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop(v19);
    v15 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x364,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
  }
  v19[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy(v19);
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v19);
  return v15;
}
