/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_33e66b590dea71948f9c2c80860a78e8___::Run @ 0x1800CDF10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180048C98 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_33e66b590dea71948f9c2c80860a78e8___::Run(
        __int64 a1)
{
  int v1; // eax
  void *v2; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v1 = AgileGitPtr::CopyLocal((AgileGitPtr *)(a1 + 16), &GUID_17c4ec91_62df_486d_aa0d_6a11c725e414, &v4);
  if ( v1 < 0 || (v1 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v4 + 56LL))(v4), v1 < 0) )
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xA3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
  v2 = v4;
  if ( v4 )
  {
    v4 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
