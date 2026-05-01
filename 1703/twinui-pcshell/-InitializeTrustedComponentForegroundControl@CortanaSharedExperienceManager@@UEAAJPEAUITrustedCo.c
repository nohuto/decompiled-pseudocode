/*
 * XREFs of ?InitializeTrustedComponentForegroundControl@CortanaSharedExperienceManager@@UEAAJPEAUITrustedComponentForegroundControl@@@Z @ 0x1800BBB00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::InitializeTrustedComponentForegroundControl(
        CortanaSharedExperienceManager *this,
        struct ITrustedComponentForegroundControl *a2)
{
  __int64 v4; // rcx

  if ( *((struct ITrustedComponentForegroundControl **)this + 46) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct ITrustedComponentForegroundControl *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 46);
    *((_QWORD *)this + 46) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
