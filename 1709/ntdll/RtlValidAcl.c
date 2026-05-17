/*
 * XREFs of RtlValidAcl @ 0x18002D7F0
 * Callers:
 *     RtlValidSecurityDescriptor @ 0x18002D560 (RtlValidSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x18002D64C (RtlpAddKnownAce.c)
 *     RtlAddMandatoryAce @ 0x180057730 (RtlAddMandatoryAce.c)
 *     RtlAddAce @ 0x18005B6F0 (RtlAddAce.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x180074620 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x18007CAB0 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x180087B20 (RtlAddProcessTrustLabelAce.c)
 *     RtlpAddKnownObjectAce @ 0x18008E444 (RtlpAddKnownObjectAce.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E53C0 (RtlpConvertAclToAutoInherit.c)
 *     RtlAddAccessFilterAce @ 0x1800E6CB0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E6ED0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7040 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E7380 (RtlAddScopedPolicyIDAce.c)
 *     _ResCreateSecurityDescriptor @ 0x18010F7D8 (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     RtlpValidAccessFilterAce @ 0x1800E8318 (RtlpValidAccessFilterAce.c)
 *     RtlpValidAttributeAce @ 0x1800E84E4 (RtlpValidAttributeAce.c)
 *     RtlpValidCompoundAce @ 0x1800E85CC (RtlpValidCompoundAce.c)
 */

char __fastcall RtlValidAcl(__int64 a1)
{
  _WORD *v2; // r15
  _BYTE *v3; // rdi
  unsigned int v4; // esi
  int v5; // r12d
  int v6; // r13d
  unsigned __int64 v7; // rcx
  unsigned __int16 *v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int8 v10; // cl
  unsigned __int8 v11; // al
  unsigned int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // r10
  _BYTE *v15; // rax
  unsigned __int8 v16; // al
  char result; // al

  if ( (unsigned __int8)(*(_BYTE *)a1 - 2) <= 2u )
  {
    v2 = (_WORD *)(a1 + 2);
    if ( ((a1 + 3) & 0xFFFFFFFFFFFFFFFEuLL) != a1 + 2 )
      return 0;
    if ( *v2 < 8u )
      return 0;
    v3 = (_BYTE *)(a1 + 8);
    v4 = 0;
    v5 = 1730063;
    v6 = 104928;
    while ( 1 )
    {
      if ( v4 >= *(unsigned __int16 *)(a1 + 4) )
        return 1;
      v7 = a1 + (unsigned __int16)*v2;
      if ( (unsigned __int64)(v3 + 4) >= v7 )
        return 0;
      v8 = (unsigned __int16 *)(v3 + 2);
      if ( (_BYTE *)((unsigned __int64)(v3 + 3) & 0xFFFFFFFFFFFFFFFEuLL) != v3 + 2 )
        return 0;
      v9 = *v8;
      if ( (unsigned __int64)&v3[v9] > v7 )
        return 0;
      v10 = *v3;
      if ( *v3 <= 0x14u && _bittest(&v5, v10) )
      {
        if ( ((v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v9 )
          return 0;
        if ( (unsigned int)v9 < 0x10 )
          return 0;
        if ( v3[8] != 1 )
          return 0;
        v11 = v3[9];
        if ( v11 > 0xFu || v9 < (unsigned __int64)(4 * (unsigned int)v11 + 8) + 8 )
          return 0;
      }
      else if ( v10 == 4 )
      {
        if ( *(_BYTE *)a1 < 3u )
          return 0;
        result = RtlpValidCompoundAce(v3);
        if ( !result )
          return result;
      }
      else if ( v10 <= 0x10u && _bittest(&v6, v10) )
      {
        if ( *(_BYTE *)a1 < 4u )
          return 0;
        if ( ((v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v9 || (unsigned int)v9 < 0xC )
          return 0;
        v12 = *((_DWORD *)v3 + 2) & 1;
        v13 = 16 * v12 + 16;
        if ( (*((_DWORD *)v3 + 2) & 2) == 0 )
          v13 = 16 * v12;
        v14 = (unsigned int)v13;
        if ( v9 < v13 + 24 )
          return 0;
        v15 = &v3[(*((_DWORD *)v3 + 2) & 2) != 0 ? 0x10 : 0];
        if ( v15[16 * v12 + 12] != 1 )
          return 0;
        v16 = v15[16 * v12 + 13];
        if ( v16 > 0xFu || v9 < v14 + (unsigned __int64)(4 * (unsigned int)v16 + 8) + 12 )
          return 0;
      }
      else if ( v10 == 18 )
      {
        result = RtlpValidAttributeAce(v3);
        if ( !result )
          return result;
      }
      else if ( v10 == 21 )
      {
        result = RtlpValidAccessFilterAce(v3);
        if ( !result )
          return result;
      }
      else if ( (unsigned int)v9 < 4 )
      {
        return 0;
      }
      v3 += *v8;
      ++v4;
    }
  }
  return 0;
}
