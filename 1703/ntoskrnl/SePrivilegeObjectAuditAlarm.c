/*
 * XREFs of SePrivilegeObjectAuditAlarm @ 0x14046C630
 * Callers:
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 *     PspCreateObjectHandle @ 0x140541060 (PspCreateObjectHandle.c)
 *     SeCheckPrivilegedObject @ 0x14058547C (SeCheckPrivilegedObject.c)
 * Callees:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14046C68C (SepAdtPrivilegeObjectAuditAlarm.c)
 */

__int64 __fastcall SePrivilegeObjectAuditAlarm(int a1, __int64 *a2, int a3, __int64 a4, char a5, char a6)
{
  __int64 result; // rax

  if ( a6 )
    return SepAdtPrivilegeObjectAuditAlarm((unsigned int)&SeSubsystemName, 0, 0, a1, *a2, a2[2], a2[3], a3, a4, a5);
  return result;
}
