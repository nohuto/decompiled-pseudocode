/*
 * XREFs of ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00C7BDC
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

void __fastcall RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded(RIMLOCKExclusiveIfNeeded *this)
{
  if ( *(_QWORD *)this )
  {
    RIMUnlockExclusive();
    *(_QWORD *)this = 0LL;
  }
}
