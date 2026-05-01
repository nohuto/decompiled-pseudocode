/*
 * XREFs of ?OnIdleStateChanged@CPeopleBarFlyoutExperienceManager@@UEAAJH@Z @ 0x1800AE680
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1801DBD20 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 */

__int64 __fastcall CPeopleBarFlyoutExperienceManager::OnIdleStateChanged(struct IUnknown *this, int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
    return 0LL;
  v2 = ExperienceManagerUtils::PostToUIThread(0LL, this - 5, (void *)0x402, 0, v5);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x191,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
