/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x140827E84
 * Callers:
 *     ExInitSystemPhase2 @ 0x1408390F8 (ExInitSystemPhase2.c)
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 * Callees:
 *     BapdpProcessEtwEvents @ 0x1401341B8 (BapdpProcessEtwEvents.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     BapdpRecordIumStatus @ 0x140827F50 (BapdpRecordIumStatus.c)
 *     BapdpProcessEDrvHintInfo @ 0x140828050 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x1408280E0 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x140828170 (BapdpProcessWmdResults.c)
 *     BapdpProcessHSTIResults @ 0x14082825C (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x1408282EC (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x1408283BC (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessSiData @ 0x14082848C (BapdpProcessSiData.c)
 *     BapdpProcessBootMetadata @ 0x140828C94 (BapdpProcessBootMetadata.c)
 */

void __fastcall BootApplicationPersistentDataProcess(int a1)
{
  __int64 v1; // rcx
  PVOID *v2; // rbx
  PVOID *v3; // rax

  if ( (__int64 *)qword_1403A2158 != &qword_1403A2158 )
  {
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        BapdpProcessBootMetadata();
        BapdpRecordIumStatus();
        BapdpProcessEtwEvents(v1);
        BapdpProcessHSTIResults();
        v2 = (PVOID *)qword_1403A2160;
        v3 = (PVOID *)*((_QWORD *)qword_1403A2160 + 1);
        if ( *(__int64 **)qword_1403A2160 != &qword_1403A2158 || *v3 != qword_1403A2160 )
          __fastfail(3u);
        while ( 1 )
        {
          qword_1403A2160 = v3;
          *v3 = &qword_1403A2158;
          if ( v2 == (PVOID *)&qword_1403A2158 )
            break;
          ExFreePoolWithTag(v2[2], 0);
          ExFreePoolWithTag(v2, 0);
          v2 = (PVOID *)qword_1403A2160;
          if ( *(__int64 **)qword_1403A2160 == &qword_1403A2158 )
          {
            v3 = (PVOID *)*((_QWORD *)qword_1403A2160 + 1);
            if ( *v3 == qword_1403A2160 )
              continue;
          }
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
