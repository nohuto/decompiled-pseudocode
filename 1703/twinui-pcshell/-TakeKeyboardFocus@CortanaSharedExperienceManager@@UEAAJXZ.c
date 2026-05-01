/*
 * XREFs of ?TakeKeyboardFocus@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1800BAF10
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x1800BC718 (-TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceVi.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::TakeKeyboardFocus(CortanaSharedExperienceManager *this)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  CortanaSharedExperienceManager::TryGetDesktopViewIfActive(this, &v4);
  if ( !v4 )
    return 0LL;
  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 96LL))(v4);
  v2 = v4;
  if ( v4 )
  {
    v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return v1;
}
