/*
 * XREFs of AcpiDiagTraceFanRundown @ 0x1C0041DD0
 * Callers:
 *     AcpiDiagTraceControlCallback @ 0x1C00416F0 (AcpiDiagTraceControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     AcpiDiagTraceFanEvent @ 0x1C0041CF0 (AcpiDiagTraceFanEvent.c)
 */

void __fastcall AcpiDiagTraceFanRundown(__int64 a1)
{
  bool v1; // zf
  __int16 v2; // [rsp+20h] [rbp-29h] BYREF
  BOOL v3; // [rsp+24h] [rbp-25h] BYREF
  int v4; // [rsp+28h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-19h] BYREF
  BOOL *v6; // [rsp+50h] [rbp+7h]
  __int64 v7; // [rsp+58h] [rbp+Fh]
  __int16 *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]

  v1 = *(_QWORD *)(a1 + 232) == 0LL;
  v4 = *(_DWORD *)(a1 + 280);
  v3 = !v1;
  v2 = *(_DWORD *)(a1 + 336) == 1;
  v7 = 4LL;
  v6 = &v3;
  v9 = 2LL;
  v8 = &v2;
  v11 = 4LL;
  v10 = &v4;
  AcpiDiagTraceFanEvent(a1, &ACPI_ETW_EVENT_FAN_RUNDOWN, 5u, &v5);
}
