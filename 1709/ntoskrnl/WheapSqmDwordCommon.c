/*
 * XREFs of WheapSqmDwordCommon @ 0x14028ACBC
 * Callers:
 *     WheapCreateRecordFromGenericErrorData @ 0x140289C88 (WheapCreateRecordFromGenericErrorData.c)
 *     WheapSqmIncrementDword @ 0x14028AD64 (WheapSqmIncrementDword.c)
 *     WheapSqmCollectWheaPolicyTelemetry @ 0x1407637F0 (WheapSqmCollectWheaPolicyTelemetry.c)
 *     WheapPfaMemoryCheck @ 0x140763E1C (WheapPfaMemoryCheck.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x1407646C0 (WheapSqmCollectPshedPluginTelemetry.c)
 *     WheapSqmSetDword @ 0x1407647E0 (WheapSqmSetDword.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

NTSTATUS __fastcall WheapSqmDwordCommon(int a1, const EVENT_DESCRIPTOR *a2, int a3, int a4)
{
  int v5; // [rsp+40h] [rbp-9h] BYREF
  int v6; // [rsp+44h] [rbp-5h] BYREF
  int v7; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v9; // [rsp+60h] [rbp+17h]
  __int64 v10; // [rsp+68h] [rbp+1Fh]
  int *v11; // [rsp+70h] [rbp+27h]
  __int64 v12; // [rsp+78h] [rbp+2Fh]
  int *v13; // [rsp+80h] [rbp+37h]
  __int64 v14; // [rsp+88h] [rbp+3Fh]

  v5 = a1;
  UserData.Ptr = (ULONGLONG)&v5;
  v6 = a3;
  v9 = &unk_1402DE660;
  v7 = a4;
  v11 = &v6;
  *(_QWORD *)&UserData.Size = 4LL;
  v13 = &v7;
  v12 = 4LL;
  v14 = 4LL;
  v10 = 16LL;
  return EtwWriteEx((REGHANDLE)WheapDispatchPtr.DriverObject, a2, 0LL, 0, 0LL, 0LL, 4u, &UserData);
}
