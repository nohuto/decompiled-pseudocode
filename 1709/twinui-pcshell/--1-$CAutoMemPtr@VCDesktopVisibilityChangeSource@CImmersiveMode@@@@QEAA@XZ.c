/*
 * XREFs of ??1?$CAutoMemPtr@VCDesktopVisibilityChangeSource@CImmersiveMode@@@@QEAA@XZ @ 0x18003345C
 * Callers:
 *     _CImmersiveMode::_RegisterDesktopVisibilitySource_::_1_::dtor$3 @ 0x1801E7B56 (_CImmersiveMode--_RegisterDesktopVisibilitySource_--_1_--dtor$3.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAutoMemPtr<CImmersiveMode::CDesktopVisibilityChangeSource>::~CAutoMemPtr<CImmersiveMode::CDesktopVisibilityChangeSource>(
        void **a1)
{
  HWND *v1; // rbx
  HWND v2; // rcx

  v1 = (HWND *)*a1;
  *a1 = 0LL;
  if ( v1 )
  {
    DestroyWindow(v1[2]);
    v2 = *v1;
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(HWND))(*(_QWORD *)v2 + 16LL))(v2);
    }
    operator delete(v1);
  }
}
