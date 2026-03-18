/*
 * XREFs of AcpiDiagConvertMethodNameToUnicode @ 0x1C0041004
 * Callers:
 *     AcpiDiagTraceAmlEvaluation @ 0x1C00414A0 (AcpiDiagTraceAmlEvaluation.c)
 *     AcpiDiagTraceFrequentAmlEvaluation @ 0x1C0041EE4 (AcpiDiagTraceFrequentAmlEvaluation.c)
 * Callees:
 *     RtlStringCchLengthA @ 0x1C0042530 (RtlStringCchLengthA.c)
 */

__int64 __fastcall AcpiDiagConvertMethodNameToUnicode(const char *a1, __int64 a2)
{
  unsigned int v2; // ebx
  const char *v4; // rdi
  POOL_TYPE v5; // r11d
  unsigned __int16 v6; // bp
  __int64 v7; // r14
  __int64 v8; // r15
  PVOID PoolWithTag; // rax
  __int16 v10; // ax
  __int64 v11; // rdx
  __int16 v12; // cx
  size_t v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v4 = a1;
  if ( a1 && *a1 )
  {
    if ( RtlStringCchLengthA(a1, 0x200uLL, &v14) < 0 )
      v6 = v5;
    else
      v6 = v14;
    v7 = v6;
    v8 = 2LL * v6;
    PoolWithTag = ExAllocatePoolWithTag(v5, v8 + 2, 0x53706341u);
    *(_QWORD *)(a2 + 8) = PoolWithTag;
    if ( PoolWithTag )
    {
      v10 = 2 * (v6 + 1);
      *(_WORD *)(a2 + 2) = v10;
      *(_WORD *)a2 = v10 - 2;
      if ( v6 )
      {
        v11 = 0LL;
        do
        {
          v12 = *v4++;
          *(_WORD *)(v11 + *(_QWORD *)(a2 + 8)) = v12;
          v11 += 2LL;
          --v7;
        }
        while ( v7 );
      }
      *(_WORD *)(v8 + *(_QWORD *)(a2 + 8)) = 0;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
