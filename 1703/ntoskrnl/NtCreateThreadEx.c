/*
 * XREFs of NtCreateThreadEx @ 0x140541434
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PspCreateThread @ 0x1405410D4 (PspCreateThread.c)
 *     PspDeleteCreateProcessContext @ 0x14054168C (PspDeleteCreateProcessContext.c)
 *     PspBuildCreateProcessContext @ 0x140542C84 (PspBuildCreateProcessContext.c)
 */

__int64 __fastcall NtCreateThreadEx(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v15; // rdx
  __int64 result; // rax
  unsigned int Thread; // ebx
  __int64 v18; // rcx
  _BYTE v19[8]; // [rsp+70h] [rbp-748h] BYREF
  __int64 v20; // [rsp+78h] [rbp-740h]
  __int64 v21; // [rsp+80h] [rbp-738h]
  __int64 v22; // [rsp+88h] [rbp-730h]
  _BYTE v23[64]; // [rsp+90h] [rbp-728h] BYREF
  __int64 v24[60]; // [rsp+D0h] [rbp-6E8h] BYREF
  _QWORD v25[154]; // [rsp+2B0h] [rbp-508h] BYREF

  memset(v23, 0, sizeof(v23));
  memset(v25, 0, sizeof(v25));
  if ( (a7 & 0xFFFFFFC0) != 0 )
    return 3221225717LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v18 = a1;
    if ( a1 >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v18 = *(_QWORD *)v18;
  }
  v19[0] = 0;
  v21 = a9;
  v22 = a10;
  v20 = a8;
  memset(v24, 0, 0x1D8uLL);
  if ( !a11
    || (LOBYTE(v15) = KeGetCurrentThread()->PreviousMode,
        result = PspBuildCreateProcessContext(a11, v15, 1LL, v24),
        (int)result >= 0) )
  {
    v25[6] = 0x1F800010000BLL;
    v25[31] = PspUserThreadStart;
    v25[16] = a5;
    v25[17] = a6;
    *(_DWORD *)((char *)&v25[7] + 2) = 2818091;
    *(_DWORD *)((char *)&v25[7] + 6) = 2818131;
    WORD1(v25[8]) = 43;
    LOWORD(v25[7]) = 51;
    LOWORD(v25[32]) = 639;
    LODWORD(v25[35]) = 8064;
    Thread = PspCreateThread(a1, a2, a3, a4, 0LL, (__int64)v24, v24[2], v25, (__int64)v23, a7, a5, a6, (__int64)v19);
    PspDeleteCreateProcessContext(v24);
    return Thread;
  }
  return result;
}
