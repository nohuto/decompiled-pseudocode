/*
 * XREFs of ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01323E8
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0131324 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C0131A8C (-InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C009A620 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::UserModeCallout(__int64 a1, __int128 *a2, int *a3)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  __int128 v10; // xmm0
  unsigned int v11; // ebx
  _QWORD v13[32]; // [rsp+40h] [rbp-C0h] BYREF

  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  memset(v13, 0, sizeof(v13));
  v6 = *a2;
  v13[0] = 0x300000000LL;
  v7 = a2[1];
  *(_OWORD *)&v13[1] = v6;
  v8 = a2[2];
  *(_OWORD *)&v13[3] = v7;
  v9 = 0LL;
  *(_OWORD *)&v13[5] = v8;
  v10 = 0uLL;
  memset(&v13[7], 0, 24);
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
  {
    InputExtensibilityCallout::CallUserModeLockFree(
      (InputExtensibilityCallout *)WPP_MAIN_CB.Queue.Wcb.DeviceContext,
      (struct _CLIENT_DEVICE_NOTIFICATION *)v13);
    v9 = v13[9];
    v10 = *(_OWORD *)&v13[7];
  }
  *(_OWORD *)a3 = v10;
  *((_QWORD *)a3 + 2) = v9;
  v11 = *a3;
  RIMLockExclusive(a1);
  return v11;
}
