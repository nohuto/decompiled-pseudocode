/*
 * XREFs of RtlGetNtProductType @ 0x14002F6A0
 * Callers:
 *     IoFillDumpHeader @ 0x1401F0144 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x1401F3000 (KeCapturePersistentThreadState.c)
 *     MmWriteTriageInformation @ 0x1402137CC (MmWriteTriageInformation.c)
 *     RtlGetVersion @ 0x140448C50 (RtlGetVersion.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1404A1E64 (IopCreateDefaultDeviceSecurityDescriptor.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1406EBB90 (RtlpGetNtProductTypeFromRegistry.c)
 */

BOOLEAN __stdcall RtlGetNtProductType(PNT_PRODUCT_TYPE ProductType)
{
  BOOLEAN v2; // bl
  _NT_PRODUCT_TYPE v3; // eax

  v2 = 0;
  if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
  {
    v3 = *(_DWORD *)(*(_QWORD *)(PsGetServerSiloGlobals(-1LL) + 1072) + 16LL);
    goto LABEL_4;
  }
  if ( MEMORY[0xFFFFF78000000268] )
  {
    v3 = MEMORY[0xFFFFF78000000264];
LABEL_4:
    *ProductType = v3;
    return 1;
  }
  if ( KeGetCurrentIrql() > 1u || (int)RtlpGetNtProductTypeFromRegistry(ProductType) < 0 )
  {
    *ProductType = NtProductWinNt;
    return v2;
  }
  return 1;
}
