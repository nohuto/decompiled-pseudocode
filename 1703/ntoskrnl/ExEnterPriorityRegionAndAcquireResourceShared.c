/*
 * XREFs of ExEnterPriorityRegionAndAcquireResourceShared @ 0x14008D660
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x14008D210 (PsBoostThreadIoEx.c)
 *     ExpAcquireResourceSharedLite @ 0x14008F610 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceShared @ 0x14014E540 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14014EA10 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

PVOID __fastcall ExEnterPriorityRegionAndAcquireResourceShared(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int16 v3; // ax
  unsigned __int64 v4; // rdx
  __int16 v5; // ax
  unsigned __int8 CurrentIrql; // r8
  void *OwnerEntryForLegacyShim; // rsi

  CurrentThread = KeGetCurrentThread();
  PsBoostThreadIoEx((__int64)CurrentThread, 0, 0, 0LL);
  --CurrentThread->KernelApcDisable;
  v3 = *(_WORD *)(BugCheckParameter2 + 26);
  v4 = (unsigned __int8)v3;
  if ( (v3 & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, BugCheckParameter2, 0LL, 0LL);
  v5 = *(_WORD *)(BugCheckParameter2 + 26) & 1;
  if ( v5 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v4 = (unsigned __int64)KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( (*(_BYTE *)(v4 + 192) & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (*(_DWORD *)(v4 + 116) & 0x400) == 0 && !*(_DWORD *)(v4 + 484) )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( v5 )
  {
    OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
    if ( !(unsigned __int8)ExAcquireFastResourceShared(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim) )
      ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  }
  else
  {
    LOBYTE(v4) = 1;
    ExpAcquireResourceSharedLite(BugCheckParameter2, v4);
  }
  return CurrentThread->WaitBlock[2].SparePtr;
}
