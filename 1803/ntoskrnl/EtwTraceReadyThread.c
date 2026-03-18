/*
 * XREFs of EtwTraceReadyThread @ 0x1402AF168
 * Callers:
 *     KiDirectSwitchThread @ 0x1400399E0 (KiDirectSwitchThread.c)
 *     KiFastReadyThread @ 0x140040784 (KiFastReadyThread.c)
 *     KiProcessThreadWaitList @ 0x1400B19F0 (KiProcessThreadWaitList.c)
 *     KiReadyOutSwappedThreads @ 0x1400EB350 (KiReadyOutSwappedThreads.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiProcessExpiredTimerList @ 0x140108660 (KiProcessExpiredTimerList.c)
 *     KiSetSystemTimeDpc @ 0x140167EE0 (KiSetSystemTimeDpc.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x14003EF90 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     EtwpCoverageSamplerReadyThread @ 0x1402B5F98 (EtwpCoverageSamplerReadyThread.c)
 */

__int64 __fastcall EtwTraceReadyThread(__int64 a1, char a2, char a3, char a4)
{
  int v4; // eax
  int v6; // edi
  __int64 v7; // rax
  char v8; // dl
  void (__noreturn *v9)(); // rax
  __int64 v10; // rcx
  int v12; // [rsp+30h] [rbp-20h] BYREF
  char v13; // [rsp+34h] [rbp-1Ch]
  char v14; // [rsp+35h] [rbp-1Bh]
  __int16 v15; // [rsp+36h] [rbp-1Ah]
  int *v16; // [rsp+38h] [rbp-18h] BYREF
  int v17; // [rsp+40h] [rbp-10h]
  int v18; // [rsp+44h] [rbp-Ch]

  v4 = *(_DWORD *)(a1 + 1600);
  v15 = 0;
  v6 = 5249538;
  v12 = v4;
  v14 = a3;
  v13 = a2;
  v7 = *(_QWORD *)(a1 + 184);
  LOBYTE(v15) = ~*(_BYTE *)(a1 + 122) & 2 | KeGetPcr()->Prcb.DpcRequestSummary & 1;
  v8 = (*(_DWORD *)(v7 + 572) & 7) != 0 ? 4 : 0;
  v9 = *(void (__noreturn **)())(a1 + 1680);
  LOBYTE(v15) = (v8 | v15 & 0xFB) ^ ((8 * a4) ^ (v15 | v8)) & 8;
  if ( (a4 & 2) != 0 || v9 == KeSwapProcessOrStack || (char *)v9 == (char *)EtwpLogger )
  {
    v6 = 5245442;
  }
  else if ( EtwpHostSiloState != -4512 && (*(_DWORD *)(EtwpHostSiloState + 4516) & 0x200) != 0 )
  {
    EtwpCoverageSamplerReadyThread(a1);
  }
  v10 = *(_QWORD *)(a1 + 544);
  v18 = 0;
  v16 = &v12;
  v17 = 8;
  return EtwTraceSiloKernelEvent(*(_QWORD *)(v10 + 1728), (int)&v16, 1, 0x20000200u, 1330, v6);
}
