/*
 * XREFs of CmpUuidCreate @ 0x1405624F4
 * Callers:
 *     CmpInitCmRM @ 0x140561DC4 (CmpInitCmRM.c)
 *     CmpStartRMLogs @ 0x1405E1974 (CmpStartRMLogs.c)
 *     CmpVolumeContextStart @ 0x140651A04 (CmpVolumeContextStart.c)
 *     CmSaveKey @ 0x1407022E4 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1407025D4 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140702BD0 (CmpLoadHiveVolatile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     ExUuidCreate @ 0x14052FD70 (ExUuidCreate.c)
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
