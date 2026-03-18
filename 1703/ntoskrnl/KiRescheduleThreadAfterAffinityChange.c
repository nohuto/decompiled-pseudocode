/*
 * XREFs of KiRescheduleThreadAfterAffinityChange @ 0x14001AB48
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14001A410 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetAffinityThread @ 0x14001A918 (KiSetAffinityThread.c)
 *     KiUpdateThreadCpuSets @ 0x140202FAC (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KiPrepareReadyThreadForRescheduling @ 0x14001AD38 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14001ADA8 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiPrcbInGroupAffinity @ 0x140113B68 (KiPrcbInGroupAffinity.c)
 *     KiSelectNextThread @ 0x140113E30 (KiSelectNextThread.c)
 */

__int64 __fastcall KiRescheduleThreadAfterAffinityChange(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v10; // rcx
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
    if ( a3 == 3 && !(unsigned int)KiPrcbInGroupAffinity(a4, a2) )
    {
      KiSelectNextThread(v10, a6);
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xBu);
      *(_BYTE *)(a1 + 388) = 7;
      *(_QWORD *)(a1 + 216) = *a6;
      *a6 = a1 + 216;
    }
    return 0LL;
  }
  if ( (unsigned int)KiPrcbInGroupAffinity(a4, a2) )
    return 0LL;
  if ( *(_BYTE *)(a1 + 388) != 2 )
  {
    *(_BYTE *)(a1 + 112) |= 8u;
    return 0LL;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xBu);
  if ( *(_QWORD *)(v8 + 16) )
    return 0LL;
  KiSelectNextThread(v7, a6);
  return 1LL;
}
