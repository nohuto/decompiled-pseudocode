/*
 * XREFs of ?Advise@FocusHoldingTank@@QEAAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x1801906D4
 * Callers:
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x180187A70 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180189200 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FocusHoldingTank::Advise(
        FocusHoldingTank *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2)
{
  __int64 v4; // rcx

  if ( *((struct Windows::Internal::Shell::Experience::ICortanaExperienceManager **)this + 2) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
