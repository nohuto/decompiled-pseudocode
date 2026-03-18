/*
 * XREFs of KiSuspendUmsThread @ 0x1406AD9A0
 * Callers:
 *     KiSchedulerApc @ 0x140111120 (KiSchedulerApc.c)
 * Callees:
 *     KeUpdateUmsThreadState @ 0x1406AD838 (KeUpdateUmsThreadState.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406E496C (PspRundownUmsThreadForApcDelivery.c)
 */

__int64 __fastcall KiSuspendUmsThread(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = **(_QWORD **)(a1 + 496);
  *a2 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 496) + 80LL) & 4) != 0 )
    result = PspRundownUmsThreadForApcDelivery(a1, a2, v2, 0LL);
  else
    result = 0LL;
  if ( (int)result >= 0 )
    return KeUpdateUmsThreadState(v2, 1, 0);
  return result;
}
