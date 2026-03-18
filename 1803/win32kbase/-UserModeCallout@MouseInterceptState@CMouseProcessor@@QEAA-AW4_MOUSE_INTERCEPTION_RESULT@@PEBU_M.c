/*
 * XREFs of ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0136118
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0133EB4 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C0134C7C (-InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0120440 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
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
  memset(v13, 0, 0xF8uLL);
  v6 = *a2;
  v13[0] = 0x200000000LL;
  v7 = a2[1];
  *(_OWORD *)&v13[1] = v6;
  v8 = a2[2];
  *(_OWORD *)&v13[3] = v7;
  v9 = 0LL;
  *(_OWORD *)&v13[5] = v8;
  v10 = 0uLL;
  memset(&v13[7], 0, 24);
  if ( gpInputExtensibilityCallout )
  {
    InputExtensibilityCallout::CallUserModeLockFree(
      gpInputExtensibilityCallout,
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
