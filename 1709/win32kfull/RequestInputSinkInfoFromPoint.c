/*
 * XREFs of RequestInputSinkInfoFromPoint @ 0x1C0009200
 * Callers:
 *     NtUserCompositionInputSinkViewInstanceIdFromPoint @ 0x1C0009120 (NtUserCompositionInputSinkViewInstanceIdFromPoint.c)
 *     NtUserCompositionInputSinkLuidFromPoint @ 0x1C01E3780 (NtUserCompositionInputSinkLuidFromPoint.c)
 * Callees:
 *     WakeDIT @ 0x1C00FDA3C (WakeDIT.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RequestInputSinkInfoFromPoint(__int128 *a1)
{
  unsigned int v2; // edi
  bool v3; // zf
  __int128 v4; // xmm0
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  _OWORD v14[7]; // [rsp+30h] [rbp-78h] BYREF

  v2 = 0;
  while ( gbDIT )
  {
    if ( gbCompositionInputSinkQueryBlockedOnDIT != 1 )
    {
      v3 = gfMITWaitingForLLHook == 0;
      v4 = *a1;
      gbCompositionInputSinkQueryBlockedOnDIT = 1;
      gInputSinkInfoRetrieval[0] = v4;
      gInputSinkInfoRetrieval[1] = a1[1];
      gInputSinkInfoRetrieval[2] = a1[2];
      gInputSinkInfoRetrieval[3] = a1[3];
      gInputSinkInfoRetrieval[4] = a1[4];
      gInputSinkInfoRetrieval[5] = a1[5];
      gInputSinkInfoRetrieval[6] = a1[6];
      if ( v3 )
      {
        WakeDIT(128LL);
      }
      else
      {
        gfAppWaitingForLLHookSignal = 1;
        KeSetEvent(gpkeComputeInputSinkInfo, 1, 0);
      }
      UserSessionSwitchLeaveCrit(v6, v5);
      KeWaitForSingleObject(*(PVOID *)&WPP_MAIN_CB.DeviceLock.Header.Lock, UserRequest, 1, 1u, 0LL);
      EnterCrit(0LL, 1LL);
      gfAppWaitingForLLHookSignal = 0;
      v2 = gInputSinkInfoRetrieval[1];
      if ( v2 )
      {
        *a1 = gInputSinkInfoRetrieval[0];
        a1[1] = gInputSinkInfoRetrieval[1];
        a1[2] = gInputSinkInfoRetrieval[2];
        a1[3] = gInputSinkInfoRetrieval[3];
        a1[4] = gInputSinkInfoRetrieval[4];
        a1[5] = gInputSinkInfoRetrieval[5];
        v12 = gInputSinkInfoRetrieval[6];
      }
      else
      {
        memset(v14, 0, sizeof(v14));
        v7 = v14[1];
        *a1 = v14[0];
        v8 = v14[2];
        a1[1] = v7;
        v9 = v14[3];
        a1[2] = v8;
        v10 = v14[4];
        a1[3] = v9;
        v11 = v14[5];
        a1[4] = v10;
        v12 = v14[6];
        a1[5] = v11;
      }
      a1[6] = v12;
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
