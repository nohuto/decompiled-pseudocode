/*
 * XREFs of ?DragCancel@CAppViewManager@@UEAAJU_GUID@@@Z @ 0x180040770
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x180040DD0 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 *     ?StartActivity@DragCancel@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@@Z @ 0x180047454 (-StartActivity@DragCancel@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::DragCancel(CAppViewManager *this, struct _GUID *a2)
{
  _QWORD v5[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v6; // [rsp+50h] [rbp-B0h]
  int *v7; // [rsp+58h] [rbp-A8h]
  int *v8; // [rsp+60h] [rbp-A0h]
  int v9; // [rsp+68h] [rbp-98h] BYREF
  char v10; // [rsp+6Ch] [rbp-94h]
  int v11; // [rsp+90h] [rbp-70h] BYREF
  const char *v12; // [rsp+98h] [rbp-68h]
  __int64 v13; // [rsp+A0h] [rbp-60h]
  char v14; // [rsp+A8h] [rbp-58h]
  __int64 v15; // [rsp+B0h] [rbp-50h]
  _BYTE v16[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v17; // [rsp+148h] [rbp+48h]
  __int64 v18; // [rsp+150h] [rbp+50h]
  __int64 v19; // [rsp+158h] [rbp+58h]
  __int64 v20; // [rsp+160h] [rbp+60h]

  v5[1] = 0LL;
  v5[2] = v5;
  v5[3] = 0LL;
  v6 = 0;
  v7 = &v11;
  v8 = &v9;
  v9 = 0;
  v10 = 0;
  v14 = 0;
  v11 = 0;
  v12 = "DragCancel";
  v13 = 0LL;
  v15 = 1LL;
  v17 = 0LL;
  v18 = 0LL;
  memset(v16, 0, sizeof(v16));
  v19 = 0LL;
  v20 = 0LL;
  v5[0] = &CAppViewManagerTelemetry::DragCancel::`vftable';
  CAppViewManagerTelemetry::DragCancel::StartActivity((CAppViewManagerTelemetry::DragCancel *)v5, a2);
  CAppViewManager::_ObliterateOperation((CAppViewManager *)((char *)this - 64), a2);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v5, 0);
  v5[0] = &CAppViewManagerTelemetry::DragCancel::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v5);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v5);
  return 0LL;
}
