/*
 * XREFs of SePrivilegeObjectAuditAlarm @ 0x14046D750
 * Callers:
 *     SeCheckPrivilegedObject @ 0x14046EE78 (SeCheckPrivilegedObject.c)
 *     PspCreateObjectHandle @ 0x1404D5D14 (PspCreateObjectHandle.c)
 * Callees:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14046BC3C (SepAdtPrivilegeObjectAuditAlarm.c)
 */

char __fastcall SePrivilegeObjectAuditAlarm(__int64 a1, __int64 *a2, unsigned int a3, int *a4, char a5, char a6)
{
  char result; // al

  if ( a6 )
    return SepAdtPrivilegeObjectAuditAlarm(&SeSubsystemName, 0LL, 0LL, a1, *a2, a2[2], a2[3], a3, a4, a5);
  return result;
}
