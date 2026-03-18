/*
 * XREFs of SeSinglePrivilegeCheckEx @ 0x1404D569C
 * Callers:
 *     SepCheckForCriticalAceRemoval @ 0x140063350 (SepCheckForCriticalAceRemoval.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     SepValidLabelSubjectContext @ 0x1404EBF4C (SepValidLabelSubjectContext.c)
 *     SepValidOwnerSubjectContext @ 0x140569EF0 (SepValidOwnerSubjectContext.c)
 *     CmpSetAccessStateForBackupRestore @ 0x1405F2528 (CmpSetAccessStateForBackupRestore.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1404D5720 (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeCheck @ 0x1405B0D30 (SePrivilegeCheck.c)
 */

BOOLEAN __fastcall SeSinglePrivilegeCheckEx(LUID a1, struct _SECURITY_SUBJECT_CONTEXT *a2, KPROCESSOR_MODE a3)
{
  BOOLEAN v5; // al
  __int64 v6; // r9
  BOOLEAN v7; // di
  struct _PRIVILEGE_SET v9; // [rsp+20h] [rbp-28h] BYREF

  v9.PrivilegeCount = 1;
  v9.Control = 1;
  v9.Privilege[0].Luid = a1;
  v9.Privilege[0].Attributes = 0;
  v5 = SePrivilegeCheck(&v9, a2, a3);
  v7 = v5;
  if ( a3 )
  {
    LOBYTE(v6) = v5;
    SePrivilegedServiceAuditAlarm(0LL, a2, &v9, v6);
  }
  return v7;
}
