/*
 * XREFs of sub_140826EC0 @ 0x140826EC0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     PsQueryThreadStartAddress @ 0x1401268CC (PsQueryThreadStartAddress.c)
 */

__int64 __fastcall sub_140826EC0(__int64 a1, void *a2, __int64 a3)
{
  if ( !*(_QWORD *)(a3 + 2016)
    && (void (__noreturn *)())PsQueryThreadStartAddress((__int64)a2, 0) == PopIrpWorkerControl )
  {
    ObfReferenceObject(a2);
    *(_QWORD *)(a3 + 2016) = a2;
  }
  return 0LL;
}
