/*
 * XREFs of SePrivilegedServiceAuditAlarm @ 0x1404D5720
 * Callers:
 *     RtlpNewSecurityObject @ 0x1404C43A0 (RtlpNewSecurityObject.c)
 *     SeSinglePrivilegeCheckEx @ 0x1404D569C (SeSinglePrivilegeCheckEx.c)
 *     SeCheckAuditPrivilege @ 0x1404D7CA8 (SeCheckAuditPrivilege.c)
 *     ObpAdjustCreatorAccessState @ 0x140562B1C (ObpAdjustCreatorAccessState.c)
 *     PspSetQuotaLimits @ 0x14057899C (PspSetQuotaLimits.c)
 *     PsOpenProcess @ 0x14059A0D0 (PsOpenProcess.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 * Callees:
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1404D5808 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepFilterPrivilegeAudits @ 0x14056A3DC (SepFilterPrivilegeAudits.c)
 */

BOOLEAN __fastcall SePrivilegedServiceAuditAlarm(int a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v4; // rdi
  __int64 v9; // rax
  void *v10; // rsi
  BOOLEAN result; // al
  PSE_EXPORTS v12; // rbp

  v4 = *a2;
  v9 = *a2;
  if ( !*a2 )
    v9 = a2[2];
  v10 = **(void ***)(v9 + 152);
  result = RtlEqualSid(SeLocalSystemSid, v10);
  if ( !result )
  {
    v12 = SeExports;
    if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v10) && !RtlEqualSid(v12->SeLocalServiceSid, v10) )
      return SepAdtPrivilegedServiceAuditAlarm((_DWORD)a2, (unsigned int)&SeSubsystemName, a1, v4, a2[2], a3, a4);
    result = SepFilterPrivilegeAudits(1LL, a3);
    if ( result )
      return SepAdtPrivilegedServiceAuditAlarm((_DWORD)a2, (unsigned int)&SeSubsystemName, a1, v4, a2[2], a3, a4);
  }
  return result;
}
