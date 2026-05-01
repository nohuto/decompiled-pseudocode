/*
 * XREFs of ?DragLeave@CAppViewManager@@UEAAJU_GUID@@UtagPOINT@@@Z @ 0x180040060
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?StartActivity@DragLeave@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x180047758 (-StartActivity@DragLeave@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

__int64 __fastcall CAppViewManager::DragLeave(CAppViewManager *this, struct _GUID *a2, struct tagPOINT a3)
{
  struct tagPOINT v5; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v6[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v7; // [rsp+50h] [rbp-B0h]
  int *v8; // [rsp+58h] [rbp-A8h]
  int *v9; // [rsp+60h] [rbp-A0h]
  int v10; // [rsp+68h] [rbp-98h] BYREF
  char v11; // [rsp+6Ch] [rbp-94h]
  int v12; // [rsp+90h] [rbp-70h] BYREF
  const char *v13; // [rsp+98h] [rbp-68h]
  __int64 v14; // [rsp+A0h] [rbp-60h]
  char v15; // [rsp+A8h] [rbp-58h]
  __int64 v16; // [rsp+B0h] [rbp-50h]
  _BYTE v17[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v18; // [rsp+148h] [rbp+48h]
  __int64 v19; // [rsp+150h] [rbp+50h]
  __int64 v20; // [rsp+158h] [rbp+58h]
  __int64 v21; // [rsp+160h] [rbp+60h]

  v5 = a3;
  v6[1] = 0LL;
  v6[2] = v6;
  v6[3] = 0LL;
  v8 = &v12;
  v7 = 0;
  v9 = &v10;
  v10 = 0;
  v13 = "DragLeave";
  v11 = 0;
  v15 = 0;
  v12 = 0;
  v14 = 0LL;
  v16 = 1LL;
  v18 = 0LL;
  v19 = 0LL;
  memset(v17, 0, sizeof(v17));
  v20 = 0LL;
  v21 = 0LL;
  v6[0] = &CAppViewManagerTelemetry::DragLeave::`vftable';
  CAppViewManagerTelemetry::DragLeave::StartActivity((CAppViewManagerTelemetry::DragLeave *)v6, a2, &v5);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v6, 0);
  v6[0] = &CAppViewManagerTelemetry::DragLeave::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v6);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v6);
  return 0LL;
}
