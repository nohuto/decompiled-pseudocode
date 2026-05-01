/*
 * XREFs of ?SetViewPresentationMode@CActionCenterExperienceManager@@AEAAJW4PresentationMode@UI@Holographic@Internal@Windows@@@Z @ 0x18009A008
 * Callers:
 *     ?ShowInHolographic@CActionCenterExperienceManager@@AEAAJXZ @ 0x18009A0C4 (-ShowInHolographic@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?HideInHolographic@CActionCenterExperienceManager@@AEAAJXZ @ 0x18009A328 (-HideInHolographic@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActionCenterExperienceManager::SetViewPresentationMode(__int64 a1, int a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v9[4]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v10; // [rsp+30h] [rbp-58h]
  int v11; // [rsp+40h] [rbp-48h]
  int v12[4]; // [rsp+50h] [rbp-38h] BYREF
  __int128 v13; // [rsp+60h] [rbp-28h]
  int v14; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 144) + 432LL))(*(_QWORD *)(a1 + 144), v12);
  v4 = *(__int64 **)(a1 + 144);
  v14 = a2;
  v5 = *v4;
  *(_OWORD *)v9 = *(_OWORD *)v12;
  v10 = v13;
  v11 = a2;
  v6 = (*(__int64 (__fastcall **)(__int64 *, int *))(v5 + 440))(v4, v9);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x787,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
