/*
 * XREFs of ?PeoplePaneViewChanged_@CommonPeopleTelemetry@@QEBAXW4PeoplePaneViewChange@@@Z @ 0x18010FFD8
 * Callers:
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x180113B94 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CommonPeopleTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800AC01C (-Provider@CommonPeopleTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall CommonPeopleTelemetry::PeoplePaneViewChanged_(__int64 a1, int a2)
{
  const struct _TlgProvider_t *v3; // rax
  int v5; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v3 = CommonPeopleTelemetryLogging::Provider();
  if ( *(_DWORD *)v3 > 5u
    && (*((_QWORD *)v3 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v3 + 3) & 0x200000000000LL) == *((_QWORD *)v3 + 3) )
  {
    v9 = 0;
    v7 = &v5;
    v5 = a2;
    v8 = 4;
    LODWORD(v3) = TlgWrite(v3, &unk_1802604B1, 0LL, 0LL, 3u, &pData);
  }
  return (int)v3;
}
