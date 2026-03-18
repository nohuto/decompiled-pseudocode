/*
 * XREFs of SePrivilegedServiceAuditAlarm @ 0x14050FBC8
 * Callers:
 *     PspSetQuotaLimits @ 0x14044B53C (PspSetQuotaLimits.c)
 *     SeCheckAuditPrivilege @ 0x14046C8E4 (SeCheckAuditPrivilege.c)
 *     ObpAdjustCreatorAccessState @ 0x1404F2E14 (ObpAdjustCreatorAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     PsOpenProcess @ 0x14050F290 (PsOpenProcess.c)
 *     RtlpNewSecurityObject @ 0x14051EA30 (RtlpNewSecurityObject.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 * Callees:
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
 *     SepFilterPrivilegeAudits @ 0x140442AD8 (SepFilterPrivilegeAudits.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14046C574 (SepAdtPrivilegedServiceAuditAlarm.c)
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
      || SepFilterPrivilegeAudits(1, (unsigned int *)a3) )
    {
      SepAdtPrivilegedServiceAuditAlarm((int)a2, &SeSubsystemName, a1, v4, a2[2], a3, a4);
    }
  }
}
