/*
 * XREFs of AuthzBasepCompareUnicodeStringOperands @ 0x1401157FC
 * Callers:
 *     AuthzBasepValueInSet @ 0x1401159D4 (AuthzBasepValueInSet.c)
 *     AuthzBasepEvaluateExpression @ 0x140115C64 (AuthzBasepEvaluateExpression.c)
 * Callees:
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140031888 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x14008C120 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     RtlIsNameInExpression @ 0x1401150F0 (RtlIsNameInExpression.c)
 *     AuthzBasepGetOperandStringCaseForEvaluation @ 0x140115998 (AuthzBasepGetOperandStringCaseForEvaluation.c)
 *     AuthzBasepCompareUnicodeStringCaseSensitive @ 0x1402640A4 (AuthzBasepCompareUnicodeStringCaseSensitive.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlCompareUnicodeString @ 0x140427380 (RtlCompareUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall AuthzBasepCompareUnicodeStringOperands(char a1, __int64 a2, _DWORD *a3)
{
  wchar_t **p_Buffer; // rax
  __int64 v7; // rcx
  int OperandStringCaseForEvaluation; // eax
  int v9; // r13d
  UNICODE_STRING *p_Name; // rdx
  __int64 v11; // r12
  UNICODE_STRING *v12; // rdx
  UNICODE_STRING *p_Expression; // rcx
  unsigned int v14; // r14d
  __int64 v15; // rdi
  wchar_t **v16; // rsi
  unsigned __int8 v18; // al
  unsigned int v19; // eax
  BOOL v20; // eax
  _WORD v21[2]; // [rsp+20h] [rbp-48h] BYREF
  int v22; // [rsp+24h] [rbp-44h]
  UNICODE_STRING *v23; // [rsp+28h] [rbp-40h]
  UNICODE_STRING Name; // [rsp+30h] [rbp-38h] BYREF
  UNICODE_STRING Expression; // [rsp+40h] [rbp-28h] BYREF
  char v26; // [rsp+88h] [rbp+20h] BYREF

  v21[0] = 0;
  p_Buffer = &Name.Buffer;
  v7 = 2LL;
  do
  {
    *p_Buffer = 0LL;
    p_Buffer += 2;
    --v7;
  }
  while ( v7 );
  *a3 = 0;
  OperandStringCaseForEvaluation = AuthzBasepGetOperandStringCaseForEvaluation(a2, &v26);
  v22 = OperandStringCaseForEvaluation;
  if ( OperandStringCaseForEvaluation < 0 )
  {
LABEL_24:
    *a3 = -1;
    v14 = OperandStringCaseForEvaluation;
    goto LABEL_19;
  }
  v9 = 0;
  p_Name = &Name;
  v23 = &Name;
  v11 = a2 + 16;
  do
  {
    if ( *(_DWORD *)(v11 - 4) != 1 && v26 )
    {
      *p_Name = *(UNICODE_STRING *)*(_QWORD *)(*(_QWORD *)v11 + 48LL);
    }
    else
    {
      OperandStringCaseForEvaluation = AuthzBasepUnicodeStringFromOperandValue(
                                         a2 + 40LL * v9,
                                         v26 == 0,
                                         &Name.Length + 8 * v9,
                                         (_BYTE *)v21 + v9);
      v22 = OperandStringCaseForEvaluation;
      if ( OperandStringCaseForEvaluation < 0 )
        goto LABEL_24;
      p_Name = v23;
    }
    ++v9;
    v11 += 40LL;
    v23 = ++p_Name;
  }
  while ( v9 < 2 );
  if ( (unsigned __int8)(a1 + 0x80) > 1u )
  {
    if ( v26 )
      v19 = AuthzBasepCompareUnicodeStringCaseSensitive(&Name, &Expression);
    else
      v19 = RtlCompareUnicodeString(&Name, &Expression, 1u);
    *a3 = v19;
    if ( a1 != -126 )
    {
      if ( a1 == -125 )
      {
        v20 = *a3 <= 0;
        goto LABEL_38;
      }
      if ( a1 == -124 )
      {
        v20 = *a3 > 0;
        goto LABEL_38;
      }
      if ( a1 != -123 )
        goto LABEL_43;
      v19 = ~*a3;
    }
    v20 = v19 >> 31;
LABEL_38:
    *a3 = v20;
LABEL_43:
    v14 = v22;
    goto LABEL_19;
  }
  if ( *(_DWORD *)(a2 + 12) == 2 || *(_DWORD *)(a2 + 52) == 2 )
  {
    if ( *(_DWORD *)(a2 + 52) == 1 )
    {
      v12 = &Name;
      p_Expression = &Expression;
    }
    else
    {
      v12 = &Expression;
      p_Expression = &Name;
    }
    *a3 = RtlIsNameInExpression(p_Expression, v12, v26 == 0, 0LL);
  }
  else
  {
    if ( v26 )
      v18 = AuthzBasepEqualUnicodeStringCaseSensitive((const void **)&Name, (__int64)&Expression);
    else
      v18 = RtlEqualUnicodeString(&Name, &Expression, 1u);
    *a3 = v18;
  }
  v14 = v22;
  if ( a1 == -127 )
    *a3 = *a3 != 1;
LABEL_19:
  v15 = 0LL;
  v16 = &Name.Buffer;
  do
  {
    if ( *((_BYTE *)v21 + v15) )
      ExFreePoolWithTag(*v16, 0);
    ++v15;
    v16 += 2;
  }
  while ( v15 < 2 );
  return v14;
}
