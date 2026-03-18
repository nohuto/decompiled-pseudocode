/*
 * XREFs of AcpiDiagTraceFanStatusChange @ 0x1C0041E80
 * Callers:
 *     ACPIFanFSTCallback @ 0x1C004DC50 (ACPIFanFSTCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     AcpiDiagTraceFanEvent @ 0x1C0041CF0 (AcpiDiagTraceFanEvent.c)
 */

void __fastcall AcpiDiagTraceFanStatusChange(__int64 a1)
{
  int v1; // eax
  int v2; // [rsp+20h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+28h] [rbp-50h] BYREF
  int *v4; // [rsp+48h] [rbp-30h]
  int v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+54h] [rbp-24h]

  v1 = *(_DWORD *)(a1 + 280);
  v6 = 0;
  v2 = v1;
  v5 = 4;
  v4 = &v2;
  AcpiDiagTraceFanEvent(a1, &ACPI_ETW_EVENT_FAN_STATUS_CHANGE, 3u, &v3);
}
