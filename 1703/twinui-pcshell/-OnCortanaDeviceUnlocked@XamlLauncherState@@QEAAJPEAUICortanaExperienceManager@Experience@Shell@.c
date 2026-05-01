/*
 * XREFs of ?OnCortanaDeviceUnlocked@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1801582E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncherState::OnCortanaDeviceUnlocked(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  if ( *((_DWORD *)this + 14) == 5 )
    (*(void (__fastcall **)(_QWORD, struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *, struct IInspectable *))(**((_QWORD **)this + 15) + 64LL))(
      *((_QWORD *)this + 15),
      a2,
      a3);
  return 0LL;
}
