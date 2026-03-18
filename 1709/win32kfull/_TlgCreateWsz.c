/*
 * XREFs of _TlgCreateWsz @ 0x1C00438A0
 * Callers:
 *     ?TraceLoggingHidConfigEvent@@YAXKPEAG0KKUtagRECT@@1@Z @ 0x1C0043748 (-TraceLoggingHidConfigEvent@@YAXKPEAG0KKUtagRECT@@1@Z.c)
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C00CEC84 (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1C00CEFD4 (-_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z.c)
 *     ?TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z @ 0x1C01A2AE0 (-TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z.c)
 *     ?TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z @ 0x1C01D9024 (-TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z.c)
 *     ?LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C020F268 (-LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  LPCWSTR v2; // r8
  __int64 v3; // rax

  v2 = &word_1C02D9FB8;
  LODWORD(v3) = 0;
  if ( pwsz )
  {
    v2 = pwsz;
    v3 = -1LL;
    do
      ++v3;
    while ( pwsz[v3] );
  }
  pDesc->Ptr = (ULONGLONG)v2;
  *(_QWORD *)&pDesc->Size = (unsigned int)(2 * v3 + 2);
}
