/*
 * XREFs of NtCreateThreadEx @ 0x1404B9CEC
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PspCreateThread @ 0x1404B98F8 (PspCreateThread.c)
 *     PspDeleteCreateProcessContext @ 0x1404B9F44 (PspDeleteCreateProcessContext.c)
 *     PspBuildCreateProcessContext @ 0x1404BA110 (PspBuildCreateProcessContext.c)
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
  __int64 v19[4]; // [rsp+70h] [rbp-758h] BYREF
  __int64 v20[8]; // [rsp+90h] [rbp-738h] BYREF
  __int64 v21[62]; // [rsp+D0h] [rbp-6F8h] BYREF
  __int64 v22[154]; // [rsp+2C0h] [rbp-508h] BYREF

  memset(v20, 0, sizeof(v20));
  memset(v22, 0, sizeof(v22));
  if ( (a7 & 0xFFFFFFC0) != 0 )
    return 3221225717LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v18 = a1;
    if ( a1 >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v18 = *(_QWORD *)v18;
  }
  LOBYTE(v19[0]) = 0;
  v19[2] = a9;
  v19[3] = a10;
  v19[1] = a8;
  memset(v21, 0, 0x1E8uLL);
  if ( !a11
    || (LOBYTE(v15) = KeGetCurrentThread()->PreviousMode,
        result = PspBuildCreateProcessContext(a11, v15, 1LL, v21),
        (int)result >= 0) )
  {
    v22[6] = 0x1F800010000BLL;
    v22[31] = PspUserThreadStart;
    v22[16] = a5;
    v22[17] = a6;
    *(_DWORD *)((char *)&v22[7] + 2) = 2818091;
    *(_DWORD *)((char *)&v22[7] + 6) = 2818131;
    WORD1(v22[8]) = 43;
    LOWORD(v22[7]) = 51;
    LOWORD(v22[32]) = 639;
    LODWORD(v22[35]) = 8064;
    Thread = PspCreateThread(
               a1,
               a2,
               a3,
               a4,
               0LL,
               (__int64)v21,
               v21[2],
               (__int64)v22,
               (__int64)v20,
               a7,
               a5,
               a6,
               (__int64)v19);
    PspDeleteCreateProcessContext(v21);
    return Thread;
  }
  return result;
}
