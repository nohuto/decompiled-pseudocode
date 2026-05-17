/*
 * XREFs of TpCallbackMayRunLong @ 0x180048500
 * Callers:
 *     sub_180025A28 @ 0x180025A28 (sub_180025A28.c)
 *     sub_180025ACC @ 0x180025ACC (sub_180025ACC.c)
 *     sub_180027A70 @ 0x180027A70 (sub_180027A70.c)
 *     sub_180046810 @ 0x180046810 (sub_180046810.c)
 * Callees:
 *     sub_180048564 @ 0x180048564 (sub_180048564.c)
 *     ZwSetInformationWorkerFactory @ 0x18009DD90 (ZwSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpCallbackMayRunLong(int a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp-18h] BYREF
  int v3; // [rsp+58h] [rbp+10h] BYREF
  int v4; // [rsp+60h] [rbp+18h] BYREF
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0LL;
  result = sub_180048564(a1, 1, (unsigned int)&v2, (unsigned int)&v3, (__int64)&v5);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741637 )
      return 0LL;
  }
  else if ( !v3 )
  {
    v4 = 1;
    return ZwSetInformationWorkerFactory(*(_QWORD *)(v2 + 56), 9LL, &v4);
  }
  return result;
}
