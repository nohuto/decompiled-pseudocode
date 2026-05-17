/*
 * XREFs of RtlCreateUserProcess @ 0x1800DBDA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateUserProcessEx @ 0x180086EE0 (RtlCreateUserProcessEx.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall RtlCreateUserProcess(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        __int64 a9,
        void *a10)
{
  __int16 v10; // ebx^2
  _QWORD v15[8]; // [rsp+30h] [rbp-48h] BYREF

  v10 = HIWORD(a2);
  memset(v15, 0, 0x38uLL);
  LOWORD(v15[0]) = 1;
  v15[2] = a5;
  v15[3] = a6;
  v15[4] = a8;
  v15[5] = a9;
  WORD1(v15[0]) = v10;
  v15[1] = a4;
  return RtlCreateUserProcessEx(a1, a3, a7, (__int64)v15, a10);
}
