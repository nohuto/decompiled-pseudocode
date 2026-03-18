/*
 * XREFs of PnpFreeDevPropertyArray @ 0x1404B9DD0
 * Callers:
 *     PiSwCompleteCreate @ 0x14045F814 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x14045FDC0 (PiSwIrpStartCreateWorker.c)
 *     PiDqActionDataFree @ 0x1404B997C (PiDqActionDataFree.c)
 *     PiDqQueryEvaluateFilter @ 0x1404B9CB0 (PiDqQueryEvaluateFilter.c)
 *     PiSwProcessRemove @ 0x14056D530 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x14056DDEC (PiSwDeviceFree.c)
 *     PiSwInterfaceFree @ 0x1406A3224 (PiSwInterfaceFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406A3448 (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     PnpFreeDevProperty @ 0x1404B9E2C (PnpFreeDevProperty.c)
 */

void __fastcall PnpFreeDevPropertyArray(unsigned int a1, char *a2, ULONG a3)
{
  char *v5; // rbx
  __int64 v6; // rbp

  if ( a1 )
  {
    v5 = a2;
    v6 = a1;
    do
    {
      PnpFreeDevProperty(v5, a3);
      v5 += 48;
      --v6;
    }
    while ( v6 );
  }
  ExFreePoolWithTag(a2, a3);
}
