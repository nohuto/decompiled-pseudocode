/*
 * XREFs of ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1C00CAE7C
 * Callers:
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z @ 0x1C00CAD98 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z.c)
 * Callees:
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C00CAA0C (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall KeyboardInputTelemetry::_UpdateTelemetryBuffer(
        KeyboardInputTelemetry *this,
        unsigned __int8 a2,
        unsigned int a3)
{
  unsigned int *v3; // rax
  __int64 v4; // rcx
  unsigned int v6; // edx
  __int64 v7; // rbx
  KeyboardInputTelemetry *v8; // rcx
  _DWORD v9[6]; // [rsp+20h] [rbp-28h] BYREF

  v9[5] = -1;
  v3 = v9;
  v4 = a2;
  v6 = 0;
  v9[0] = 10;
  v9[1] = 100;
  v9[2] = 200;
  v9[3] = 500;
  v9[4] = 2000;
  while ( a3 > *v3 )
  {
    ++v6;
    ++v3;
    if ( v6 >= 6 )
      return;
  }
  v7 = (int)v6 + 6 * v4;
  v8 = (KeyboardInputTelemetry *)*((unsigned int *)&gKeyboardInputTelemetry + 2 * v7 + 10);
  if ( (int)v8 + 1 < (unsigned int)v8
    || (v8 = (KeyboardInputTelemetry *)*((unsigned int *)&gKeyboardInputTelemetry + 2 * v7 + 11),
        (unsigned int)v8 + a3 < (unsigned int)v8) )
  {
    KeyboardInputTelemetry::_UploadTelemetryData(v8);
  }
  ++*((_DWORD *)&gKeyboardInputTelemetry + 2 * v7 + 10);
  *((_DWORD *)&gKeyboardInputTelemetry + 2 * v7 + 11) += a3;
}
