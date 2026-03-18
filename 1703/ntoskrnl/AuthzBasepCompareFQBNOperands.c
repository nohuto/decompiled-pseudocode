/*
 * XREFs of AuthzBasepCompareFQBNOperands @ 0x140263C04
 * Callers:
 *     AuthzBasepValueInSet @ 0x1401159D4 (AuthzBasepValueInSet.c)
 *     AuthzBasepEvaluateExpression @ 0x140115C64 (AuthzBasepEvaluateExpression.c)
 * Callees:
 *     AuthzBasepGetConstantOperand @ 0x14002D930 (AuthzBasepGetConstantOperand.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x14008C120 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     RtlIsNameInExpression @ 0x1401150F0 (RtlIsNameInExpression.c)
 *     AuthzBasepGetOperandStringCaseForEvaluation @ 0x140115998 (AuthzBasepGetOperandStringCaseForEvaluation.c)
 *     AuthzBasepCompareUnsigned @ 0x1402640F8 (AuthzBasepCompareUnsigned.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepCompareFQBNOperands(char a1, __int64 a2, _DWORD *a3)
{
  wchar_t **p_Buffer; // rax
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // r9
  int OperandStringCaseForEvaluation; // r14d
  unsigned int v9; // r13d
  UNICODE_STRING *p_Expression; // rdx
  __int64 *v11; // r12
  __int64 v12; // rsi
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  UNICODE_STRING *v15; // rdx
  UNICODE_STRING *p_Name; // rcx
  BOOLEAN IsNameInExpression; // al
  __int64 v18; // rcx
  int v19; // eax
  _BYTE *v20; // rdi
  wchar_t **v21; // rsi
  _WORD v23[2]; // [rsp+24h] [rbp-A4h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-A0h] BYREF
  UNICODE_STRING *v25; // [rsp+30h] [rbp-98h]
  __int64 v26; // [rsp+38h] [rbp-90h] BYREF
  __int64 v27; // [rsp+40h] [rbp-88h]
  UNICODE_STRING Expression; // [rsp+48h] [rbp-80h] BYREF
  UNICODE_STRING Name; // [rsp+58h] [rbp-70h] BYREF
  _WORD v30[16]; // [rsp+68h] [rbp-60h] BYREF
  _QWORD *v31; // [rsp+88h] [rbp-40h]
  bool v34; // [rsp+E8h] [rbp+20h] BYREF

  v26 = 0LL;
  v27 = 0LL;
  v23[0] = 0;
  v34 = 0;
  *a3 = 0;
  p_Buffer = &Expression.Buffer;
  v5 = 2LL;
  v6 = 2LL;
  do
  {
    *p_Buffer = 0LL;
    p_Buffer += 2;
    --v6;
  }
  while ( v6 );
  OperandStringCaseForEvaluation = AuthzBasepGetOperandStringCaseForEvaluation(a2, &v34);
  if ( OperandStringCaseForEvaluation >= 0 )
  {
    v9 = 0;
    p_Expression = &Expression;
    v25 = &Expression;
    v11 = &v26;
    v12 = v7 + 24;
    do
    {
      if ( *(_DWORD *)(v12 - 12) == 1 )
      {
        if ( !*(_BYTE *)(v12 - 20) )
        {
          OperandStringCaseForEvaluation = -1073741406;
          goto LABEL_4;
        }
        OperandStringCaseForEvaluation = AuthzBasepGetConstantOperand(
                                           *(char **)(v12 + 8),
                                           *(_DWORD *)v12,
                                           (__int64)v30,
                                           (int *)&v24);
        if ( OperandStringCaseForEvaluation < 0 )
          goto LABEL_4;
        if ( v30[0] != 3 )
          goto LABEL_4;
        OperandStringCaseForEvaluation = AuthzBasepUnicodeStringFromOperandValue(
                                           (__int64)v30,
                                           !v34,
                                           &Expression.Length + 8 * v9,
                                           (_BYTE *)v23 + v9);
        if ( OperandStringCaseForEvaluation < 0 )
          goto LABEL_4;
        OperandStringCaseForEvaluation = AuthzBasepGetConstantOperand(
                                           (char *)(*(_QWORD *)(v12 + 8) + v24),
                                           *(_DWORD *)v12 - v24,
                                           (__int64)v30,
                                           (int *)&v24);
        if ( OperandStringCaseForEvaluation < 0 )
          goto LABEL_4;
        if ( v30[0] != 2 )
          goto LABEL_4;
        v13 = v31;
        *v11 = *v31;
        if ( *((_BYTE *)v13 + 8) == 2 )
          goto LABEL_4;
        p_Expression = v25;
      }
      else
      {
        v14 = *(_QWORD *)(*(_QWORD *)(v12 - 8) + 48LL);
        *v11 = *(_QWORD *)v14;
        *p_Expression = *(UNICODE_STRING *)(v14 + 8);
      }
      ++v9;
      ++v11;
      v12 += 40LL;
      v25 = ++p_Expression;
    }
    while ( v9 < 2 );
    if ( *(_DWORD *)(a2 + 52) == 1 )
    {
      v15 = &Expression;
      p_Name = &Name;
    }
    else
    {
      v15 = &Name;
      p_Name = &Expression;
    }
    IsNameInExpression = RtlIsNameInExpression(p_Name, v15, !v34, 0LL);
    *a3 = v26 == v27 && IsNameInExpression;
    LOBYTE(v18) = a1;
    if ( a1 == -127 )
    {
      v19 = *a3 != 1;
    }
    else
    {
      if ( a1 == (char)0x80 )
        goto LABEL_33;
      if ( !IsNameInExpression )
      {
        *a3 = 0;
        goto LABEL_33;
      }
      v19 = AuthzBasepCompareUnsigned(v18);
    }
    *a3 = v19;
  }
  else
  {
LABEL_4:
    *a3 = -1;
  }
LABEL_33:
  v20 = v23;
  v21 = &Expression.Buffer;
  do
  {
    if ( *v20 )
      ExFreePoolWithTag(*v21, 0);
    ++v20;
    v21 += 2;
    --v5;
  }
  while ( v5 );
  return (unsigned int)OperandStringCaseForEvaluation;
}
