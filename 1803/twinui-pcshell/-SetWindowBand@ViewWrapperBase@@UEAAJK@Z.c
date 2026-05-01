/*
 * XREFs of ?SetWindowBand@ViewWrapperBase@@UEAAJK@Z @ 0x18004FA40
 * Callers:
 *     ?SetBandId@CTaskWindow@@UEAAJW4ZBID@@@Z @ 0x180047DF0 (-SetBandId@CTaskWindow@@UEAAJW4ZBID@@@Z.c)
 *     ?SetWindowBand@DesktopSingleViewShellExperiencePersonality@@UEAAJW4ZBID@@@Z @ 0x18006DFB0 (-SetWindowBand@DesktopSingleViewShellExperiencePersonality@@UEAAJW4ZBID@@@Z.c)
 * Callees:
 *     ?SetWindowBand@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@0K@Z @ 0x180009150 (-SetWindowBand@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@0K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::SetWindowBand(ViewWrapperBase *this, unsigned int a2)
{
  RTL_SRWLOCK *v4; // rbx
  HWND v5; // rdx
  CPrivilegedPresentationOperations *v6; // rcx
  __int64 (__fastcall *v7)(CPrivilegedPresentationOperations *, HWND, HWND, unsigned int); // rax

  v4 = (RTL_SRWLOCK *)(*((_QWORD *)this + 21) + 296LL);
  AcquireSRWLockExclusive(v4);
  *((_DWORD *)this + 54) = a2;
  v5 = (HWND)*((_QWORD *)this + 33);
  if ( v5 && a2 )
  {
    v6 = *(CPrivilegedPresentationOperations **)(*((_QWORD *)this + 21) + 464LL);
    v7 = *(__int64 (__fastcall **)(CPrivilegedPresentationOperations *, HWND, HWND, unsigned int))(*(_QWORD *)v6 + 32LL);
    if ( v7 == CPrivilegedPresentationOperations::SetWindowBand )
      CPrivilegedPresentationOperations::SetWindowBand(v6, v5, 0LL, a2);
    else
      v7(v6, v5, 0LL, a2);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
