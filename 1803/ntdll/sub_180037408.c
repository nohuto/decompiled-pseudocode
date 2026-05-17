/*
 * XREFs of sub_180037408 @ 0x180037408
 * Callers:
 *     RtlDefaultNpAcl @ 0x180002EB0 (RtlDefaultNpAcl.c)
 *     RtlCheckTokenCapability @ 0x180030720 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180035010 (RtlCheckTokenMembershipEx.c)
 *     RtlAddAccessAllowedAce @ 0x18007A8C0 (RtlAddAccessAllowedAce.c)
 *     RtlAddAccessAllowedAceEx @ 0x18007B9E0 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddAccessDeniedAceEx @ 0x1800838D0 (RtlAddAccessDeniedAceEx.c)
 *     sub_180086C80 @ 0x180086C80 (sub_180086C80.c)
 *     RtlAddAuditAccessAceEx @ 0x1800897C0 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessAce @ 0x18008A270 (RtlAddAuditAccessAce.c)
 *     RtlAddAccessDeniedAce @ 0x18008AB00 (RtlAddAccessDeniedAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1800E2350 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1800E23B0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1800E2630 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180037550 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1800375A0 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180037790 (RtlValidSid.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_180037408(char *a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src, char a6)
{
  char v10; // al
  bool v11; // cc
  char v12; // di
  __int64 v13; // r9
  unsigned __int16 v14; // r8
  __int64 result; // rax
  unsigned int v16; // eax
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !(unsigned __int8)RtlValidSid(Src) )
    return 3221225592LL;
  if ( (unsigned __int8)*a1 > 4u || a2 > 4 )
    return 3221225561LL;
  v10 = a2;
  v11 = (unsigned __int8)*a1 <= (unsigned __int8)a2;
  v12 = *a1;
  if ( v11 )
    v12 = v10;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    v16 = a3 & 0xFFFFFF20;
    if ( a6 != 2 )
      v16 = a3 & 0xFFFFFFE0;
    if ( v16 )
      return 3221225485LL;
  }
  if ( !(unsigned __int8)RtlValidAcl(a1) || !(unsigned __int8)RtlFirstFreeAce(a1, v17) )
    return 3221225591LL;
  v13 = v17[0];
  v14 = 4 * (Src[1] + 4);
  if ( !v17[0] || v17[0] + (unsigned __int64)v14 > (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
    return 3221225625LL;
  *(_WORD *)(v17[0] + 2LL) = v14;
  *(_BYTE *)(v13 + 1) = a3;
  *(_BYTE *)v13 = a6;
  *(_DWORD *)(v13 + 4) = a4;
  memmove((void *)(v13 + 8), Src, 4 * (unsigned int)Src[1] + 8);
  ++*((_WORD *)a1 + 2);
  result = 0LL;
  *a1 = v12;
  return result;
}
