/*
 * XREFs of RtlGetNtProductType @ 0x1400F9570
 * Callers:
 *     IoFillDumpHeader @ 0x1401F5874 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x1401F89B0 (KeCapturePersistentThreadState.c)
 *     MmWriteTriageInformation @ 0x14021B7B0 (MmWriteTriageInformation.c)
 *     RtlGetVersion @ 0x140541B60 (RtlGetVersion.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14054A09C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     RtlRestoreBootStatusDefaults @ 0x140723458 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1405D25B4 (RtlpGetNtProductTypeFromRegistry.c)
 */

BOOLEAN __stdcall RtlGetNtProductType(PNT_PRODUCT_TYPE ProductType)
{
  BOOLEAN v2; // bl
  _NT_PRODUCT_TYPE v3; // eax

  if ( PsIsCurrentThreadInServerSilo() )
  {
    v2 = 1;
    v3 = *(_DWORD *)(*((_QWORD *)PsGetServerSiloGlobals(-1LL) + 138) + 16LL);
    goto LABEL_4;
  }
  v2 = 1;
  if ( MEMORY[0xFFFFF78000000268] )
  {
    v3 = MEMORY[0xFFFFF78000000264];
LABEL_4:
    *ProductType = v3;
    return v2;
  }
  if ( KeGetCurrentIrql() > 1u || (int)RtlpGetNtProductTypeFromRegistry(ProductType) < 0 )
  {
    *ProductType = NtProductWinNt;
    return 0;
  }
  return v2;
}
