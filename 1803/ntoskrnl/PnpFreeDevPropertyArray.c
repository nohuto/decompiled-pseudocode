/*
 * XREFs of PnpFreeDevPropertyArray @ 0x14050AC0C
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x14050AAEC (PiDqQueryEvaluateFilter.c)
 *     PiDqActionDataFree @ 0x14050D648 (PiDqActionDataFree.c)
 *     PiSwProcessRemove @ 0x1405C3D0C (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x1405C41F8 (PiSwDeviceFree.c)
 *     PiSwCompleteCreate @ 0x1405C59F0 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1405C6A7C (PiSwIrpStartCreateWorker.c)
 *     PiSwInterfaceFree @ 0x140735460 (PiSwInterfaceFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x140735684 (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PnpFreeDevProperty @ 0x14050AC68 (PnpFreeDevProperty.c)
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
