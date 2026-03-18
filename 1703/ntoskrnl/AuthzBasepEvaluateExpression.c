/*
 * XREFs of AuthzBasepEvaluateExpression @ 0x140115C64
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x1400897C0 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1401157FC (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepOperandValueTypesCompatible @ 0x140115BC4 (AuthzBasepOperandValueTypesCompatible.c)
 *     AuthzBasepEvaluateSetRelationship @ 0x140115DDC (AuthzBasepEvaluateSetRelationship.c)
 *     AuthzBasepCompareFQBNOperands @ 0x140263C04 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x140263E78 (AuthzBasepCompareIntegerOperands.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x140263FB4 (AuthzBasepCompareOctetStringOperands.c)
 */

__int64 __fastcall AuthzBasepEvaluateExpression(char a1, __int64 a2, _DWORD *a3)
{
  int v3; // ebx
  unsigned __int16 *v4; // rax
  unsigned __int16 v8; // r14
  __int64 v9; // rcx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax

  v3 = 0;
  v4 = (unsigned __int16 *)(a2 + 40);
  *a3 = 0;
  if ( *(_DWORD *)(a2 + 12) != 1 )
    v4 = (unsigned __int16 *)a2;
  v8 = *v4;
  if ( !AuthzBasepOperandValueTypesCompatible((__int16 *)a2) )
    goto LABEL_4;
  if ( (unsigned __int8)a1 < 0x80u )
    return (unsigned int)v3;
  if ( (unsigned __int8)a1 <= 0x81u )
  {
    v3 = AuthzBasepEvaluateSetRelationship(0LL, a2, a3);
    if ( v3 < 0 )
      goto LABEL_5;
    if ( a1 == -127 && *a3 != -1 )
      *a3 = *a3 == 0;
    goto LABEL_13;
  }
  if ( (unsigned __int8)a1 > 0x85u )
  {
    if ( a1 == -122 )
    {
LABEL_11:
      v11 = 1LL;
      goto LABEL_12;
    }
    if ( a1 != -120 )
    {
      if ( a1 == -114 )
        goto LABEL_11;
      if ( a1 != -113 )
        return (unsigned int)v3;
    }
    v11 = 2LL;
LABEL_12:
    v3 = AuthzBasepEvaluateSetRelationship(v11, a2, a3);
    if ( v3 < 0 )
      goto LABEL_5;
LABEL_13:
    if ( v3 >= 0 )
      return (unsigned int)v3;
    goto LABEL_5;
  }
  if ( !v8 )
    goto LABEL_4;
  if ( v8 <= 2u )
  {
    LOBYTE(v9) = a1;
    v12 = AuthzBasepCompareIntegerOperands(v9, a2);
    goto LABEL_27;
  }
  switch ( v8 )
  {
    case 3u:
      v13 = AuthzBasepCompareUnicodeStringOperands(a1, a2, a3);
      goto LABEL_30;
    case 4u:
      LOBYTE(v9) = a1;
      v13 = AuthzBasepCompareFQBNOperands(v9, a2, a3);
LABEL_30:
      v3 = v13;
      goto LABEL_13;
    case 5u:
    case 0x10u:
      LOBYTE(v9) = a1;
      v12 = AuthzBasepCompareOctetStringOperands(v9, a2);
LABEL_27:
      *a3 = v12;
      return (unsigned int)v3;
  }
LABEL_4:
  v3 = -1073741406;
LABEL_5:
  *a3 = -1;
  return (unsigned int)v3;
}
