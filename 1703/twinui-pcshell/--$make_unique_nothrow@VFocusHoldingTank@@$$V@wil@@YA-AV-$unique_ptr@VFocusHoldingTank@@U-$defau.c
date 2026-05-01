/*
 * XREFs of ??$make_unique_nothrow@VFocusHoldingTank@@$$V@wil@@YA?AV?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@XZ @ 0x180159444
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180154FA0 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     ??0FocusHoldingTank@@QEAA@XZ @ 0x18015C738 (--0FocusHoldingTank@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

FocusHoldingTank **__fastcall wil::make_unique_nothrow<FocusHoldingTank,>(FocusHoldingTank **a1)
{
  void *v2; // rcx
  FocusHoldingTank *v3; // rax

  v2 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = 0LL;
  if ( v2 )
    v3 = FocusHoldingTank::FocusHoldingTank((LONG_PTR)v2);
  *a1 = v3;
  return a1;
}
