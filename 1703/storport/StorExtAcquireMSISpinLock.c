/*
 * XREFs of StorExtAcquireMSISpinLock @ 0x1C0032550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StorExtAcquireMSISpinLock(__int64 a1, unsigned int a2)
{
  return KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(*(_QWORD *)(**(_QWORD **)(a1 - 16) + 4432LL) + 48LL * a2 + 24));
}
