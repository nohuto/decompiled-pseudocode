/*
 * XREFs of ?OnKeyPress@KeyboardProcessorTelemetry@@QEAAX_N@Z @ 0x18004966C
 * Callers:
 *     ?OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180049430 (-OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall KeyboardProcessorTelemetry::OnKeyPress(KeyboardProcessorTelemetry *this)
{
  int v2; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-40h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)hProvider > 5
    && (qword_18010D060 & 0x200000000000LL) != 0
    && (qword_18010D068 & 0x200000000000LL) == qword_18010D068 )
  {
    v2 = *(_DWORD *)this;
    v4 = &v2;
    v6 = 0;
    v5 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800EDE5C, 0LL, 0LL, 3u, &v3);
  }
  *(_DWORD *)this = 0;
}
