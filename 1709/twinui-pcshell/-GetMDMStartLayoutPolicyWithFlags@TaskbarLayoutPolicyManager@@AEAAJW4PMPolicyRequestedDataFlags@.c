/*
 * XREFs of ?GetMDMStartLayoutPolicyWithFlags@TaskbarLayoutPolicyManager@@AEAAJW4PMPolicyRequestedDataFlags@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x18008ACEC
 * Callers:
 *     ?GetMDMStartLayoutPolicy@TaskbarLayoutPolicyManager@@AEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x18008AC58 (-GetMDMStartLayoutPolicy@TaskbarLayoutPolicyManager@@AEAAJAEAV-$NativeString@V-$CoTaskMemPolicy@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800398C4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18008CB38 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall TaskbarLayoutPolicyManager::GetMDMStartLayoutPolicyWithFlags(__int64 a1, int a2, __int64 a3)
{
  int Policy; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int PolicyData; // eax
  const char *v9; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+58h] [rbp+20h] BYREF
  int v13; // [rsp+5Ch] [rbp+24h]

  v11 = 0LL;
  v13 = a2;
  v12 = 1;
  Policy = PolicyManager_GetPolicy(L"Start", L"StartLayout", &v12, &v11);
  v5 = Policy;
  if ( Policy >= 0 )
  {
    if ( *(_DWORD *)(v11 + 8) == 2 )
    {
      v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
             a3,
             *(_QWORD *)(v11 + 16),
             0xFFFFFFFFFFFFFFFFuLL);
      v5 = v6;
      if ( v6 >= 0 )
        v5 = 0;
      else
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x290,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v6);
    }
    else
    {
      v5 = -2147467259;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x28F,
        (unsigned int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)0x80004005LL,
        (__int64)"RetrievedInfo type is not of String type.",
        v9);
    }
    if ( v11 )
    {
      PolicyData = PolicyManager_FreeGetPolicyData();
      if ( PolicyData < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x28B,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)PolicyData);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x286,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)Policy);
  }
  return v5;
}
