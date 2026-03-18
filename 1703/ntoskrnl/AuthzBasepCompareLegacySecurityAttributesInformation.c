/*
 * XREFs of AuthzBasepCompareLegacySecurityAttributesInformation @ 0x14045A6B0
 * Callers:
 *     NtCompareTokens @ 0x1405614B4 (NtCompareTokens.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x14008A4C0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepCompareSecurityAttribute @ 0x14041F9D0 (AuthzBasepCompareSecurityAttribute.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x14045A774 (AuthzBasepIsCompareRelevantAttribute.c)
 */

bool __fastcall AuthzBasepCompareLegacySecurityAttributesInformation(int *a1, __int64 a2)
{
  int v2; // esi
  char v3; // bl
  int v4; // ebp
  int *v6; // r14
  __int64 i; // rdi
  _QWORD *v8; // rdi
  char IsCompareRelevantAttribute; // al
  int v10; // ecx
  const void **SecurityAttribute; // rax

  v2 = *a1;
  v3 = 0;
  v4 = *(_DWORD *)a2;
  if ( !*a1 && !v4 )
    return 1;
  v6 = a1 + 2;
  for ( i = *((_QWORD *)a1 + 1); (int *)i != v6; i = *(_QWORD *)i )
  {
    if ( (unsigned __int8)AuthzBasepIsCompareRelevantAttribute(i) )
    {
      SecurityAttribute = AuthzBasepFindSecurityAttribute(a2, (const UNICODE_STRING *)(i + 32));
      if ( !SecurityAttribute || !AuthzBasepCompareSecurityAttribute(i, (__int64)SecurityAttribute) )
        return v3;
    }
    else
    {
      --v2;
    }
  }
  v8 = *(_QWORD **)(a2 + 8);
  while ( v8 != (_QWORD *)(a2 + 8) )
  {
    IsCompareRelevantAttribute = AuthzBasepIsCompareRelevantAttribute(v8);
    v8 = (_QWORD *)*v8;
    v10 = v4 - 1;
    if ( IsCompareRelevantAttribute )
      v10 = v4;
    v4 = v10;
  }
  return v2 == v4;
}
