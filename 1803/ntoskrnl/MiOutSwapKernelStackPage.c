/*
 * XREFs of MiOutSwapKernelStackPage @ 0x1400CBDA0
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x1400520A0 (MiOutPageSingleKernelStack.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiOutSwapWorkingSet @ 0x140062EF0 (MiOutSwapWorkingSet.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiOutSwapKernelStackPage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char *AnyMultiplexedVm; // rax
  __int128 v8; // xmm0
  __int64 result; // rax
  _QWORD v10[18]; // [rsp+30h] [rbp-B8h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  if ( !v3 )
    return 3221225643LL;
  if ( *(_QWORD *)(v3 + 8) <= *(_QWORD *)(v3 + 16) || !*(_DWORD *)(a1 + 72) )
    return 3221225993LL;
  memset(v10, 0, sizeof(v10));
  v10[0] = v3;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v8 = *(_OWORD *)(a1 + 64);
  v10[2] = AnyMultiplexedVm;
  v10[3] = a2;
  *(_OWORD *)&v10[5] = v8;
  MiOutSwapWorkingSet((__int64)AnyMultiplexedVm, 0LL, a3 << 25 >> 16, a3 << 25 >> 16, (__int64)v10);
  result = 0LL;
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v10[5];
  return result;
}
