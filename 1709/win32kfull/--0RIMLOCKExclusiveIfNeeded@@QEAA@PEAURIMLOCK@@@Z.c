/*
 * XREFs of ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00C7BA4
 * Callers:
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C00093EC (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     CleanupHidRequestList @ 0x1C00C4C70 (CleanupHidRequestList.c)
 *     FreeHidTLCInfo @ 0x1C00C6A64 (FreeHidTLCInfo.c)
 *     AllocateAndLinkHidTLCInfo @ 0x1C00C6AC0 (AllocateAndLinkHidTLCInfo.c)
 *     SearchHidTLCInfo @ 0x1C00C6F78 (SearchHidTLCInfo.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C00C7B18 (-CleanupFreedTLCInfo@@YAXXZ.c)
 * Callees:
 *     <none>
 */

RIMLOCKExclusiveIfNeeded *__fastcall RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
        RIMLOCKExclusiveIfNeeded *this,
        struct _KTHREAD **a2)
{
  *(_QWORD *)this = 0LL;
  if ( a2[1] != KeGetCurrentThread() )
  {
    *(_QWORD *)this = a2;
    RIMLockExclusive(a2);
  }
  return this;
}
