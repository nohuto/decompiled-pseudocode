/*
 * XREFs of SeCheckAuditPrivilege @ 0x1404D7CA8
 * Callers:
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     NtCloseObjectAuditAlarm @ 0x14056C944 (NtCloseObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x14057A494 (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1405DFF70 (NtOpenObjectAuditAlarm.c)
 *     NtDeleteObjectAuditAlarm @ 0x1405F4050 (NtDeleteObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14061118C (NtPrivilegeObjectAuditAlarm.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x140105560 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1404D5720 (SePrivilegedServiceAuditAlarm.c)
 */

char __fastcall SeCheckAuditPrivilege(__int64 *a1, char a2)
{
  __int64 v4; // rcx
  char v5; // al
  char v6; // di
  _DWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h] BYREF
  int v10; // [rsp+40h] [rbp-18h]

  v8[0] = 1;
  v4 = a1[2];
  v8[1] = 1;
  v9 = SeAuditPrivilege;
  v10 = 0;
  v5 = SepPrivilegeCheck(v4, (__int64)&v9, 1u, 1, a2);
  v6 = v5;
  if ( a2 )
    SePrivilegedServiceAuditAlarm(0, a1, (__int64)v8, v5);
  return v6;
}
