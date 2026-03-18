/*
 * XREFs of SePrivilegedServiceAuditAlarm @ 0x14046C374
 * Callers:
 *     PspSetQuotaLimits @ 0x140449BF0 (PspSetQuotaLimits.c)
 *     SeCheckAuditPrivilege @ 0x14046BEA0 (SeCheckAuditPrivilege.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     ObpAdjustCreatorAccessState @ 0x140484A78 (ObpAdjustCreatorAccessState.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     RtlpNewSecurityObject @ 0x1404BCE00 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14046BB90 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepFilterPrivilegeAudits @ 0x14046C45C (SepFilterPrivilegeAudits.c)
 */

void __fastcall SePrivilegedServiceAuditAlarm(unsigned __int16 *a1, __int64 *a2, int *a3, char a4)
{
  __int64 v4; // rdi
  __int64 v9; // rax
  void *v10; // rsi
  PSE_EXPORTS v11; // rbp

  v4 = *a2;
  v9 = *a2;
  if ( !*a2 )
    v9 = a2[2];
  v10 = **(void ***)(v9 + 152);
  if ( !RtlEqualSid(SeLocalSystemSid, v10) )
  {
    if ( (v11 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v10))
      && !RtlEqualSid(v11->SeLocalServiceSid, v10)
      || (unsigned __int8)SepFilterPrivilegeAudits(1LL, a3) )
    {
      SepAdtPrivilegedServiceAuditAlarm((int)a2, &SeSubsystemName, a1, v4, a2[2], a3, a4);
    }
  }
}
