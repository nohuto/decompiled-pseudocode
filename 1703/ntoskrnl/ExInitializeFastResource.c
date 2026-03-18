/*
 * XREFs of ExInitializeFastResource @ 0x1401525C0
 * Callers:
 *     <none>
 * Callees:
 *     ExpInitializeResource @ 0x1401526A0 (ExpInitializeResource.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall ExInitializeFastResource(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  char v2; // di
  unsigned __int8 CurrentIrql; // al

  v2 = BugCheckParameter3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( (BugCheckParameter3 & 0xFFFFFFFE) != 0 )
    KeBugCheckEx(0x1C6u, 0x10uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 0LL);
  ExpInitializeResource();
  *(_WORD *)(BugCheckParameter2 + 26) |= 1u;
  if ( (v2 & 1) != 0 )
    *(_WORD *)(BugCheckParameter2 + 26) |= 0x40u;
  *(_QWORD *)(BugCheckParameter2 + 56) = BugCheckParameter2 + 48;
  *(_QWORD *)(BugCheckParameter2 + 48) = BugCheckParameter2 + 48;
  return ExpAddResourceToSystemResourceList(BugCheckParameter2);
}
