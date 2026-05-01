/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fa84ff1aa1e8fc1ca949132eba76a852___::Run @ 0x1801B2C40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180048C98 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fa84ff1aa1e8fc1ca949132eba76a852___::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  __int64 v3; // rdx
  void *v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1 + 16;
  v6 = 0LL;
  v2 = AgileGitPtr::CopyLocal((AgileGitPtr *)(a1 + 16), &GUID_5e575f11_41b8_4e5f_a100_ceaab370f70c, &v6);
  if ( v2 >= 0 )
  {
    LOBYTE(v3) = *(_DWORD *)(v1 + 8) == 0;
    (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v6 + 64LL))(v6, v3);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4F,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  }
  v4 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
