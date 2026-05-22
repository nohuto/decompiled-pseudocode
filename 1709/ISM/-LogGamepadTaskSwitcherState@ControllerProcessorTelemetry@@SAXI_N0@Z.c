/*
 * XREFs of ?LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z @ 0x180042318
 * Callers:
 *     ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GamepadButtons@Input@Gaming@Windows@@PEA_N@Z @ 0x180042B10 (-ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GamepadButtons@Input@Gaming@Windows.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ControllerProcessorTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x18004218C (-Provider@ControllerProcessorTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall ControllerProcessorTelemetry::LogGamepadTaskSwitcherState(
        int a1,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  const struct _TlgProvider_t *v5; // r10
  int v6; // [rsp+38h] [rbp-19h] BYREF
  int v7; // [rsp+3Ch] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  int *v9; // [rsp+68h] [rbp+17h]
  __int64 v10; // [rsp+70h] [rbp+1Fh]
  int *v11; // [rsp+78h] [rbp+27h]
  __int64 v12; // [rsp+80h] [rbp+2Fh]
  int *v13; // [rsp+88h] [rbp+37h]
  __int64 v14; // [rsp+90h] [rbp+3Fh]
  int v15; // [rsp+B8h] [rbp+67h] BYREF

  v15 = a1;
  v5 = ControllerProcessorTelemetry::Provider();
  if ( *(_DWORD *)v5 > 5u
    && (*((_QWORD *)v5 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v5 + 3) & 0x400000000000LL) == *((_QWORD *)v5 + 3) )
  {
    v10 = 4LL;
    v9 = &v15;
    v6 = a2;
    v11 = &v6;
    v7 = a3;
    v13 = &v7;
    v12 = 4LL;
    v14 = 4LL;
    TlgWrite(v5, &unk_1800EDD7B, 0LL, 0LL, 5u, &pData);
  }
}
