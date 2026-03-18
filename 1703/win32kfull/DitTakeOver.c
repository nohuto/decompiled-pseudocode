/*
 * XREFs of DitTakeOver @ 0x1C010989C
 * Callers:
 *     WaitForRitDisEngagement @ 0x1C0109034 (WaitForRitDisEngagement.c)
 * Callees:
 *     AddAndInitRimClient @ 0x1C019F874 (AddAndInitRimClient.c)
 *     InitDitRimIocpSupport @ 0x1C01A0494 (InitDitRimIocpSupport.c)
 */

__int64 __fastcall DitTakeOver(int a1)
{
  char v2; // [rsp+20h] [rbp-28h]

  if ( a1 )
    goto LABEL_6;
  if ( (gdwMitConfig & 4) != 0 )
  {
    if ( (int)CBaseInput::InitializeSensor(gpHidInput) >= 0
      && (int)CBaseInput::RegisterDispatcherObject(gpHidInput, gpIOCPDispatcher) >= 0 )
    {
      CBaseInput::Read(gpHidInput);
LABEL_6:
      EtwTraceDitEngaged();
      return 1LL;
    }
  }
  else if ( (int)AddAndInitRimClient() >= 0 && (int)InitDitRimIocpSupport() >= 0 )
  {
    HIDWORD(aDeviceTemplate[195]) = 64;
    v2 = 0;
    RIMReadInput(
      aDeviceTemplate[152],
      &aDeviceTemplate[201],
      HIDWORD(aDeviceTemplate[195]),
      aDeviceTemplate[159],
      v2,
      &aDeviceTemplate[198],
      &aDeviceTemplate[195],
      &aDeviceTemplate[196]);
    goto LABEL_6;
  }
  return 0LL;
}
