/*
 * XREFs of TpCallbackMayRunLong @ 0x180078F20
 * Callers:
 *     sub_180012130 @ 0x180012130 (sub_180012130.c)
 *     sub_180016110 @ 0x180016110 (sub_180016110.c)
 *     sub_180016A78 @ 0x180016A78 (sub_180016A78.c)
 *     sub_180016D48 @ 0x180016D48 (sub_180016D48.c)
 * Callees:
 *     sub_180078F84 @ 0x180078F84 (sub_180078F84.c)
 *     ZwSetInformationWorkerFactory @ 0x1800A8530 (ZwSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpCallbackMayRunLong(int a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp-18h] BYREF
  int v3; // [rsp+58h] [rbp+10h] BYREF
  int v4; // [rsp+60h] [rbp+18h] BYREF
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0LL;
  result = sub_180078F84(a1, 1, (unsigned int)&v2, (unsigned int)&v3, (__int64)&v5);
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
