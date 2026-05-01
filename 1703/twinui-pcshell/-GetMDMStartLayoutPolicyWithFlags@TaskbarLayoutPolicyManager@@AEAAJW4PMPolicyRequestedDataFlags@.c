/*
 * XREFs of ?GetMDMStartLayoutPolicyWithFlags@TaskbarLayoutPolicyManager@@AEAAJW4PMPolicyRequestedDataFlags@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x1800887C0
 * Callers:
 *     ?GetMDMStartLayoutPolicy@TaskbarLayoutPolicyManager@@AEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x18008872C (-GetMDMStartLayoutPolicy@TaskbarLayoutPolicyManager@@AEAAJAEAV-$NativeString@V-$CoTaskMemPolicy@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180038114 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18008A710 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall TaskbarLayoutPolicyManager::GetMDMStartLayoutPolicyWithFlags(__int64 a1, int a2, __int64 a3)
{
  int Policy; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int PolicyData; // eax
  const char *v9; // [rsp+28h] [rbp-28h]
  __int64 *v10; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v11; // [rsp+38h] [rbp-18h] BYREF
  char v12; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  __int64 v14; // [rsp+60h] [rbp+10h] BYREF
  int v15; // [rsp+78h] [rbp+28h] BYREF
  int v16; // [rsp+7Ch] [rbp+2Ch]

  v14 = 0LL;
  v16 = a2;
  v15 = 1;
  Policy = PolicyManager_GetPolicy(L"Start", L"StartLayout", &v15, &v14);
  v5 = Policy;
  if ( Policy >= 0 )
  {
    v10 = &v14;
    wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)&v11, &v10);
    if ( *(_DWORD *)(v14 + 8) == 2 )
    {
      v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
             a3,
             *(const unsigned __int16 **)(v14 + 16),
             0xFFFFFFFFFFFFFFFFuLL);
      v5 = v6;
      if ( v6 >= 0 )
        v5 = 0;
      else
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x273,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v6);
    }
    else
    {
      v5 = -2147467259;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x272,
        (unsigned int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)0x80004005LL,
        (__int64)"RetrievedInfo type is not of String type.",
        v9);
    }
    if ( v12 )
    {
      if ( *v11 )
      {
        PolicyData = PolicyManager_FreeGetPolicyData();
        if ( PolicyData < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x26E,
            (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
            (const char *)(unsigned int)PolicyData);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x269,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)Policy);
  }
  return v5;
}
