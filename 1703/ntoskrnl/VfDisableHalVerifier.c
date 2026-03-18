/*
 * XREFs of VfDisableHalVerifier @ 0x1402504C8
 * Callers:
 *     IoWriteCrashDump @ 0x1401F1224 (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1401F2BDC (IopWriteCapsuleTriageDumpToFirmware.c)
 *     VfAllocateCrashDumpRegisters @ 0x140768EF0 (VfAllocateCrashDumpRegisters.c)
 *     VfNotifyOfHibernate @ 0x14076A9EC (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

ULONG_PTR VfDisableHalVerifier()
{
  ULONG_PTR *i; // rcx
  ULONG_PTR v1; // rdx
  ULONG_PTR result; // rax

  if ( ViVerifyDma )
  {
    ViVerifyDma = 0;
    for ( i = (ULONG_PTR *)ViAdapterList; &ViAdapterList != i; i = (ULONG_PTR *)*i )
    {
      v1 = i[2];
      if ( v1 )
      {
        result = i[6];
        *(_QWORD *)(v1 + 8) = result;
      }
    }
  }
  return result;
}
