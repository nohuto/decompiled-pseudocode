/*
 * XREFs of RtlGetNtProductType @ 0x1400C4610
 * Callers:
 *     IoFillDumpHeader @ 0x140232D74 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x140235DE0 (KeCapturePersistentThreadState.c)
 *     MmWriteTriageInformation @ 0x140257A18 (MmWriteTriageInformation.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1405419D0 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     RtlGetVersion @ 0x140571860 (RtlGetVersion.c)
 *     RtlRestoreBootStatusDefaults @ 0x140786D28 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetThreadServerSilo @ 0x1400E1718 (PsGetThreadServerSilo.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1405F1140 (RtlpGetNtProductTypeFromRegistry.c)
 */

BOOLEAN __stdcall RtlGetNtProductType(PNT_PRODUCT_TYPE ProductType)
{
  BOOLEAN v2; // bl
  __int64 ThreadServerSilo; // rax
  _QWORD *v5; // rax

  if ( PsIsCurrentThreadInServerSilo() )
  {
    ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
    if ( ThreadServerSilo )
      v5 = *(_QWORD **)(ThreadServerSilo + 1256);
    else
      v5 = &PspHostSiloGlobals;
    v2 = 1;
    *ProductType = *(PNT_PRODUCT_TYPE)(v5[138] + 16LL);
  }
  else
  {
    v2 = 1;
    if ( MEMORY[0xFFFFF78000000268] )
    {
      *ProductType = MEMORY[0xFFFFF78000000264];
    }
    else if ( KeGetCurrentIrql() > 1u || (int)RtlpGetNtProductTypeFromRegistry(ProductType) < 0 )
    {
      *ProductType = NtProductWinNt;
      return 0;
    }
  }
  return v2;
}
