/*
 * XREFs of HvlAddSecurePagesCallbackRoutine @ 0x1401EA5FC
 * Callers:
 *     HvlAddSecureHvPagesCallbackRoutine @ 0x1401EA5E0 (HvlAddSecureHvPagesCallbackRoutine.c)
 *     HvlAddSecureSkPagesCallbackRoutine @ 0x1401EA760 (HvlAddSecureSkPagesCallbackRoutine.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     HvlpEndSecurePageListIteration @ 0x1401EC204 (HvlpEndSecurePageListIteration.c)
 *     HvlpGetSecurePageList @ 0x1401EC374 (HvlpGetSecurePageList.c)
 *     HvlpStartSecurePageListIteration @ 0x1401EC5C4 (HvlpStartSecurePageListIteration.c)
 */

_QWORD *__fastcall HvlAddSecurePagesCallbackRoutine(int a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *result; // rax
  int v7; // ecx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  result = &retaddr;
  v10 = a3;
  v9 = a2;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_DWORD *)(a4 + 8) = 0;
  if ( !*(_QWORD *)a4 )
  {
    memset(&HvlpCrashdumpIterationState, 0, 0x28uLL);
    result = (_QWORD *)HvlpStartSecurePageListIteration(1LL, a1 | 4u);
    if ( (int)result < 0 )
      return result;
    HvlpCrashdumpIterationState = 1;
    *(_QWORD *)a4 = &HvlpCrashdumpIterationState;
  }
  if ( HvlpCrashdumpIterationState )
  {
    v7 = dword_14036A760;
    result = (_QWORD *)qword_14036A758;
    do
    {
      while ( !v7 )
      {
        if ( (int)HvlpGetSecurePageList(1LL, 0LL, 0LL, &v10, 0LL, &v9) < 0 )
        {
          result = (_QWORD *)HvlpEndSecurePageListIteration(1LL, 0LL, 0LL);
          HvlpCrashdumpIterationState = 0;
          return result;
        }
        v7 = *(unsigned __int16 *)(v10 + 8);
        result = (_QWORD *)(v10 + 16);
        qword_14036A758 = v10 + 16;
        dword_14036A760 = v7;
      }
      *(_QWORD *)(a4 + 24) = (*result >> 40) + 1LL;
      *(_QWORD *)(a4 + 16) = *(_QWORD *)qword_14036A758 & 0xFFFFFFFFFFLL;
      result = (_QWORD *)(qword_14036A758 + 8);
      v7 = dword_14036A760 - 1;
      qword_14036A758 += 8LL;
      --dword_14036A760;
    }
    while ( !*(_QWORD *)(a4 + 24) );
    *(_DWORD *)(a4 + 8) = -2147483646;
    if ( a1 == 1 )
      *(_DWORD *)(a4 + 8) = -2147483630;
    else
      *(_DWORD *)(a4 + 8) = -2147483614;
  }
  return result;
}
