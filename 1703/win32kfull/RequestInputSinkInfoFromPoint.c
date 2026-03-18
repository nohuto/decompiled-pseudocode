/*
 * XREFs of RequestInputSinkInfoFromPoint @ 0x1C0004650
 * Callers:
 *     NtUserCompositionInputSinkViewInstanceIdFromPoint @ 0x1C0004570 (NtUserCompositionInputSinkViewInstanceIdFromPoint.c)
 *     NtUserCompositionInputSinkLuidFromPoint @ 0x1C01D6F80 (NtUserCompositionInputSinkLuidFromPoint.c)
 * Callees:
 *     WakeDIT @ 0x1C0104328 (WakeDIT.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RequestInputSinkInfoFromPoint(__int128 *a1)
{
  unsigned int v2; // edi
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  _OWORD v11[7]; // [rsp+30h] [rbp-78h] BYREF

  v2 = 0;
  while ( gbDIT )
  {
    if ( gbCompositionInputSinkQueryBlockedOnDIT != 1 )
    {
      v3 = *a1;
      gbCompositionInputSinkQueryBlockedOnDIT = 1;
      gInputSinkInfoRetrieval[0] = v3;
      gInputSinkInfoRetrieval[1] = a1[1];
      gInputSinkInfoRetrieval[2] = a1[2];
      gInputSinkInfoRetrieval[3] = a1[3];
      gInputSinkInfoRetrieval[4] = a1[4];
      gInputSinkInfoRetrieval[5] = a1[5];
      gInputSinkInfoRetrieval[6] = a1[6];
      WakeDIT(128LL);
      UserSessionSwitchLeaveCrit();
      KeWaitForSingleObject(gpkeDITCompositionInputSinkQueryResponseEvent, UserRequest, 1, 1u, 0LL);
      EnterCrit(0LL, 1LL);
      v2 = gInputSinkInfoRetrieval[1];
      if ( v2 )
      {
        *a1 = gInputSinkInfoRetrieval[0];
        a1[1] = gInputSinkInfoRetrieval[1];
        a1[2] = gInputSinkInfoRetrieval[2];
        a1[3] = gInputSinkInfoRetrieval[3];
        a1[4] = gInputSinkInfoRetrieval[4];
        a1[5] = gInputSinkInfoRetrieval[5];
        v9 = gInputSinkInfoRetrieval[6];
      }
      else
      {
        memset(v11, 0, sizeof(v11));
        v4 = v11[1];
        *a1 = v11[0];
        v5 = v11[2];
        a1[1] = v4;
        v6 = v11[3];
        a1[2] = v5;
        v7 = v11[4];
        a1[3] = v6;
        v8 = v11[5];
        a1[4] = v7;
        v9 = v11[6];
        a1[5] = v8;
      }
      a1[6] = v9;
      gbCompositionInputSinkQueryBlockedOnDIT = 0;
      if ( gcDITLuidHitTestWaiters )
      {
        KeReleaseSemaphore(gpsemDITLuidHitTestWaiters, 0, gcDITLuidHitTestWaiters, 0);
        gcDITLuidHitTestWaiters = 0;
      }
      return v2;
    }
    ++gcDITLuidHitTestWaiters;
    LeaveCrit();
    KeWaitForSingleObject(gpsemDITLuidHitTestWaiters, UserRequest, 0, 0, 0LL);
    EnterCrit(0LL, 1LL);
  }
  return v2;
}
