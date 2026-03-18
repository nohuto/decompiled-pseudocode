/*
 * XREFs of AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1400CAD9C
 * Callers:
 *     AuthzBasepAddSecurityAttributeValues @ 0x14006BFC8 (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1400CAD30 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1400E2B70 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x1402C35AC (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x1402C38A4 (AuthzBasepRollbackSecurityAttributeChanges.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall AuthzBasepRemoveSecurityAttributeValueFromLists(_DWORD *a1, __int64 *a2, char a3)
{
  __int64 *result; // rax
  __int64 v5; // r9
  __int64 **v6; // r8
  __int64 **v7; // r8

  result = (__int64 *)*((unsigned int *)a2 + 8);
  if ( ((unsigned __int8)result & 2) != 0 )
  {
    result = a2 + 2;
    v5 = a2[2];
    if ( *(__int64 **)(v5 + 8) != a2 + 2 || (v6 = (__int64 **)a2[3], *v6 != result) )
      __fastfail(3u);
    *v6 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    *((_DWORD *)a2 + 8) &= ~2u;
    if ( a1 )
      --a1[22];
  }
  if ( a3 )
  {
    result = (__int64 *)*((unsigned int *)a2 + 8);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      result = (__int64 *)*a2;
      if ( *(__int64 **)(*a2 + 8) != a2 || (v7 = (__int64 **)a2[1], *v7 != a2) )
        __fastfail(3u);
      *v7 = result;
      result[1] = (__int64)v7;
      *((_DWORD *)a2 + 8) &= ~1u;
      if ( a1 )
      {
        --a1[15];
        result = (__int64 *)*((unsigned int *)a2 + 8);
        if ( ((unsigned __int8)result & 4) != 0 )
          --a1[16];
      }
    }
  }
  return result;
}
