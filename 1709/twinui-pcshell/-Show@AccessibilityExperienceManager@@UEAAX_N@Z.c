/*
 * XREFs of ?Show@AccessibilityExperienceManager@@UEAAX_N@Z @ 0x1801B1220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AccessibilityExperienceManager::Show(AccessibilityExperienceManager *this, unsigned __int8 a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 30);
  if ( v2 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 40LL))(v2, a2 ^ 1u);
}
