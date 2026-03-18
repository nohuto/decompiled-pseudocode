/*
 * XREFs of PushPost @ 0x1C001CC98
 * Callers:
 *     AsyncEvalObject @ 0x1C0003100 (AsyncEvalObject.c)
 *     IncDec @ 0x1C001CC40 (IncDec.c)
 *     NestAsyncEvalObject @ 0x1C005F0C0 (NestAsyncEvalObject.c)
 *     Unload @ 0x1C005FA10 (Unload.c)
 *     Divide @ 0x1C0060080 (Divide.c)
 *     LoadTable @ 0x1C00603E0 (LoadTable.c)
 *     Wait @ 0x1C0061DD0 (Wait.c)
 * Callees:
 *     PushFrame @ 0x1C001CCF0 (PushFrame.c)
 */

__int64 __fastcall PushPost(int a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v8; // rdx
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  result = PushFrame(a1, 1414745936, 56, a2, (__int64)v9);
  if ( !(_DWORD)result )
  {
    v8 = v9[0];
    *(_QWORD *)(v9[0] + 32LL) = a3;
    *(_QWORD *)(v8 + 40) = a4;
    *(_QWORD *)(v8 + 48) = a5;
  }
  return result;
}
