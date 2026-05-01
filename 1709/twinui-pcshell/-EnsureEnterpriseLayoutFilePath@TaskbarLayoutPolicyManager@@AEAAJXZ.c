/*
 * XREFs of ?EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x18008A7FC
 * Callers:
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180089198 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180089B5C (-GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180034D60 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800398C4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall TaskbarLayoutPolicyManager::EnsureEnterpriseLayoutFilePath(TaskbarLayoutPolicyManager *this)
{
  __int64 v2; // rbx
  LSTATUS ValueW; // eax
  int v4; // ebx
  __int64 v5; // rdx
  DWORD pcbData[4]; // [rsp+40h] [rbp-238h] BYREF
  _WORD pvData[264]; // [rsp+50h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  v2 = -2147483647LL;
  if ( (int)SHRegGetBOOL(
              HKEY_CURRENT_USER,
              L"SOFTWARE\\Policies\\Microsoft\\Windows\\Explorer",
              L"LockedStartLayout",
              (int *)pcbData) < 0
    || !pcbData[0] )
  {
    v2 = -2147483646LL;
    if ( (int)SHRegGetBOOL(
                HKEY_LOCAL_MACHINE,
                L"SOFTWARE\\Policies\\Microsoft\\Windows\\Explorer",
                L"LockedStartLayout",
                (int *)pcbData) < 0
      || !pcbData[0] )
    {
      return 2147943568LL;
    }
  }
  pcbData[0] = 520;
  ValueW = RegGetValueW(
             (HKEY)v2,
             L"SOFTWARE\\Policies\\Microsoft\\Windows\\Explorer",
             L"StartLayoutFile",
             2u,
             0LL,
             pvData,
             pcbData);
  if ( ValueW )
    pvData[0] = 0;
  v4 = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW <= 0 )
    v4 = ValueW;
  if ( v4 < 0 )
  {
    v5 = 534LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (__int64)this + 32,
         (__int64)pvData,
         0xFFFFFFFFFFFFFFFFuLL);
  if ( v4 < 0 )
  {
    v5 = 535LL;
    goto LABEL_11;
  }
  return 0LL;
}
