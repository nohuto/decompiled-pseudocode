/*
 * XREFs of ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C013DBA4
 * Callers:
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C000482C (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     AllocateAndLinkHidTLCInfo @ 0x1C00AFD44 (AllocateAndLinkHidTLCInfo.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C00B12C0 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     ?DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z @ 0x1C00B19E8 (-DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z.c)
 *     SearchHidTLCInfo @ 0x1C00B1BDC (SearchHidTLCInfo.c)
 *     CleanupHidRequestList @ 0x1C011C5E0 (CleanupHidRequestList.c)
 *     ?DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x1C01B2E44 (-DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z.c)
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
