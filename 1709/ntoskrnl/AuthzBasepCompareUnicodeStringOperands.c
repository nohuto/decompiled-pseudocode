/*
 * XREFs of AuthzBasepCompareUnicodeStringOperands @ 0x140016D80
 * Callers:
 *     AuthzBasepEvaluateExpression @ 0x140116338 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepValueInSet @ 0x1401163E8 (AuthzBasepValueInSet.c)
 * Callees:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x140016F80 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     RtlIsNameInExpression @ 0x1400E5A80 (RtlIsNameInExpression.c)
 *     AuthzBasepGetOperandStringCaseForEvaluation @ 0x14011F3C0 (AuthzBasepGetOperandStringCaseForEvaluation.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140127E8C (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepCompareUnicodeStringCaseSensitive @ 0x14028E3D0 (AuthzBasepCompareUnicodeStringCaseSensitive.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x140523C80 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall AuthzBasepCompareUnicodeStringOperands(char a1, __int64 a2, _DWORD *a3)
{
  wchar_t **p_Buffer; // rax
  __int64 v7; // rcx
  int OperandStringCaseForEvaluation; // eax
  int v9; // r13d
  UNICODE_STRING *p_Name; // rdx
  __int64 v11; // r12
  bool v12; // zf
  UNICODE_STRING *v13; // rdx
  UNICODE_STRING *p_Expression; // rcx
  unsigned int v15; // r14d
  __int64 v16; // rbx
  wchar_t **v17; // rsi
  BOOLEAN v19; // al
  unsigned int v20; // eax
  BOOL v21; // eax
  __int64 v22; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING *v23; // [rsp+28h] [rbp-40h]
  UNICODE_STRING Name; // [rsp+30h] [rbp-38h] BYREF
  UNICODE_STRING Expression; // [rsp+40h] [rbp-28h] BYREF
  char v26; // [rsp+88h] [rbp+20h] BYREF

  LOWORD(v22) = 0;
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
  HIDWORD(v22) = OperandStringCaseForEvaluation;
  if ( OperandStringCaseForEvaluation < 0 )
  {
LABEL_25:
    *a3 = -1;
    v15 = OperandStringCaseForEvaluation;
    goto LABEL_19;
  }
  v9 = 0;
  p_Name = &Name;
  v23 = &Name;
  v11 = a2 + 16;
  do
  {
    if ( *(_DWORD *)(v11 - 4) == 1 )
    {
      v12 = v26 == 0;
    }
    else
    {
      v12 = v26 == 0;
      if ( v26 )
      {
        *p_Name = *(UNICODE_STRING *)*(_QWORD *)(*(_QWORD *)v11 + 48LL);
        goto LABEL_9;
      }
    }
    LOBYTE(p_Name) = v12;
    OperandStringCaseForEvaluation = AuthzBasepUnicodeStringFromOperandValue(
                                       a2 + 40LL * v9,
                                       p_Name,
                                       &Name + v9,
                                       (char *)&v22 + v9,
                                       v22);
    HIDWORD(v22) = OperandStringCaseForEvaluation;
    if ( OperandStringCaseForEvaluation < 0 )
      goto LABEL_25;
    p_Name = v23;
LABEL_9:
    ++v9;
    v11 += 40LL;
    v23 = ++p_Name;
  }
  while ( v9 < 2 );
  if ( (unsigned __int8)(a1 + 0x80) > 1u )
  {
    if ( v26 )
      v20 = AuthzBasepCompareUnicodeStringCaseSensitive(&Name, &Expression);
    else
      v20 = RtlCompareUnicodeString(&Name, &Expression, 1u);
    *a3 = v20;
    if ( a1 != -126 )
    {
      if ( a1 == -125 )
      {
        v21 = *a3 <= 0;
        goto LABEL_39;
      }
      if ( a1 == -124 )
      {
        v21 = *a3 > 0;
        goto LABEL_39;
      }
      if ( a1 != -123 )
        goto LABEL_44;
      v20 = ~*a3;
    }
    v21 = v20 >> 31;
LABEL_39:
    *a3 = v21;
LABEL_44:
    v15 = HIDWORD(v22);
    goto LABEL_19;
  }
  if ( *(_DWORD *)(a2 + 12) == 2 || *(_DWORD *)(a2 + 52) == 2 )
  {
    if ( *(_DWORD *)(a2 + 52) == 1 )
    {
      v13 = &Name;
      p_Expression = &Expression;
    }
    else
    {
      v13 = &Expression;
      p_Expression = &Name;
    }
    *a3 = RtlIsNameInExpression(p_Expression, v13, v26 == 0, 0LL);
  }
  else
  {
    if ( v26 )
      v19 = AuthzBasepEqualUnicodeStringCaseSensitive(&Name, &Expression);
    else
      v19 = RtlEqualUnicodeString(&Name, &Expression, 1u);
    *a3 = v19;
  }
  v15 = HIDWORD(v22);
  if ( a1 == -127 )
    *a3 = *a3 != 1;
LABEL_19:
  v16 = 0LL;
  v17 = &Name.Buffer;
  do
  {
    if ( *((_BYTE *)&v22 + v16) )
      ExFreePoolWithTag(*v17, 0);
    ++v16;
    v17 += 2;
  }
  while ( v16 < 2 );
  return v15;
}
