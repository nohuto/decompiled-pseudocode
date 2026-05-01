/*
 * XREFs of ?GetMDMPolicyLayoutTimestamp@TaskbarLayoutPolicyManager@@AEAAJPEAK@Z @ 0x180147094
 * Callers:
 *     _lambda_d6345a2b433034ec221583a2ac3cef15_::operator() @ 0x180145B80 (_lambda_d6345a2b433034ec221583a2ac3cef15_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180085EE0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 */

__int64 __fastcall TaskbarLayoutPolicyManager::GetMDMPolicyLayoutTimestamp(
        TaskbarLayoutPolicyManager *this,
        unsigned int *a2)
{
  LSTATUS DWORD; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0;
  DWORD = SHRegGetDWORD(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
            L"MDMLayoutXMLLastModified",
            a2);
  v3 = DWORD;
  if ( DWORD == -2147024894 )
    return 0LL;
  if ( DWORD < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x262,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)DWORD);
  return v3;
}
