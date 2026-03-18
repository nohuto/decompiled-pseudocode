/*
 * XREFs of AuthzBasepEvaluateExpression @ 0x140116338
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140017110 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140016D80 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepEvaluateSetRelationship @ 0x14011626C (AuthzBasepEvaluateSetRelationship.c)
 *     AuthzBasepOperandValueTypesCompatible @ 0x1401165D0 (AuthzBasepOperandValueTypesCompatible.c)
 *     AuthzBasepCompareFQBNOperands @ 0x14028DF34 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x14028E1A4 (AuthzBasepCompareIntegerOperands.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x14028E2E0 (AuthzBasepCompareOctetStringOperands.c)
 */

__int64 __fastcall AuthzBasepEvaluateExpression(char a1, __int64 a2, _DWORD *a3)
{
  int v3; // ebx
  unsigned __int16 *v4; // r9
  unsigned __int16 v8; // r14
  __int64 v9; // rcx
  int v10; // ecx
  int v12; // eax
  int v13; // eax

  v3 = 0;
  v4 = (unsigned __int16 *)(a2 + 40);
  *a3 = 0;
  if ( *(_DWORD *)(a2 + 12) != 1 )
    v4 = (unsigned __int16 *)a2;
  v8 = *v4;
  if ( !(unsigned __int8)AuthzBasepOperandValueTypesCompatible(a2) )
    goto LABEL_12;
  if ( (unsigned __int8)a1 >= 0x80u )
  {
    if ( (unsigned __int8)a1 <= 0x81u )
    {
      v3 = AuthzBasepEvaluateSetRelationship(0, a2, a3);
      if ( v3 < 0 )
        goto LABEL_13;
      if ( a1 == -127 && *a3 != -1 )
        *a3 = *a3 == 0;
    }
    else
    {
      if ( (unsigned __int8)a1 > 0x85u )
      {
        if ( a1 == -122 )
        {
LABEL_8:
          v10 = 1;
          goto LABEL_9;
        }
        if ( a1 != -120 )
        {
          if ( a1 == -114 )
            goto LABEL_8;
          if ( a1 != -113 )
            return (unsigned int)v3;
        }
        v10 = 2;
LABEL_9:
        v3 = AuthzBasepEvaluateSetRelationship(v10, a2, a3);
        if ( v3 < 0 )
          goto LABEL_13;
        goto LABEL_10;
      }
      if ( !v8 )
        goto LABEL_12;
      if ( v8 <= 2u )
      {
        LOBYTE(v9) = a1;
        v12 = AuthzBasepCompareIntegerOperands(v9, a2);
        goto LABEL_26;
      }
      switch ( v8 )
      {
        case 3u:
          v13 = AuthzBasepCompareUnicodeStringOperands(a1, a2, a3);
          break;
        case 4u:
          LOBYTE(v9) = a1;
          v13 = AuthzBasepCompareFQBNOperands(v9, a2, a3);
          break;
        case 5u:
        case 0x10u:
          LOBYTE(v9) = a1;
          v12 = AuthzBasepCompareOctetStringOperands(v9, a2);
LABEL_26:
          *a3 = v12;
          return (unsigned int)v3;
        default:
LABEL_12:
          v3 = -1073741406;
          goto LABEL_13;
      }
      v3 = v13;
    }
LABEL_10:
    if ( v3 >= 0 )
      return (unsigned int)v3;
LABEL_13:
    *a3 = -1;
  }
  return (unsigned int)v3;
}
