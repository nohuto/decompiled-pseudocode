/*
 * XREFs of ?Close@CPeopleTestExperienceManager@@UEAAJXZ @ 0x1800B2C80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPeopleTestExperienceManager::Close(CPeopleTestExperienceManager *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 34);
  if ( v2 )
  {
    *((_QWORD *)this + 34) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return 0LL;
}
