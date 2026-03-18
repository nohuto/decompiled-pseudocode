/*
 * XREFs of xxxComputeInputSinkInfo @ 0x1C0009CC4
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00A3440 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     EditionHandleMitSignal @ 0x1C00F9D40 (EditionHandleMitSignal.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
LONG xxxComputeInputSinkInfo()
{
  LONG result; // eax
  __int128 v1; // xmm0
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  _OWORD v6[12]; // [rsp+50h] [rbp-C8h] BYREF

  result = IsDwmInputThread();
  if ( result )
    result = DCompHitTest(
               v6,
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
    result = (unsigned int)memset(v6, 0, 0x70uLL);
    gInputSinkInfoRetrieval[0] = v6[0];
    v1 = v6[2];
    gInputSinkInfoRetrieval[1] = v6[1];
    v2 = v6[3];
    gInputSinkInfoRetrieval[2] = v1;
    v3 = v6[4];
    gInputSinkInfoRetrieval[3] = v2;
    v4 = v6[5];
    gInputSinkInfoRetrieval[4] = v3;
    v5 = v6[6];
    gInputSinkInfoRetrieval[5] = v4;
    gInputSinkInfoRetrieval[6] = v5;
  }
  if ( gbCompositionInputSinkQueryBlockedOnDIT )
    return KeSetEvent(*(PRKEVENT *)&WPP_MAIN_CB.DeviceLock.Header.Lock, 1, 0);
  return result;
}
