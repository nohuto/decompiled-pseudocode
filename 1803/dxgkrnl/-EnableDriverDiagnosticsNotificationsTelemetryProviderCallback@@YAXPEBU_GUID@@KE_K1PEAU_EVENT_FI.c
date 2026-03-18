/*
 * XREFs of ?EnableDriverDiagnosticsNotificationsTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0001390
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00F9E10 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

void __fastcall EnableDriverDiagnosticsNotificationsTelemetryProviderCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  struct DXGGLOBAL *Global; // rax
  int v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+24h] [rbp-24h]
  int v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+2Ch] [rbp-1Ch]

  if ( ControlCode == 1 )
  {
    v8 = 0;
    v6 = MatchAnyKeyword & 3;
    v5 = 1;
    v7 = -4;
    Global = DXGGLOBAL::GetGlobal();
    *((_DWORD *)Global + 437) = v6;
    DXGGLOBAL::IterateAdaptersWithCallback(Global, UpdateDiagnosticAdapterCallback, &v5, 2LL);
  }
}
