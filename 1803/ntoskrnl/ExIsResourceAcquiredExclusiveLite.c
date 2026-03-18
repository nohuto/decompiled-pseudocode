/*
 * XREFs of ExIsResourceAcquiredExclusiveLite @ 0x1400A4810
 * Callers:
 *     HvpTruncateBins @ 0x14049A080 (HvpTruncateBins.c)
 *     CmpCleanUpKcbValueCache @ 0x1404A99D4 (CmpCleanUpKcbValueCache.c)
 * Callees:
 *     ExIsFastResourceHeldExclusive @ 0x140157D10 (ExIsFastResourceHeldExclusive.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall ExIsResourceAcquiredExclusiveLite(PERESOURCE Resource)
{
  USHORT Flag; // dx
  BOOLEAN v3; // cl
  unsigned __int8 CurrentIrql; // cl

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  }
  if ( (Flag & 1) != 0 )
    return ExIsFastResourceHeldExclusive((ULONG_PTR)Resource);
  v3 = 0;
  if ( (Flag & 0x80u) != 0 )
    return Resource->OwnerEntry.OwnerThread == (_QWORD)KeGetCurrentThread();
  return v3;
}
