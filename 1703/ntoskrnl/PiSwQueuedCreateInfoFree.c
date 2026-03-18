/*
 * XREFs of PiSwQueuedCreateInfoFree @ 0x1406A3448
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x14045FDC0 (PiSwIrpStartCreateWorker.c)
 *     PiSwProcessRemove @ 0x14056D530 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x14056DDEC (PiSwDeviceFree.c)
 *     PiSwCloseDevice @ 0x14056E1C4 (PiSwCloseDevice.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1406A3334 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x1404B9DD0 (PnpFreeDevPropertyArray.c)
 *     PiSwPnPInfoFree @ 0x14056DE7C (PiSwPnPInfoFree.c)
 */

void __fastcall PiSwQueuedCreateInfoFree(void *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  char *v4; // rdx

  v2 = *(void **)a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x57706E50u);
    *(_QWORD *)a1 = 0LL;
  }
  PiSwPnPInfoFree((__int64)a1 + 8);
  v3 = (void *)*((_QWORD *)a1 + 7);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x57706E50u);
    *((_QWORD *)a1 + 7) = 0LL;
  }
  v4 = (char *)*((_QWORD *)a1 + 9);
  if ( v4 )
    PnpFreeDevPropertyArray(*((_DWORD *)a1 + 20), v4, 0x57706E50u);
  ExFreePoolWithTag(a1, 0x57706E50u);
}
