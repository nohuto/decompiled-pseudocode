/*
 * XREFs of TtmInit @ 0x1405F0520
 * Callers:
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140089610 (ExInitializeResourceLite.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PoRegisterPowerSettingCallback @ 0x1404E8D50 (PoRegisterPowerSettingCallback.c)
 *     TraceLoggingRegisterEx @ 0x1405AB2CC (TraceLoggingRegisterEx.c)
 *     ObCreateObjectTypeEx @ 0x1405C6D8C (ObCreateObjectTypeEx.c)
 */

TLG_STATUS TtmInit()
{
  __int64 v1; // rcx
  const wchar_t *v2; // rax
  int v3; // eax
  const wchar_t *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-39h] BYREF
  __int128 v8[8]; // [rsp+40h] [rbp-29h] BYREF

  if ( TtmpEnabled == 1 )
  {
    memset(v8, 0, 0x78uLL);
    LOWORD(v8[0]) = 120;
    DWORD2(v8[0]) = 400;
    BYTE2(v8[0]) = BYTE2(v8[0]) & 0xF1 | 2;
    HIDWORD(v8[1]) = 2031619;
    *((_QWORD *)&v8[3] + 1) = TtmpOpenQueueHandle;
    v1 = 0x7FFFLL;
    DWORD1(v8[2]) = 512;
    *(_QWORD *)&v8[4] = TtmpCloseQueueHandle;
    *((_QWORD *)&v8[4] + 1) = TtmpDeleteQueue;
    v2 = L"TerminalEventQueue";
    *(__int128 *)((char *)v8 + 12) = TtmpQueueMapping;
    HIDWORD(v8[2]) = 176;
    *(_DWORD *)&UnicodeString.Length = 0;
    UnicodeString.Buffer = 0LL;
    while ( *v2 )
    {
      ++v2;
      if ( !--v1 )
        goto LABEL_11;
    }
    UnicodeString.Buffer = L"TerminalEventQueue";
    UnicodeString.Length = 2 * (0x7FFF - v1);
    UnicodeString.MaximumLength = UnicodeString.Length + 2;
LABEL_11:
    v3 = ObCreateObjectTypeEx(&UnicodeString, v8, 0LL, 128LL, &TtmpQueueObjectType);
    if ( v3 < 0 )
      KeBugCheckEx(0x19Bu, 2uLL, v3, 0LL, 0LL);
  }
  else
  {
    TtmpQueueObjectType = 0LL;
  }
  ExInitializeResourceLite(&TtmpSessionLock);
  PoRegisterPowerSettingCallback(
    0LL,
    &GUID_ACDC_POWER_SOURCE,
    (PPOWER_SETTING_CALLBACK)TtmpDisplayBurstPowerSettingCallback,
    (PVOID)5,
    &TtmpAcDcPowerSettingRegistration);
  PoRegisterPowerSettingCallback(
    0LL,
    &GUID_BATTERY_COUNT,
    (PPOWER_SETTING_CALLBACK)TtmpDisplayBurstPowerSettingCallback,
    (PVOID)0x10,
    &TtmpBatteryCountPowerSettingRegistration);
  TtmpSession = 0LL;
  if ( TtmpEnabled == 1 )
  {
    if ( !TtmpProximityEscapeMsec )
      TtmpProximityEscapeMsec = 3000;
    memset(v8, 0, 0x78uLL);
    LOWORD(v8[0]) = 120;
    DWORD2(v8[0]) = 400;
    BYTE2(v8[0]) = BYTE2(v8[0]) & 0xF1 | 6;
    v4 = L"Terminal";
    HIDWORD(v8[1]) = 2031619;
    *((_QWORD *)&v8[3] + 1) = TtmpOpenTerminalHandle;
    *(_QWORD *)&v8[4] = TtmpCloseTerminalHandle;
    *((_QWORD *)&v8[4] + 1) = TtmpDeleteTerminal;
    v5 = 0x7FFFLL;
    *(__int128 *)((char *)v8 + 12) = TtmpTerminalMapping;
    DWORD1(v8[2]) = 512;
    HIDWORD(v8[2]) = 280;
    *(_DWORD *)&UnicodeString.Length = 0;
    UnicodeString.Buffer = 0LL;
    while ( *v4 )
    {
      ++v4;
      if ( !--v5 )
        goto LABEL_20;
    }
    UnicodeString.Buffer = L"Terminal";
    UnicodeString.Length = 2 * (0x7FFF - v5);
    UnicodeString.MaximumLength = UnicodeString.Length + 2;
LABEL_20:
    v6 = ObCreateObjectTypeEx(&UnicodeString, v8, 0LL, 0LL, &TtmpTerminalObjectType);
    if ( v6 < 0 )
      KeBugCheckEx(0x19Bu, 1uLL, v6, 0LL, 0LL);
  }
  else
  {
    TtmpTerminalObjectType = 0LL;
  }
  return TraceLoggingRegisterEx(&stru_1407F37A0, (TLG_PENABLECALLBACK)TtmpTraceLoggingCallback, 0LL);
}
