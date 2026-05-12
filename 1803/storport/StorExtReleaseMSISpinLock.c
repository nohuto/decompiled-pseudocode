/*
 * XREFs of StorExtReleaseMSISpinLock @ 0x1C002FE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StorExtReleaseMSISpinLock(__int64 a1, unsigned int a2, KIRQL a3)
{
  KeReleaseInterruptSpinLock(*(PKINTERRUPT *)(*(_QWORD *)(**(_QWORD **)(a1 - 16) + 4432LL) + 48LL * a2 + 24), a3);
}
