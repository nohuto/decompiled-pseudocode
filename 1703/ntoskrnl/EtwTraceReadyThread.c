/*
 * XREFs of EtwTraceReadyThread @ 0x140253B0C
 * Callers:
 *     KiProcessThreadWaitList @ 0x14001C060 (KiProcessThreadWaitList.c)
 *     KiReadyOutSwappedThreads @ 0x140041050 (KiReadyOutSwappedThreads.c)
 *     KiTimer2Expiration @ 0x140047B60 (KiTimer2Expiration.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiDirectSwitchThread @ 0x1400E1C90 (KiDirectSwitchThread.c)
 *     KiProcessExpiredTimerList @ 0x1400E40B0 (KiProcessExpiredTimerList.c)
 *     KiFastReadyThread @ 0x140113FBC (KiFastReadyThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void *__fastcall EtwTraceReadyThread(__int64 a1, char a2, char a3, char a4)
{
  __int64 v4; // rax
  char v5; // dl
  void (__noreturn *v6)(); // rax
  int v7; // ecx
  int v9; // [rsp+30h] [rbp-20h] BYREF
  char v10; // [rsp+34h] [rbp-1Ch]
  char v11; // [rsp+35h] [rbp-1Bh]
  __int16 v12; // [rsp+36h] [rbp-1Ah]
  _QWORD v13[2]; // [rsp+38h] [rbp-18h] BYREF

  v9 = *(_DWORD *)(a1 + 1600);
  v11 = a3;
  v10 = a2;
  v12 = 0;
  v4 = *(_QWORD *)(a1 + 184);
  LOBYTE(v12) = ~(unsigned __int8)(*(_DWORD *)(a1 + 120) >> 15) & 2 | KeGetPcr()->Prcb.DpcRequestSummary & 1;
  v5 = (*(_DWORD *)(v4 + 572) & 7) != 0 ? 4 : 0;
  v6 = *(void (__noreturn **)())(a1 + 1680);
  v7 = 5249538;
  LOBYTE(v12) = (v5 | v12 & 0xFB) ^ ((8 * a4) ^ (v12 | v5)) & 8;
  if ( (a4 & 2) != 0 || v6 == KeSwapProcessOrStack || (char *)v6 == (char *)EtwpLogger )
    v7 = 5245442;
  v13[0] = &v9;
  v13[1] = 8LL;
  return EtwTraceKernelEvent((int)v13, 1, 0x20000200u, 1330, v7);
}
