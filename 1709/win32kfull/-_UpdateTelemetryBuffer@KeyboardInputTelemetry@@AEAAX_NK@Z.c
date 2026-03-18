/*
 * XREFs of ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1C00CEFD4
 * Callers:
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z @ 0x1C00CF124 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00414C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00438A0 (_TlgCreateWsz.c)
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C00CEC84 (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall KeyboardInputTelemetry::_UpdateTelemetryBuffer(
        KeyboardInputTelemetry *this,
        unsigned __int8 a2,
        unsigned int a3)
{
  unsigned int *v3; // rax
  unsigned int v5; // r8d
  __int64 v6; // rdi
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  unsigned int v9; // [rsp+38h] [rbp-19h] BYREF
  _DWORD v10[6]; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp+27h] BYREF
  unsigned int *v13; // [rsp+88h] [rbp+37h]
  int v14; // [rsp+90h] [rbp+3Fh]
  int v15; // [rsp+94h] [rbp+43h]

  v10[5] = -1;
  v3 = v10;
  v10[0] = 10;
  v5 = 0;
  v10[1] = 100;
  v10[2] = 200;
  v10[3] = 500;
  v10[4] = 2000;
  while ( a3 > *v3 )
  {
    ++v5;
    ++v3;
    if ( v5 >= 6 )
      goto LABEL_6;
  }
  v6 = (int)v5 + 6LL * a2;
  if ( (unsigned int)(LODWORD(gKeyboardInputTelemetry[v6 + 5]) + 1) < LODWORD(gKeyboardInputTelemetry[v6 + 5])
    || HIDWORD(gKeyboardInputTelemetry[v6 + 5]) + a3 < HIDWORD(gKeyboardInputTelemetry[v6 + 5]) )
  {
    KeyboardInputTelemetry::_UploadTelemetryData((const WCHAR *)gKeyboardInputTelemetry);
  }
  ++LODWORD(gKeyboardInputTelemetry[v6 + 5]);
  HIDWORD(gKeyboardInputTelemetry[v6 + 5]) += a3;
LABEL_6:
  if ( a3 > 0xC8 && hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, &pszDest);
      v15 = 0;
      v13 = &v9;
      v9 = a3;
      v14 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E8BA2, v7, v8, 4u, &pData);
    }
  }
}
