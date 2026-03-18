/*
 * XREFs of AuthzBasepOperandValueTypesCompatible @ 0x1401165D0
 * Callers:
 *     AuthzBasepEvaluateExpression @ 0x140116338 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepValueInSet @ 0x1401163E8 (AuthzBasepValueInSet.c)
 *     AuthzBasepComputeExpression @ 0x14028E4FC (AuthzBasepComputeExpression.c)
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
  bool v8; // zf
  __int64 v9; // rcx
  char v10; // al

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
  if ( *v3 == 16 )
  {
    if ( v4 == 2 )
      return 1;
    v8 = v4 == 3;
    goto LABEL_18;
  }
  if ( (unsigned __int16)(v5 - 1) > 1u || v4 != 2 )
  {
    if ( v5 == 6 )
    {
      v8 = v4 == 2;
    }
    else
    {
      if ( v5 != 5 )
        return *a1 == *v1;
      v8 = v4 == 16;
    }
LABEL_18:
    if ( v8 )
      return 1;
    return *a1 == *v1;
  }
  v9 = *((_QWORD *)v2 + 4);
  v10 = *(_BYTE *)(v9 + 8);
  if ( v5 == 2 )
  {
    if ( v10 != 2 )
      return 1;
  }
  else if ( v5 == 1 && (v10 == 2 || *(_QWORD *)v9 <= 0x7FFFFFFFFFFFFFFFuLL) )
  {
    return 1;
  }
  return 0;
}
