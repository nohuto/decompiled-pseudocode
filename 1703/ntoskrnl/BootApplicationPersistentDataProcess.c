/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x140811C0C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 *     ExInitSystemPhase2 @ 0x140811750 (ExInitSystemPhase2.c)
 * Callees:
 *     BapdpProcessEtwEvents @ 0x14015964C (BapdpProcessEtwEvents.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BapdpProcessBootMetadata @ 0x140811B90 (BapdpProcessBootMetadata.c)
 *     BapdpProcessEDrvHintInfo @ 0x140811CD8 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140811D68 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x140811DF8 (BapdpProcessWmdResults.c)
 *     BapdpProcessHSTIResults @ 0x140811EE4 (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x140811F74 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140812044 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessSiData @ 0x140812114 (BapdpProcessSiData.c)
 *     BapdpRecordIumStatus @ 0x14081252C (BapdpRecordIumStatus.c)
 */

void __fastcall BootApplicationPersistentDataProcess(__int64 a1)
{
  __int64 v1; // rcx
  PVOID *v2; // rbx
  PVOID *v3; // rax

  if ( (__int64 *)qword_140386CE8 != &qword_140386CE8 )
  {
    if ( (_DWORD)a1 )
    {
      if ( (_DWORD)a1 == 1 )
      {
        BapdpProcessBootMetadata(a1);
        BapdpRecordIumStatus();
        BapdpProcessEtwEvents(v1);
        BapdpProcessHSTIResults();
        v2 = (PVOID *)qword_140386CF0;
        v3 = (PVOID *)*((_QWORD *)qword_140386CF0 + 1);
        if ( *(__int64 **)qword_140386CF0 != &qword_140386CE8 || *v3 != qword_140386CF0 )
          __fastfail(3u);
        while ( 1 )
        {
          qword_140386CF0 = v3;
          *v3 = &qword_140386CE8;
          if ( v2 == (PVOID *)&qword_140386CE8 )
            break;
          ExFreePoolWithTag(v2[2], 0);
          ExFreePoolWithTag(v2, 0);
          v2 = (PVOID *)qword_140386CF0;
          v3 = (PVOID *)*((_QWORD *)qword_140386CF0 + 1);
          if ( *(__int64 **)qword_140386CF0 != &qword_140386CE8 || *v3 != qword_140386CF0 )
            __fastfail(3u);
        }
      }
    }
    else
    {
      BapdpProcessWmdResults();
      BapdpProcessResumeInformation();
      BapdpProcessBitlockerStatus();
      BapdpProcessSiData();
      BapdpProcessEDrvHintInfo();
      BapdpProcessFwUpdateResults();
    }
  }
}
