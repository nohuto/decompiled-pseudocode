/*
 * XREFs of VfZwCloseObjectAuditAlarm @ 0x1407840C0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140787D68 (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwCloseObjectAuditAlarm(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckUnicodeString(a1, retaddr);
  LOBYTE(v6) = a3;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))pXdvZwCloseObjectAuditAlarm)(a1, a2, v6);
}
