/*
 * XREFs of AuthzBasepOperandValueTypesCompatible @ 0x140115BC4
 * Callers:
 *     AuthzBasepValueInSet @ 0x1401159D4 (AuthzBasepValueInSet.c)
 *     AuthzBasepEvaluateExpression @ 0x140115C64 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepComputeExpression @ 0x1402641C8 (AuthzBasepComputeExpression.c)
 * Callees:
 *     <none>
 */

bool __fastcall AuthzBasepOperandValueTypesCompatible(__int16 *a1)
{
  _WORD *v1; // r9
  __int16 *v2; // r10
  __int16 *v3; // rax
  __int16 v4; // dx
  __int16 v5; // r8
  __int64 v8; // rcx
  char v9; // al

  if ( *((_DWORD *)a1 + 3) == 1 )
  {
    v1 = a1 + 20;
    v2 = a1;
    v3 = a1 + 20;
  }
  else
  {
    if ( *((_DWORD *)a1 + 13) != 1 )
      return *a1 == a1[20];
    v1 = a1 + 20;
    v3 = a1;
    v2 = a1 + 20;
  }
  v4 = *v2;
  if ( *v2 == 16 && *((_BYTE *)v2 + 4) )
    return 1;
  v5 = *v3;
  if ( *v3 == 16 && (v4 == 2 || v4 == 3) )
    return 1;
  if ( (unsigned __int16)(v5 - 1) <= 1u && v4 == 2 )
  {
    v8 = *((_QWORD *)v2 + 4);
    v9 = *(_BYTE *)(v8 + 8);
    return v5 == 2 && v9 != 2 || v5 == 1 && (v9 == 2 || *(_QWORD *)v8 <= 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v5 == 6 && v4 == 2 || v5 == 5 && v4 == 16 )
    return 1;
  return *a1 == *v1;
}
