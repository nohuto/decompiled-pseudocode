/*
 * XREFs of xxxComputeInputSinkInfo @ 0x1C0005124
 * Callers:
 *     EditionHandleMitSignal @ 0x1C00FF5C0 (EditionHandleMitSignal.c)
 *     UserProcessDwmInput @ 0x1C01A12C0 (UserProcessDwmInput.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxComputeInputSinkInfo()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  _OWORD v10[12]; // [rsp+50h] [rbp-C8h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (unsigned int)IsDwmInputThread() )
    DCompHitTest(
      v10,
      HIDWORD(gInputSinkInfoRetrieval[0]),
      0LL,
      *(_QWORD *)((char *)gInputSinkInfoRetrieval + 4),
      0LL,
      0,
      0,
      0LL,
      0LL);
  if ( !LODWORD(gInputSinkInfoRetrieval[1]) )
  {
    memset(v10, 0, 0x70uLL);
    gInputSinkInfoRetrieval[0] = v10[0];
    v4 = v10[2];
    gInputSinkInfoRetrieval[1] = v10[1];
    v5 = v10[3];
    gInputSinkInfoRetrieval[2] = v4;
    v6 = v10[4];
    gInputSinkInfoRetrieval[3] = v5;
    v7 = v10[5];
    gInputSinkInfoRetrieval[4] = v6;
    v8 = v10[6];
    gInputSinkInfoRetrieval[5] = v7;
    gInputSinkInfoRetrieval[6] = v8;
  }
  if ( gbCompositionInputSinkQueryBlockedOnDIT )
    KeSetEvent((PRKEVENT)gpkeDITCompositionInputSinkQueryResponseEvent, 1, 0);
  return UserSessionSwitchLeaveCrit(v1, v0, v2, v3);
}
