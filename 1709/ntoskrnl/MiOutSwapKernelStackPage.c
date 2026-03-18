/*
 * XREFs of MiOutSwapKernelStackPage @ 0x140002130
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x1400EAD50 (MiOutPageSingleKernelStack.c)
 * Callees:
 *     MiOutSwapWorkingSetCallback @ 0x140002340 (MiOutSwapWorkingSetCallback.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall MiOutSwapKernelStackPage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 AnyMultiplexedVm; // rax
  __int128 v8; // xmm0
  __int64 result; // rax
  _QWORD v10[18]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  if ( !v3 )
    return 3221225643LL;
  if ( *(_QWORD *)(v3 + 8) <= *(_QWORD *)(v3 + 16) || !*(_DWORD *)(a1 + 72) )
    return 3221225993LL;
  memset(v10, 0, sizeof(v10));
  v10[0] = v3;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
  v8 = *(_OWORD *)(a1 + 64);
  v10[2] = AnyMultiplexedVm;
  v10[3] = a2;
  BYTE4(v10[4]) = 17;
  *(_OWORD *)&v10[5] = v8;
  MiOutSwapWorkingSetCallback(v10, a3, a3, 0LL);
  result = 0LL;
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v10[5];
  return result;
}
