/*
 * XREFs of PfTInitialize @ 0x1405C8078
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1405630D4 (PfSetSuperfetchInformation.c)
 *     PfTStart @ 0x1405D83BC (PfTStart.c)
 *     PfpParametersPropagate @ 0x1406C4E1C (PfpParametersPropagate.c)
 *     PfInitializeSuperfetch @ 0x14081DA88 (PfInitializeSuperfetch.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeInitializeGuardedMutex @ 0x140067180 (KeInitializeGuardedMutex.c)
 *     KeQueryTimeIncrement @ 0x14006B3C0 (KeQueryTimeIncrement.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     InitializeSListHead @ 0x14012F490 (InitializeSListHead.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PfTAccessTracingInitialize @ 0x14040EBB0 (PfTAccessTracingInitialize.c)
 *     PfFbBufferListInitialize @ 0x1405C82C4 (PfFbBufferListInitialize.c)
 */

__int64 __fastcall PfTInitialize(__int64 a1, __int64 a2, char a3)
{
  struct _FAST_MUTEX *v5; // rcx
  struct _KEVENT *v6; // rcx
  struct _FAST_MUTEX *v8; // rbx
  int v9; // [rsp+20h] [rbp-30h]
  int v10; // [rsp+24h] [rbp-2Ch]
  int v11; // [rsp+28h] [rbp-28h]
  int v12; // [rsp+2Ch] [rbp-24h]
  __int64 v13; // [rsp+30h] [rbp-20h]
  __int64 (__fastcall *v14)(struct _EX_RUNDOWN_REF *); // [rsp+38h] [rbp-18h]
  void *v15; // [rsp+40h] [rbp-10h]

  if ( a3 )
  {
    v8 = (struct _FAST_MUTEX *)(a1 + 560);
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 560));
    KeReleaseGuardedMutex(v8);
    memset((void *)(a1 + 784), 0, 0x28uLL);
  }
  else
  {
    memset((void *)a1, 0, 0x340uLL);
    memset(&PfKernelGlobals, 0, 0x60uLL);
    *(_QWORD *)a1 = 0LL;
  }
  PfKernelGlobals = 0x23C34600uLL / KeQueryTimeIncrement();
  memset((void *)(a1 + 24), 0, 0x28uLL);
  *(_WORD *)(a1 + 34) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = a1 + 48;
  *(_QWORD *)(a1 + 48) = a1 + 48;
  *(_DWORD *)(a1 + 24) &= 0xFFFFFFF0;
  *(_WORD *)(a1 + 32) = 2;
  memset((void *)(a1 + 64), 0, 0x28uLL);
  *(_WORD *)(a1 + 74) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 96) = a1 + 88;
  *(_QWORD *)(a1 + 88) = a1 + 88;
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 1;
  *(_WORD *)(a1 + 72) = 0;
  v5 = (struct _FAST_MUTEX *)(a1 + 560);
  if ( a3 )
    ExAcquireFastMutex(v5);
  else
    KeInitializeGuardedMutex(v5);
  *(_QWORD *)(a1 + 512) = a1 + 504;
  *(_QWORD *)(a1 + 504) = a1 + 504;
  *(_QWORD *)(a1 + 528) = a1 + 520;
  *(_QWORD *)(a1 + 520) = a1 + 520;
  if ( a3 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 560));
  else
    PfTAccessTracingInitialize(a1, (__int64)&PfKernelGlobals, 0);
  v6 = (struct _KEVENT *)(a1 + 136);
  if ( a3 )
  {
    KeResetEvent(v6);
    KeResetEvent((PRKEVENT)(a1 + 160));
    KeResetEvent((PRKEVENT)(a1 + 112));
    KeResetEvent((PRKEVENT)(a1 + 200));
  }
  else
  {
    KeInitializeEvent(v6, NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 160), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 112), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 200), NotificationEvent, 0);
  }
  v9 = -827260927;
  v15 = PfpSectInfoHandleFullBuffer;
  v10 = 1280206416;
  v14 = PfpSectInfoHandleOutOfBuffers;
  v11 = 1;
  v12 = 64;
  v13 = 64LL;
  PfFbBufferListInitialize((PKSPIN_LOCK)(a1 + 224));
  InitializeSListHead((PSLIST_HEADER)(a1 + 480));
  *(_DWORD *)(a1 + 496) = -1;
  v9 = -827260926;
  v15 = PfpEventHandleFullBuffer;
  v10 = 1279616592;
  v14 = PfpEventHandleOutOfBuffers;
  v11 = 512;
  v12 = 48;
  v13 = 64LL;
  return PfFbBufferListInitialize((PKSPIN_LOCK)(a1 + 352));
}
