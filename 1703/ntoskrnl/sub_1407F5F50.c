/*
 * XREFs of sub_1407F5F50 @ 0x1407F5F50
 * Callers:
 *     <none>
 * Callees:
 *     PsQueryThreadStartAddress @ 0x14006B8C4 (PsQueryThreadStartAddress.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 */

__int64 __fastcall sub_1407F5F50(__int64 a1, void *a2, __int64 a3)
{
  if ( !*(_QWORD *)(a3 + 1872)
    && (void (__noreturn *)())PsQueryThreadStartAddress((__int64)a2, 0) == PopIrpWorkerControl )
  {
    ObfReferenceObject(a2);
    *(_QWORD *)(a3 + 1872) = a2;
  }
  return 0LL;
}
