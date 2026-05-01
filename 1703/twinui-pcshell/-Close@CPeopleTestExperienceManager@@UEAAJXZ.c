/*
 * XREFs of ?Close@CPeopleTestExperienceManager@@UEAAJXZ @ 0x1800A64B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPeopleTestExperienceManager::Close(CPeopleTestExperienceManager *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 32);
  if ( v2 )
  {
    *((_QWORD *)this + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return 0LL;
}
