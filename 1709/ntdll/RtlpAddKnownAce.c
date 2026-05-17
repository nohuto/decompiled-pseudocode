/*
 * XREFs of RtlpAddKnownAce @ 0x18002D64C
 * Callers:
 *     RtlAddAccessAllowedAce @ 0x18002C0F0 (RtlAddAccessAllowedAce.c)
 *     RtlCheckTokenMembershipEx @ 0x18002C230 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x180053B40 (RtlCheckTokenCapability.c)
 *     RtlAddAccessAllowedAceEx @ 0x18007FC80 (RtlAddAccessAllowedAceEx.c)
 *     RtlDefaultNpAcl @ 0x1800881D0 (RtlDefaultNpAcl.c)
 *     RtlAddAccessDeniedAceEx @ 0x1800887B0 (RtlAddAccessDeniedAceEx.c)
 *     RtlAddAccessDeniedAce @ 0x180088A70 (RtlAddAccessDeniedAce.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18008AB7C (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlAddAuditAccessAceEx @ 0x18008AFA0 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessAce @ 0x18008C020 (RtlAddAuditAccessAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x18008E350 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x18008E3A0 (RtlAddAuditAccessObjectAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x18008E400 (RtlAddAccessAllowedObjectAce.c)
 *     _ResCreateSecurityDescriptor @ 0x18010F7D8 (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x18002D790 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x18002D7F0 (RtlValidAcl.c)
 *     RtlValidSid @ 0x18002DA50 (RtlValidSid.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall RtlpAddKnownAce(__int64 a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src, char a6)
{
  __int64 v10; // r9
  unsigned __int16 v11; // r8
  __int64 result; // rax
  unsigned int v13; // eax
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !(unsigned __int8)RtlValidSid(Src) )
    return 3221225592LL;
  if ( *(_BYTE *)a1 > 4u || a2 > 4 )
    return 3221225561LL;
  if ( *(_BYTE *)a1 > (unsigned __int8)a2 )
    LOBYTE(a2) = *(_BYTE *)a1;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    v13 = a3 & 0xFFFFFF20;
    if ( a6 != 2 )
      v13 = a3 & 0xFFFFFFE0;
    if ( v13 )
      return 3221225485LL;
  }
  if ( !(unsigned __int8)RtlValidAcl(a1) || !(unsigned __int8)RtlFirstFreeAce(a1, v14) )
    return 3221225591LL;
  v10 = v14[0];
  v11 = 4 * (Src[1] + 4);
  if ( !v14[0] || v14[0] + (unsigned __int64)v11 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_WORD *)(v14[0] + 2LL) = v11;
  *(_BYTE *)(v10 + 1) = a3;
  *(_BYTE *)v10 = a6;
  *(_DWORD *)(v10 + 4) = a4;
  memmove((void *)(v10 + 8), Src, 4 * (unsigned int)Src[1] + 8);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = a2;
  return result;
}
