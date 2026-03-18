/*
 * XREFs of PnpFreeDevPropertyArray @ 0x140526CC4
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x14052969C (PiDqQueryEvaluateFilter.c)
 *     PiDqActionDataFree @ 0x14052E114 (PiDqActionDataFree.c)
 *     PiSwCompleteCreate @ 0x1405BAE84 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1405BB304 (PiSwIrpStartCreateWorker.c)
 *     PiSwDeviceFree @ 0x1406CDAD4 (PiSwDeviceFree.c)
 *     PiSwInterfaceFree @ 0x1406CDD60 (PiSwInterfaceFree.c)
 *     PiSwProcessRemove @ 0x1406CE2EC (PiSwProcessRemove.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406CE694 (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PnpFreeDevProperty @ 0x140526C84 (PnpFreeDevProperty.c)
 */

void __fastcall PnpFreeDevPropertyArray(unsigned int a1, void *a2, ULONG a3)
{
  __int64 v5; // rbx
  __int64 v6; // rbp

  if ( a1 )
  {
    v5 = (__int64)a2;
    v6 = a1;
    do
    {
      PnpFreeDevProperty(v5, a3);
      v5 += 48LL;
      --v6;
    }
    while ( v6 );
  }
  ExFreePoolWithTag(a2, a3);
}
