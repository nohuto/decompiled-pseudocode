/*
 * XREFs of KiRescheduleThreadAfterAffinityChange @ 0x140135EA0
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1400A6F7C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetAffinityThread @ 0x140135C70 (KiSetAffinityThread.c)
 *     KiUpdateThreadCpuSets @ 0x140181670 (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KiPrcbInGroupAffinity @ 0x14003AF18 (KiPrcbInGroupAffinity.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400A6D68 (KiPrepareReadyThreadForRescheduling.c)
 *     KiSelectNextThread @ 0x1400A70C0 (KiSelectNextThread.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400A7488 (KiRemoveThreadFromAnyReadyQueue.c)
 */

__int64 __fastcall KiRescheduleThreadAfterAffinityChange(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6)
{
  struct _KPRCB *v7; // rcx
  __int64 v8; // r9
  struct _KPRCB *v10; // rcx
  unsigned int v11; // ebx

  if ( a3 == 1 )
  {
    v11 = *(char *)(a1 + 195);
    KiRemoveThreadFromAnyReadyQueue(a4, a5, a1, v11);
    KiPrepareReadyThreadForRescheduling(a1, v11, a6);
    return 0LL;
  }
  if ( a3 != 2 )
  {
    if ( a3 == 3 && !KiPrcbInGroupAffinity(a4, a2) )
    {
      KiSelectNextThread(v10, a6);
      *(_BYTE *)(a1 + 388) = 7;
      *(_QWORD *)(a1 + 216) = *a6;
      *a6 = a1 + 216;
    }
    return 0LL;
  }
  if ( KiPrcbInGroupAffinity(a4, a2) )
    return 0LL;
  if ( *(_BYTE *)(a1 + 388) != 2 )
  {
    *(_BYTE *)(a1 + 112) |= 8u;
    return 0LL;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xCu);
  if ( *(_QWORD *)(v8 + 16) )
    return 0LL;
  KiSelectNextThread(v7, a6);
  return 1LL;
}
