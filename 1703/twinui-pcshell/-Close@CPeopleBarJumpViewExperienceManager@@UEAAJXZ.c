/*
 * XREFs of ?Close@CPeopleBarJumpViewExperienceManager@@UEAAJXZ @ 0x1800A4940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::Close(CPeopleBarJumpViewExperienceManager *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 29);
  if ( v2 )
  {
    *((_QWORD *)this + 29) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return 0LL;
}
