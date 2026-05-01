/*
 * XREFs of ?SetShellCloak@ViewWrapperBase@@UEAAJW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x18004F9A0
 * Callers:
 *     ?ShowView@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ @ 0x18006DEC0 (-ShowView@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ.c)
 *     ?HideView@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ @ 0x18006DF00 (-HideView@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ.c)
 * Callees:
 *     ?SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x180009230 (-SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilege.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::SetShellCloak(__int64 a1, unsigned int a2)
{
  RTL_SRWLOCK *v4; // rdi
  __int64 v5; // rcx
  HWND v6; // rdx
  __int64 (__fastcall *v7)(__int64, HWND, int); // rax
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 168) + 296LL);
  AcquireSRWLockShared(v4);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 464LL);
  v6 = *(HWND *)(a1 + 264);
  v7 = *(__int64 (__fastcall **)(__int64, HWND, int))(*(_QWORD *)v5 + 24LL);
  if ( v7 == CPrivilegedPresentationOperations::SetShellCloak )
    v8 = CPrivilegedPresentationOperations::SetShellCloak(v5, v6, a2);
  else
    v8 = v7(v5, v6, a2);
  v9 = v8;
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3CC,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v8,
      -2);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v9;
}
