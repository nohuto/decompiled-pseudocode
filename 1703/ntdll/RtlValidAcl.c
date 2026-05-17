/*
 * XREFs of RtlValidAcl @ 0x180044810
 * Callers:
 *     sub_180044698 @ 0x180044698 (sub_180044698.c)
 *     RtlValidSecurityDescriptor @ 0x180046E20 (RtlValidSecurityDescriptor.c)
 *     RtlAddAce @ 0x18004BAF0 (RtlAddAce.c)
 *     RtlAddMandatoryAce @ 0x18004C070 (RtlAddMandatoryAce.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x18007B6B0 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x18007FA60 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x1800889C0 (RtlAddProcessTrustLabelAce.c)
 *     sub_1800E5D78 @ 0x1800E5D78 (sub_1800E5D78.c)
 *     RtlAddAccessFilterAce @ 0x1800E7700 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E7980 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7AF0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E7E30 (RtlAddScopedPolicyIDAce.c)
 *     sub_1800E80D4 @ 0x1800E80D4 (sub_1800E80D4.c)
 *     sub_18010C7E0 @ 0x18010C7E0 (sub_18010C7E0.c)
 * Callees:
 *     sub_1800449A0 @ 0x1800449A0 (sub_1800449A0.c)
 *     sub_1800E8EC4 @ 0x1800E8EC4 (sub_1800E8EC4.c)
 *     sub_1800E9090 @ 0x1800E9090 (sub_1800E9090.c)
 *     sub_1800E9178 @ 0x1800E9178 (sub_1800E9178.c)
 *     sub_1800E91E4 @ 0x1800E91E4 (sub_1800E91E4.c)
 */

char __fastcall RtlValidAcl(__int64 a1)
{
  _WORD *v2; // r14
  _BYTE *v3; // rbx
  unsigned int i; // esi
  unsigned __int64 v5; // rcx
  unsigned __int16 *v6; // r15
  __int64 v7; // rdx
  int v8; // ecx
  char result; // al
  int v10; // ecx

  if ( (unsigned __int8)(*(_BYTE *)a1 - 2) <= 2u )
  {
    v2 = (_WORD *)(a1 + 2);
    if ( ((a1 + 3) & 0xFFFFFFFFFFFFFFFEuLL) != a1 + 2 )
      return 0;
    if ( *v2 < 8u )
      return 0;
    v3 = (_BYTE *)(a1 + 8);
    for ( i = 0; ; ++i )
    {
      if ( i >= *(unsigned __int16 *)(a1 + 4) )
        return 1;
      v5 = a1 + (unsigned __int16)*v2;
      if ( (unsigned __int64)(v3 + 4) >= v5 )
        return 0;
      v6 = (unsigned __int16 *)(v3 + 2);
      if ( (_BYTE *)((unsigned __int64)(v3 + 3) & 0xFFFFFFFFFFFFFFFEuLL) != v3 + 2 )
        return 0;
      v7 = *v6;
      if ( (unsigned __int64)&v3[v7] > v5 )
        return 0;
      if ( *v3 <= 0x14u && (v8 = 1730063, _bittest(&v8, (unsigned __int8)*v3)) )
      {
        if ( !(unsigned __int8)sub_1800449A0(v3) )
          return 0;
      }
      else if ( *v3 == 4 )
      {
        if ( *(_BYTE *)a1 < 3u )
          return 0;
        result = sub_1800E9178(v3);
        if ( !result )
          return result;
      }
      else if ( *v3 <= 0x10u && (v10 = 104928, _bittest(&v10, (unsigned __int8)*v3)) )
      {
        if ( *(_BYTE *)a1 < 4u )
          return 0;
        result = sub_1800E91E4(v3);
        if ( !result )
          return result;
      }
      else if ( *v3 == 18 )
      {
        result = sub_1800E9090(v3);
        if ( !result )
          return result;
      }
      else if ( *v3 == 21 )
      {
        result = sub_1800E8EC4(v3);
        if ( !result )
          return result;
      }
      else if ( (unsigned int)v7 < 4 )
      {
        return 0;
      }
      v3 += *v6;
    }
  }
  return 0;
}
