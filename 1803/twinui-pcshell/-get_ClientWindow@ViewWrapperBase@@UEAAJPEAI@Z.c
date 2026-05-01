/*
 * XREFs of ?get_ClientWindow@ViewWrapperBase@@UEAAJPEAI@Z @ 0x1800534D0
 * Callers:
 *     ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x180003CC8 (-WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHW.c)
 *     ?s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z @ 0x180004038 (-s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x180018630 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?ShowBorder@DesktopSingleViewShellExperiencePersonality@@UEAAJW4Border@CSingleViewShellExperience@@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18006DFF0 (-ShowBorder@DesktopSingleViewShellExperiencePersonality@@UEAAJW4Border@CSingleViewShellExperienc.c)
 *     _lambda_16dbbe28c6f74937ed7301029aac4a5a_::operator() @ 0x18006EEE0 (_lambda_16dbbe28c6f74937ed7301029aac4a5a_--operator().c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800787A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::get_ClientWindow(ViewWrapperBase *this, unsigned int *a2)
{
  RTL_SRWLOCK *v4; // rdi
  char *v5; // rcx
  HWND (__fastcall *v6)(ViewWrapperBase *); // rax
  __int64 v7; // rax
  unsigned int v8; // ebx

  v4 = (RTL_SRWLOCK *)(*((_QWORD *)this + 17) + 296LL);
  AcquireSRWLockShared(v4);
  v5 = (char *)this - 24;
  v6 = *(HWND (__fastcall **)(ViewWrapperBase *))(*((_QWORD *)this - 3) + 648LL);
  if ( v6 == ViewWrapperBase::GetWindow )
    v7 = *((_QWORD *)v5 + 32);
  else
    LODWORD(v7) = (__int64)v6((ViewWrapperBase *)v5);
  *a2 = v7;
  v8 = 0;
  if ( !(_DWORD)v7 )
    v8 = -2147023728;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v8;
}
