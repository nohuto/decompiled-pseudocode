/*
 * XREFs of KiRescheduleThreadAfterAffinityChange @ 0x1400AC020
 * Callers:
 *     KiSetAffinityThread @ 0x1400ABE08 (KiSetAffinityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14011F888 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiUpdateThreadCpuSets @ 0x140153F78 (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KiPrcbInGroupAffinity @ 0x1400A88C0 (KiPrcbInGroupAffinity.c)
 *     KiSelectNextThread @ 0x1400A89A0 (KiSelectNextThread.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400D14D0 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400D15AC (KiRemoveThreadFromAnyReadyQueue.c)
 */

__int64 __fastcall KiRescheduleThreadAfterAffinityChange(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 *a6)
{
  __int64 v7; // rcx
  unsigned __int64 *v8; // r8
  __int64 v9; // r9
  __int64 v11; // rcx
  unsigned __int64 *v12; // r8
  unsigned int v13; // ebx

  if ( a3 == 1 )
  {
    v13 = *(char *)(a1 + 195);
    KiRemoveThreadFromAnyReadyQueue(a4, a5, a1, v13);
    KiPrepareReadyThreadForRescheduling(a1, v13, a6);
    return 0LL;
  }
  if ( a3 != 2 )
  {
    if ( a3 == 3 && !KiPrcbInGroupAffinity(a4, a2) )
    {
      KiSelectNextThread(v11, a6, v12);
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xCu);
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
  if ( *(_QWORD *)(v9 + 16) )
    return 0LL;
  KiSelectNextThread(v7, a6, v8);
  return 1LL;
}
