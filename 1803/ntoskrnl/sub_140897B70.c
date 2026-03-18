/*
 * XREFs of sub_140897B70 @ 0x140897B70
 * Callers:
 *     <none>
 * Callees:
 *     PsQueryThreadStartAddress @ 0x14006D11C (PsQueryThreadStartAddress.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 */

__int64 __fastcall sub_140897B70(__int64 a1, void *a2, __int64 a3)
{
  if ( !*(_QWORD *)(a3 + 2096)
    && (void (__noreturn *)())PsQueryThreadStartAddress((__int64)a2, 0) == PopIrpWorkerControl )
  {
    ObfReferenceObject(a2);
    *(_QWORD *)(a3 + 2096) = a2;
  }
  return 0LL;
}
