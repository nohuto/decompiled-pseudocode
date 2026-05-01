/*
 * XREFs of ?get_SuggestionsShowing@CortanaSharedExperienceManager@@UEAAJPEAE@Z @ 0x1800A1590
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x1800A2D24 (-TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceVi.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::get_SuggestionsShowing(
        CortanaSharedExperienceManager *this,
        unsigned __int8 *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0;
  CortanaSharedExperienceManager::TryGetDesktopViewIfActive(this, &v6);
  if ( !v6 )
    return 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v6 + 40LL))(v6, a2);
  v4 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v3;
}
