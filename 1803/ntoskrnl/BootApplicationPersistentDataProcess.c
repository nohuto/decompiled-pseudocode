/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x1408A2DC0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 *     ExInitSystemPhase2 @ 0x1408BAC8C (ExInitSystemPhase2.c)
 * Callees:
 *     BapdpProcessEtwEvents @ 0x1401715BC (BapdpProcessEtwEvents.c)
 *     BapdpMarshallBootDataToRegistry @ 0x140171744 (BapdpMarshallBootDataToRegistry.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     BapdpProcessVsmKeyBlobs @ 0x1408A2EC0 (BapdpProcessVsmKeyBlobs.c)
 *     BapdpProcessResumeInformation @ 0x1408A30D8 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x1408A31A8 (BapdpProcessBitlockerStatus.c)
 *     BapdpRegisterWbclData @ 0x1408A3278 (BapdpRegisterWbclData.c)
 *     BapdpProcessHSTIResults @ 0x1408A49CC (BapdpProcessHSTIResults.c)
 *     BapdpProcessWmdResults @ 0x1408A4A5C (BapdpProcessWmdResults.c)
 *     BapdpProcessFwUpdateResults @ 0x1408A4DBC (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessEDrvHintInfo @ 0x1408A4E4C (BapdpProcessEDrvHintInfo.c)
 *     BapdpRecordIumStatus @ 0x1408A5094 (BapdpRecordIumStatus.c)
 *     BapdpProcessBootMetadata @ 0x1408A5460 (BapdpProcessBootMetadata.c)
 */

void __fastcall BootApplicationPersistentDataProcess(int a1)
{
  __int64 v1; // rcx
  PVOID *v2; // rbx
  PVOID *v3; // rax

  if ( (__int64 *)qword_1403E67F8 == &qword_1403E67F8 )
    goto LABEL_12;
  if ( !a1 )
  {
    BapdpProcessWmdResults();
    BapdpProcessResumeInformation();
    BapdpProcessBitlockerStatus();
    BapdpRegisterWbclData(0LL);
    BapdpRegisterWbclData(1LL);
    BapdpProcessVsmKeyBlobs(0LL);
    BapdpProcessEDrvHintInfo();
    BapdpProcessFwUpdateResults();
    return;
  }
  if ( a1 != 1 )
  {
LABEL_12:
    if ( a1 == 2 )
      BapdpProcessVsmKeyBlobs(1LL);
  }
  else
  {
    BapdpProcessBootMetadata();
    BapdpRecordIumStatus();
    BapdpProcessEtwEvents(v1);
    BapdpProcessHSTIResults();
    BapdpMarshallBootDataToRegistry();
    v2 = (PVOID *)qword_1403E6800;
    v3 = (PVOID *)*((_QWORD *)qword_1403E6800 + 1);
    if ( *(__int64 **)qword_1403E6800 != &qword_1403E67F8 || *v3 != qword_1403E6800 )
      __fastfail(3u);
    while ( 1 )
    {
      qword_1403E6800 = v3;
      *v3 = &qword_1403E67F8;
      if ( v2 == (PVOID *)&qword_1403E67F8 )
        break;
      ExFreePoolWithTag(v2[2], 0);
      ExFreePoolWithTag(v2, 0);
      v2 = (PVOID *)qword_1403E6800;
      if ( *(__int64 **)qword_1403E6800 == &qword_1403E67F8 )
      {
        v3 = (PVOID *)*((_QWORD *)qword_1403E6800 + 1);
        if ( *v3 == qword_1403E6800 )
          continue;
      }
      __fastfail(3u);
    }
  }
}
