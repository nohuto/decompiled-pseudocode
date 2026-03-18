/*
 * XREFs of VfDisableHalVerifier @ 0x1402A9E48
 * Callers:
 *     IoWriteCrashDump @ 0x140233E8C (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1402359C0 (IopWriteCapsuleTriageDumpToFirmware.c)
 *     VfAllocateCrashDumpRegisters @ 0x140817D40 (VfAllocateCrashDumpRegisters.c)
 *     VfNotifyOfHibernate @ 0x14081982C (VfNotifyOfHibernate.c)
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
