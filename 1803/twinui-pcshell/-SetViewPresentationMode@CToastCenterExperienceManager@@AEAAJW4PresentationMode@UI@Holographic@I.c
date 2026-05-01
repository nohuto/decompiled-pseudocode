/*
 * XREFs of ?SetViewPresentationMode@CToastCenterExperienceManager@@AEAAJW4PresentationMode@UI@Holographic@Internal@Windows@@@Z @ 0x180166688
 * Callers:
 *     ?MoveToastCenterViewToDesktop@CToastCenterExperienceManager@@AEAAJXZ @ 0x180163604 (-MoveToastCenterViewToDesktop@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?MoveToastCenterViewToHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180163688 (-MoveToastCenterViewToHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CToastCenterExperienceManager::SetViewPresentationMode(__int64 a1, int a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64 *, _OWORD *); // rax
  int v7; // eax
  unsigned int v8; // ebx
  _OWORD v10[2]; // [rsp+20h] [rbp-19h] BYREF
  __int64 v11; // [rsp+40h] [rbp+7h]
  int v12; // [rsp+48h] [rbp+Fh]
  _OWORD v13[2]; // [rsp+50h] [rbp+17h] BYREF
  __int64 v14; // [rsp+70h] [rbp+37h]
  int v15; // [rsp+78h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  (*(void (__fastcall **)(_QWORD, _OWORD *))(**(_QWORD **)(a1 + 120) + 432LL))(*(_QWORD *)(a1 + 120), v13);
  v4 = *(__int64 **)(a1 + 120);
  LODWORD(v14) = a2;
  v12 = v15;
  v5 = *v4;
  v10[0] = v13[0];
  v10[1] = v13[1];
  v6 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v5 + 440);
  v11 = v14;
  v7 = v6(v4, v10);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x52F,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
