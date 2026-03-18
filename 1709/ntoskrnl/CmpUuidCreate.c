/*
 * XREFs of CmpUuidCreate @ 0x14050AF74
 * Callers:
 *     CmpInitCmRM @ 0x14050A840 (CmpInitCmRM.c)
 *     CmpStartRMLogs @ 0x1405D7350 (CmpStartRMLogs.c)
 *     CmSaveKey @ 0x14069D3CC (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14069D67C (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14069DCAC (CmpLoadHiveVolatile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     ExUuidCreate @ 0x14050B7E0 (ExUuidCreate.c)
 */

NTSTATUS __fastcall CmpUuidCreate(UUID *Uuid)
{
  NTSTATUS result; // eax
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    result = ExUuidCreate(Uuid);
    if ( result != -1073741267 )
      break;
    Interval.QuadPart = -10000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
