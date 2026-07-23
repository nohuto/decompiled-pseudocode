/*
 * XREFs of SeQueryMandatoryLabel @ 0x14041E8D4
 * Callers:
 *     MiAllowImageMap @ 0x1404415B0 (MiAllowImageMap.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x14008C0B0 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x14008C0C0 (RtlSubAuthoritySid.c)
 *     RtlFindAceByType @ 0x1400DBB80 (RtlFindAceByType.c)
 */

__int64 __fastcall SeQueryMandatoryLabel(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  ACL *v3; // rdi
  PSID v4; // rsi
  char *AceByType; // rax
  PUCHAR v6; // rax
  ULONG Index; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( (~(unsigned __int8)*(_WORD *)(a1 + 2) & 0x10) != 0 )
    goto LABEL_11;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v3 = *(ACL **)(a1 + 24);
    goto LABEL_5;
  }
  v2 = *(unsigned int *)(a1 + 12);
  if ( !(_DWORD)v2 )
LABEL_11:
    v3 = 0LL;
  else
    v3 = (ACL *)(a1 + v2);
LABEL_5:
  v4 = SepDefaultMandatorySid;
  Index = 0;
  while ( 1 )
  {
    AceByType = (char *)RtlFindAceByType(v3, 0x11u, &Index);
    if ( AceByType )
    {
      if ( (AceByType[1] & 8) == 0 )
        break;
    }
    ++Index;
    if ( !AceByType )
      goto LABEL_8;
  }
  v4 = AceByType + 8;
LABEL_8:
  v6 = RtlSubAuthorityCountSid(v4);
  if ( *v6 )
    return *RtlSubAuthoritySid(v4, (unsigned int)*v6 - 1);
  return v1;
}
