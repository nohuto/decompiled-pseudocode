/*
 * XREFs of EtwTraceReadyThread @ 0x14027B7EC
 * Callers:
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiDirectSwitchThread @ 0x14008DBB0 (KiDirectSwitchThread.c)
 *     KiReadyOutSwappedThreads @ 0x140090BC0 (KiReadyOutSwappedThreads.c)
 *     KiProcessExpiredTimerList @ 0x1400939C0 (KiProcessExpiredTimerList.c)
 *     KiFastReadyThread @ 0x1400A8DC4 (KiFastReadyThread.c)
 *     KiProcessThreadWaitList @ 0x1401122C0 (KiProcessThreadWaitList.c)
 *     KiSetSystemTimeDpc @ 0x140149AE0 (KiSetSystemTimeDpc.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x1400AE16C (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall EtwTraceReadyThread(__int64 a1, char a2, char a3, char a4)
{
  __int64 v4; // rax
  bool v5; // cf
  void (__noreturn *v6)(); // rax
  unsigned int v7; // edx
  __int64 v8; // rcx
  int v9; // [rsp+30h] [rbp-20h] BYREF
  char v10; // [rsp+34h] [rbp-1Ch]
  char v11; // [rsp+35h] [rbp-1Bh]
  __int16 v12; // [rsp+36h] [rbp-1Ah]
  _QWORD v13[2]; // [rsp+38h] [rbp-18h] BYREF

  v9 = *(_DWORD *)(a1 + 1600);
  v10 = a2;
  v11 = a3;
  v12 = 0;
  v4 = *(_QWORD *)(a1 + 184);
  LOBYTE(v12) = ~*(_BYTE *)(a1 + 122) & 2 | KeGetPcr()->Prcb.DpcRequestSummary & 1;
  v5 = (*(_DWORD *)(v4 + 572) & 7) != 0;
  v6 = *(void (__noreturn **)())(a1 + 1680);
  v7 = 5249538;
  LOBYTE(v12) = ((v5 ? 4 : 0) | v12 & 0xFB) ^ ((8 * a4) ^ (v12 | (v5 ? 4 : 0))) & 8;
  if ( (a4 & 2) != 0 || v6 == KeSwapProcessOrStack || (char *)v6 == (char *)EtwpLogger )
    v7 = 5245442;
  v8 = *(_QWORD *)(a1 + 544);
  v13[0] = &v9;
  v13[1] = 8LL;
  EtwTraceSiloKernelEvent(*(_QWORD *)(v8 + 1728), (__int64)v13, 1u, 0x20000200u, 0x532u, v7);
}
