/*
 * XREFs of sub_180044698 @ 0x180044698
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180044060 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x180046650 (RtlCheckTokenCapability.c)
 *     RtlAddAccessAllowedAce @ 0x1800473B0 (RtlAddAccessAllowedAce.c)
 *     RtlAddAccessAllowedAceEx @ 0x180081980 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddAccessDeniedAceEx @ 0x180089A90 (RtlAddAccessDeniedAceEx.c)
 *     RtlAddAccessDeniedAce @ 0x180089FA0 (RtlAddAccessDeniedAce.c)
 *     RtlDefaultNpAcl @ 0x18008C000 (RtlDefaultNpAcl.c)
 *     sub_18008CB8C @ 0x18008CB8C (sub_18008CB8C.c)
 *     RtlAddAuditAccessAceEx @ 0x18008DC90 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessAce @ 0x18008E680 (RtlAddAuditAccessAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1800E7640 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1800E76A0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1800E7910 (RtlAddAuditAccessObjectAce.c)
 *     sub_18010C7E0 @ 0x18010C7E0 (sub_18010C7E0.c)
 * Callees:
 *     RtlValidAcl @ 0x180044810 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1800449F0 (RtlValidSid.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_180044698(char *a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src, char a6)
{
  unsigned __int8 v10; // bp
  unsigned int v11; // eax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned int v14; // r8d
  unsigned __int64 v15; // r9
  unsigned __int16 v16; // r8

  if ( !(unsigned __int8)RtlValidSid(Src) )
    return 3221225592LL;
  if ( (unsigned __int8)*a1 > 4u || a2 > 4 )
    return 3221225561LL;
  v10 = a2;
  if ( (unsigned __int8)*a1 > (unsigned __int8)a2 )
    v10 = *a1;
  v11 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a6 == 2 )
      v11 = a3 & 0xFFFFFF20;
    if ( v11 )
      return 3221225485LL;
  }
  if ( !(unsigned __int8)RtlValidAcl(a1) )
    return 3221225591LL;
  v12 = (unsigned __int64)(a1 + 8);
  v13 = 0LL;
  v14 = 0;
  if ( *((_WORD *)a1 + 2) )
  {
    while ( v12 < (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
    {
      ++v14;
      v12 += *(unsigned __int16 *)(v12 + 2);
      if ( v14 >= *((unsigned __int16 *)a1 + 2) )
        goto LABEL_9;
    }
    return 3221225591LL;
  }
LABEL_9:
  v15 = (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)];
  if ( v12 <= v15 )
    v13 = v12;
  v16 = 4 * (Src[1] + 4);
  if ( !v13 || v13 + v16 > v15 )
    return 3221225625LL;
  *(_WORD *)(v13 + 2) = v16;
  *(_BYTE *)(v13 + 1) = a3;
  *(_BYTE *)v13 = a6;
  *(_DWORD *)(v13 + 4) = a4;
  memmove((void *)(v13 + 8), Src, 4 * (unsigned int)Src[1] + 8);
  *a1 = v10;
  ++*((_WORD *)a1 + 2);
  return 0LL;
}
