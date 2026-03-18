/*
 * XREFs of HvlAddSecurePagesCallbackRoutine @ 0x14022C7CC
 * Callers:
 *     HvlAddSecureHvPagesCallbackRoutine @ 0x14022C7B0 (HvlAddSecureHvPagesCallbackRoutine.c)
 *     HvlAddSecureSkPagesCallbackRoutine @ 0x14022C920 (HvlAddSecureSkPagesCallbackRoutine.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     HvlpEndSecurePageListIteration @ 0x14022EB88 (HvlpEndSecurePageListIteration.c)
 *     HvlpGetSecurePageList @ 0x14022ECF4 (HvlpGetSecurePageList.c)
 *     HvlpStartSecurePageListIteration @ 0x14022EF40 (HvlpStartSecurePageListIteration.c)
 */

__int64 __fastcall HvlAddSecurePagesCallbackRoutine(int a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  int v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  result = (__int64)&retaddr;
  v9 = a3;
  v8 = a2;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_DWORD *)(a4 + 8) = 0;
  if ( !*(_QWORD *)a4 )
  {
    memset(&HvlpCrashdumpIterationState, 0, 0x28uLL);
    result = HvlpStartSecurePageListIteration(1LL, a1 | 4u);
    if ( (int)result < 0 )
      return result;
    HvlpCrashdumpIterationState = 1;
    *(_QWORD *)a4 = &HvlpCrashdumpIterationState;
  }
  if ( HvlpCrashdumpIterationState )
  {
    while ( dword_1403C9C20 )
    {
LABEL_8:
      *(_QWORD *)(a4 + 24) = (*(_QWORD *)qword_1403C9C18 >> 40) + 1LL;
      result = 0xFFFFFFFFFFLL;
      *(_QWORD *)(a4 + 16) = *(_QWORD *)qword_1403C9C18 & 0xFFFFFFFFFFLL;
      qword_1403C9C18 += 8LL;
      --dword_1403C9C20;
      if ( *(_QWORD *)(a4 + 24) )
      {
        *(_DWORD *)(a4 + 8) = -2147483646;
        if ( a1 == 1 )
          *(_DWORD *)(a4 + 8) = -2147483630;
        else
          *(_DWORD *)(a4 + 8) = -2147483614;
        return result;
      }
    }
    while ( (int)HvlpGetSecurePageList(1LL, 0LL, 0LL, &v9, 0LL, &v8) >= 0 )
    {
      dword_1403C9C20 = *(unsigned __int16 *)(v9 + 8);
      qword_1403C9C18 = v9 + 16;
      if ( dword_1403C9C20 )
        goto LABEL_8;
    }
    result = HvlpEndSecurePageListIteration(1LL, 0LL, 0LL);
    HvlpCrashdumpIterationState = 0;
  }
  return result;
}
