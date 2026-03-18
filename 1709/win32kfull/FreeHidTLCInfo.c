/*
 * XREFs of FreeHidTLCInfo @ 0x1C00C6A64
 * Callers:
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C00093EC (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     CleanupHidRequestList @ 0x1C00C4C70 (CleanupHidRequestList.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C00C7B18 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     ?DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z @ 0x1C00C8240 (-DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z.c)
 *     ?DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x1C01B5E34 (-DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z.c)
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00C7BA4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00C7BDC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 */

void __fastcall FreeHidTLCInfo(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  _QWORD *v5; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v6, gTLCInfoLock);
  v4 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v5 = (_QWORD *)a1[1], (_QWORD *)*v5 != a1) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  Win32FreePool(a1, v2, v3);
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v6);
}
