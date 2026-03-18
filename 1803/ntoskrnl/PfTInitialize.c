/*
 * XREFs of PfTInitialize @ 0x1406444B8
 * Callers:
 *     PfSetSuperfetchInformation @ 0x14048DBD0 (PfSetSuperfetchInformation.c)
 *     PfTStart @ 0x1406451D8 (PfTStart.c)
 *     PfpParametersPropagate @ 0x14075CCAC (PfpParametersPropagate.c)
 *     PfInitializeSuperfetch @ 0x1408C032C (PfInitializeSuperfetch.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     InitializeSListHead @ 0x14006A770 (InitializeSListHead.c)
 *     KeInitializeGuardedMutex @ 0x1400751C0 (KeInitializeGuardedMutex.c)
 *     KeQueryTimeIncrement @ 0x1400A18E0 (KeQueryTimeIncrement.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PfTAccessTracingInitialize @ 0x1404781D8 (PfTAccessTracingInitialize.c)
 *     PfFbBufferListInitialize @ 0x140644714 (PfFbBufferListInitialize.c)
 */

__int64 __fastcall PfTInitialize(__int64 a1, __int64 a2, char a3)
{
  struct _FAST_MUTEX *v5; // rsi
  struct _KEVENT *v6; // rcx

  if ( a3 )
  {
    v5 = (struct _FAST_MUTEX *)(a1 + 560);
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 560));
    KeReleaseGuardedMutex(v5);
    memset((void *)(a1 + 784), 0, 0x28uLL);
  }
  else
  {
    memset((void *)a1, 0, 0x340uLL);
    memset(&PfKernelGlobals, 0, 0x60uLL);
    *(_QWORD *)a1 = 0LL;
    v5 = (struct _FAST_MUTEX *)(a1 + 560);
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
  if ( a3 )
    ExAcquireFastMutex(v5);
  else
    KeInitializeGuardedMutex(v5);
  *(_QWORD *)(a1 + 512) = a1 + 504;
  *(_QWORD *)(a1 + 504) = a1 + 504;
  *(_QWORD *)(a1 + 528) = a1 + 520;
  *(_QWORD *)(a1 + 520) = a1 + 520;
  if ( a3 )
    KeReleaseGuardedMutex(v5);
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
  PfFbBufferListInitialize((PKSPIN_LOCK)(a1 + 224));
  InitializeSListHead((PSLIST_HEADER)(a1 + 480));
  *(_DWORD *)(a1 + 496) = -1;
  return PfFbBufferListInitialize((PKSPIN_LOCK)(a1 + 352));
}
