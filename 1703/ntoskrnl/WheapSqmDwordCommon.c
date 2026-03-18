/*
 * XREFs of WheapSqmDwordCommon @ 0x1402610EC
 * Callers:
 *     WheapCreateRecordFromGenericErrorData @ 0x1402600C8 (WheapCreateRecordFromGenericErrorData.c)
 *     WheapSqmIncrementDword @ 0x140261194 (WheapSqmIncrementDword.c)
 *     WheapSqmCollectWheaPolicyTelemetry @ 0x140723D2C (WheapSqmCollectWheaPolicyTelemetry.c)
 *     WheapPfaMemoryCheck @ 0x140724354 (WheapPfaMemoryCheck.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x140724BF8 (WheapSqmCollectPshedPluginTelemetry.c)
 *     WheapSqmSetDword @ 0x140724D18 (WheapSqmSetDword.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall WheapSqmDwordCommon(int a1, const EVENT_DESCRIPTOR *a2, int a3, int a4)
{
  int v5; // [rsp+40h] [rbp-19h] BYREF
  int v6; // [rsp+44h] [rbp-15h] BYREF
  int v7; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  void *v9; // [rsp+60h] [rbp+7h]
  __int64 v10; // [rsp+68h] [rbp+Fh]
  int *v11; // [rsp+70h] [rbp+17h]
  __int64 v12; // [rsp+78h] [rbp+1Fh]
  int *v13; // [rsp+80h] [rbp+27h]
  __int64 v14; // [rsp+88h] [rbp+2Fh]

  v5 = a1;
  UserData.Ptr = (ULONGLONG)&v5;
  v6 = a3;
  v9 = &unk_1402C1F80;
  v7 = a4;
  v11 = &v6;
  *(_QWORD *)&UserData.Size = 4LL;
  v13 = &v7;
  v12 = 4LL;
  v14 = 4LL;
  v10 = 16LL;
  return EtwWriteEx((REGHANDLE)WheapDispatchPtr.DriverObject, a2, 0LL, 0, 0LL, 0LL, 4u, &UserData);
}
