/*
 * XREFs of ?Show@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ @ 0x1800CA1D4
 * Callers:
 *     ?Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@@Z @ 0x1800CC838 (-Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperie.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@TouchpadControllerExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800C98BC (-Provider@TouchpadControllerExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::Show(
        TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *this)
{
  const struct _TlgProvider_t *v2; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v2 = TouchpadControllerExperienceManagerLogging::Provider();
  if ( *(_DWORD *)v2 > 5u
    && (*((_QWORD *)v2 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v2 + 3) & 0x400000000000LL) == *((_QWORD *)v2 + 3) )
  {
    TlgWrite(v2, &unk_18025D7D0, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 2u, &pData);
  }
}
