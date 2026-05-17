/*
 * XREFs of RtlValidAcl @ 0x1800375A0
 * Callers:
 *     sub_180037408 @ 0x180037408 (sub_180037408.c)
 *     RtlAddProcessTrustLabelAce @ 0x18006BD70 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAce @ 0x18006C1B0 (RtlAddAce.c)
 *     RtlAddMandatoryAce @ 0x18006C310 (RtlAddMandatoryAce.c)
 *     RtlValidSecurityDescriptor @ 0x180071F50 (RtlValidSecurityDescriptor.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x180076560 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x180079C70 (RtlDeleteAce.c)
 *     sub_1800E0A40 @ 0x1800E0A40 (sub_1800E0A40.c)
 *     RtlAddAccessFilterAce @ 0x1800E2410 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E26A0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E2820 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E2B70 (RtlAddScopedPolicyIDAce.c)
 *     sub_1800E2E1C @ 0x1800E2E1C (sub_1800E2E1C.c)
 * Callees:
 *     sub_18003773C @ 0x18003773C (sub_18003773C.c)
 *     sub_1800E4104 @ 0x1800E4104 (sub_1800E4104.c)
 *     sub_1800E42D0 @ 0x1800E42D0 (sub_1800E42D0.c)
 *     sub_1800E43B8 @ 0x1800E43B8 (sub_1800E43B8.c)
 *     sub_1800E4434 @ 0x1800E4434 (sub_1800E4434.c)
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
        if ( !(unsigned __int8)sub_18003773C(v3) )
          return 0;
      }
      else if ( *v3 == 4 )
      {
        if ( *(_BYTE *)a1 < 3u )
          return 0;
        result = sub_1800E43B8(v3);
        if ( !result )
          return result;
      }
      else if ( (unsigned __int8)(*v3 - 5) <= 3u
             || (unsigned __int8)(*v3 - 11) <= 1u
             || (unsigned __int8)(*v3 - 15) <= 1u )
      {
        if ( *(_BYTE *)a1 < 4u )
          return 0;
        result = sub_1800E4434(v3);
        if ( !result )
          return result;
      }
      else if ( *v3 == 18 )
      {
        result = sub_1800E42D0(v3);
        if ( !result )
          return result;
      }
      else if ( *v3 == 21 )
      {
        result = sub_1800E4104(v3);
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
