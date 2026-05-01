/*
 * XREFs of ?RuntimeClassInitialize@PeoplePaneViewManager@@QEAAJXZ @ 0x1801C46EC
 * Callers:
 *     ??$MakeAndInitialize@VPeoplePaneViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801BF3C4 (--$MakeAndInitialize@VPeoplePaneViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010A094 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::RuntimeClassInitialize(PeoplePaneViewManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v4[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+30h] [rbp-28h]
  __int64 v6; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *((_DWORD *)this + 125) = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
  v5 = 0LL;
  v6 = 0LL;
  *(GUID *)v4 = GUID_b424c6f2_89a8_4bf1_8946_41454468d78c;
  v1 = CImmersiveShellComponent::RegisterServiceInformation(
         (PeoplePaneViewManager *)((char *)this + 24),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v4,
         1LL);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
