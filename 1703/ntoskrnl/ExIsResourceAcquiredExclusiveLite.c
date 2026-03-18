/*
 * XREFs of ExIsResourceAcquiredExclusiveLite @ 0x14000BB90
 * Callers:
 *     CmpCleanUpKcbValueCache @ 0x140491380 (CmpCleanUpKcbValueCache.c)
 *     HvpTruncateBins @ 0x1404B7E28 (HvpTruncateBins.c)
 * Callees:
 *     ExIsFastResourceHeldExclusive @ 0x14014D230 (ExIsFastResourceHeldExclusive.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall ExIsResourceAcquiredExclusiveLite(PERESOURCE Resource)
{
  USHORT Flag; // dx
  BOOLEAN result; // al
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 CurrentIrql; // r8

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  result = Flag & 1;
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  }
  if ( (Flag & 1) != 0 )
    return ExIsFastResourceHeldExclusive((ULONG_PTR)Resource);
  CurrentThread = KeGetCurrentThread();
  if ( (Flag & 0x80u) != 0 && (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
    return 1;
  return result;
}
