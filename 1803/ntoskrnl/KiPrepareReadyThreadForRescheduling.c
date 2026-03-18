/*
 * XREFs of KiPrepareReadyThreadForRescheduling @ 0x1400A6D68
 * Callers:
 *     KiApplyForegroundBoostThread @ 0x14006B508 (KiApplyForegroundBoostThread.c)
 *     KiSetPriorityThread @ 0x1400ED840 (KiSetPriorityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140135EA0 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x140248B08 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiSetPriorityBoost @ 0x1400A7404 (KiSetPriorityBoost.c)
 */

__int64 __fastcall KiPrepareReadyThreadForRescheduling(__int64 a1, int a2, __int64 *a3)
{
  __int64 *v3; // rdi
  __int64 result; // rax

  v3 = a3;
  if ( (unsigned int)(a2 - 1) <= 0xD && (unsigned int)(MEMORY[0xFFFFF78000000320] - 300) >= *(_DWORD *)(a1 + 436) )
  {
    LOBYTE(a3) = 15;
    KiSetPriorityBoost(0LL, a1, a3, *(_QWORD *)(a1 + 72));
  }
  else
  {
    *(_DWORD *)(a1 + 116) |= 2u;
  }
  *(_BYTE *)(a1 + 388) = 7;
  result = *v3;
  *(_QWORD *)(a1 + 216) = *v3;
  *v3 = a1 + 216;
  return result;
}
