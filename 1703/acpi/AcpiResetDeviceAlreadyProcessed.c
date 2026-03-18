/*
 * XREFs of AcpiResetDeviceAlreadyProcessed @ 0x1C004BB58
 * Callers:
 *     AcpiDeviceResetCompleteResetWorker @ 0x1C004B4A0 (AcpiDeviceResetCompleteResetWorker.c)
 *     AcpiDeviceResetInvokeReset @ 0x1C004B8D4 (AcpiDeviceResetInvokeReset.c)
 *     AcpiPlatformLevelDeviceReset @ 0x1C004BA68 (AcpiPlatformLevelDeviceReset.c)
 * Callees:
 *     <none>
 */

char __fastcall AcpiResetDeviceAlreadyProcessed(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 i; // rax

  v2 = a1 + 48;
  for ( i = *(_QWORD *)(a2 + 48); ; i = *(_QWORD *)(i + 8) )
  {
    if ( i == v2 )
      return 0;
    if ( *(_QWORD *)(i - 8) == *(_QWORD *)(a2 + 32) )
      break;
  }
  return 1;
}
