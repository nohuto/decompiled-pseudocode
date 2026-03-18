/*
 * XREFs of NtCreateThreadEx @ 0x14053EC18
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PspCreateThread @ 0x140492B18 (PspCreateThread.c)
 *     PspBuildCreateProcessContext @ 0x14053D9A0 (PspBuildCreateProcessContext.c)
 *     PspDeleteCreateProcessContext @ 0x14053EE70 (PspDeleteCreateProcessContext.c)
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
        _QWORD *a11)
{
  __int64 result; // rax
  unsigned int Thread; // ebx
  __int64 v17; // rcx
  __int64 v18[4]; // [rsp+70h] [rbp-758h] BYREF
  __int64 v19[8]; // [rsp+90h] [rbp-738h] BYREF
  __int64 v20[62]; // [rsp+D0h] [rbp-6F8h] BYREF
  __int64 v21[154]; // [rsp+2C0h] [rbp-508h] BYREF

  memset(v19, 0, sizeof(v19));
  memset(v21, 0, sizeof(v21));
  if ( (a7 & 0xFFFFFFC0) != 0 )
    return 3221225717LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v17 = a1;
    if ( a1 >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v17 = *(_QWORD *)v17;
  }
  LOBYTE(v18[0]) = 0;
  v18[2] = a9;
  v18[3] = a10;
  v18[1] = a8;
  memset(v20, 0, 0x1E8uLL);
  if ( !a11
    || (result = PspBuildCreateProcessContext(a11, KeGetCurrentThread()->PreviousMode, 1LL, (unsigned int *)v20),
        (int)result >= 0) )
  {
    v21[6] = 0x1F800010000BLL;
    v21[31] = PspUserThreadStart;
    v21[16] = a5;
    v21[17] = a6;
    *(_DWORD *)((char *)&v21[7] + 2) = 2818091;
    *(_DWORD *)((char *)&v21[7] + 6) = 2818131;
    WORD1(v21[8]) = 43;
    LOWORD(v21[7]) = 51;
    LOWORD(v21[32]) = 639;
    LODWORD(v21[35]) = 8064;
    Thread = PspCreateThread(
               a1,
               a2,
               a3,
               a4,
               0LL,
               (__int64)v20,
               v20[2],
               (__int64)v21,
               (__int64)v19,
               a7,
               a5,
               a6,
               (__int64)v18);
    PspDeleteCreateProcessContext(v20);
    return Thread;
  }
  return result;
}
