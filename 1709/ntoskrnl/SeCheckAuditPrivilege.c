/*
 * XREFs of SeCheckAuditPrivilege @ 0x14046BEA0
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x14046D188 (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x14046D7AC (NtOpenObjectAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x14057EE98 (NtCloseObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1405DBA30 (NtPrivilegeObjectAuditAlarm.c)
 *     NtDeleteObjectAuditAlarm @ 0x14072CA48 (NtDeleteObjectAuditAlarm.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x140087BC0 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14046C374 (SePrivilegedServiceAuditAlarm.c)
 */

char __fastcall SeCheckAuditPrivilege(__int64 a1, char a2)
{
  __int64 v4; // rcx
  char v5; // al
  __int64 v6; // r9
  char v7; // di
  _DWORD v9[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  int v11; // [rsp+40h] [rbp-18h]

  v9[0] = 1;
  v4 = *(_QWORD *)(a1 + 16);
  v9[1] = 1;
  v10 = SeAuditPrivilege;
  v11 = 0;
  v5 = SepPrivilegeCheck(v4, (__int64)&v10, 1u, 1, a2);
  v7 = v5;
  if ( a2 )
  {
    LOBYTE(v6) = v5;
    SePrivilegedServiceAuditAlarm(0LL, a1, v9, v6);
  }
  return v7;
}
