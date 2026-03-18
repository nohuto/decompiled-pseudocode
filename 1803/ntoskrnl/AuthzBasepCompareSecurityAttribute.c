/*
 * XREFs of AuthzBasepCompareSecurityAttribute @ 0x140576670
 * Callers:
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x140576574 (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 *     AuthzBasepCompareSecurityAttributesInformation @ 0x1407DF3B8 (AuthzBasepCompareSecurityAttributesInformation.c)
 * Callees:
 *     AuthzBasepFindSecurityAttributeValue @ 0x14006C17C (AuthzBasepFindSecurityAttributeValue.c)
 */

char __fastcall AuthzBasepCompareSecurityAttribute(__int64 a1, __int64 a2)
{
  char v2; // di
  __int16 *v5; // r15
  _QWORD *v6; // r14
  _QWORD *i; // rbx
  unsigned int v8; // eax

  v2 = 0;
  v5 = 0LL;
  if ( *(_DWORD *)(a1 + 60) == *(_DWORD *)(a2 + 60)
    && *(_WORD *)(a1 + 48) == *(_WORD *)(a2 + 48)
    && *(_DWORD *)(a1 + 52) == *(_DWORD *)(a2 + 52) )
  {
    v6 = (_QWORD *)(a1 + 72);
    for ( i = *(_QWORD **)(a1 + 72); ; i = (_QWORD *)*i )
    {
      if ( i == v6 )
        return 1;
      v8 = *(unsigned __int16 *)(a1 + 48);
      if ( *(_WORD *)(a1 + 48) )
      {
        if ( v8 <= 2 )
          goto LABEL_14;
        if ( v8 <= 5 )
          goto LABEL_9;
        if ( v8 == 6 )
        {
LABEL_14:
          v5 = (__int16 *)i[5];
        }
        else if ( v8 == 16 )
        {
LABEL_9:
          v5 = (__int16 *)(i + 5);
        }
      }
      if ( !AuthzBasepFindSecurityAttributeValue(a2, v5, v8) )
        return v2;
    }
  }
  return v2;
}
