/*
 * XREFs of EtwEventWriteStartScenario @ 0x180088410
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x1800047F0 (EtwEventEnabled.c)
 *     sub_180004868 @ 0x180004868 (sub_180004868.c)
 *     EtwEventWrite @ 0x180007400 (EtwEventWrite.c)
 *     EtwEventActivityIdControl @ 0x18006B380 (EtwEventActivityIdControl.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceControl @ 0x18009E210 (ZwTraceControl.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

ULONG __cdecl EtwEventWriteStartScenario(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONG v8; // ebx
  ULONG ReturnLength; // [rsp+30h] [rbp-40h] BYREF
  _QWORD InputBuffer[6]; // [rsp+38h] [rbp-38h] BYREF

  ReturnLength = 0;
  if ( !EventDescriptor )
    return 87;
  if ( !EtwEventEnabled(RegHandle, EventDescriptor) )
    return 6;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  v8 = sub_180004868(RegHandle, InputBuffer);
  if ( !v8 )
  {
    *(EVENT_DESCRIPTOR *)&InputBuffer[1] = *EventDescriptor;
    *(GUID *)&InputBuffer[3] = NtCurrentTeb()->ActivityId;
    if ( _mm_cvtsi128_si32(*(__m128i *)&InputBuffer[3])
      || HIDWORD(InputBuffer[3])
      || LOBYTE(InputBuffer[4])
      || __PAIR16__(BYTE1(InputBuffer[4]), 0) != BYTE2(InputBuffer[4])
      || *(_WORD *)((char *)&InputBuffer[4] + 3)
      || BYTE5(InputBuffer[4])
      || __PAIR16__(BYTE6(InputBuffer[4]), 0) != HIBYTE(InputBuffer[4])
      || (v8 = EtwEventActivityIdControl(3u, (LPGUID)&InputBuffer[3])) == 0
      && (v8 = EtwEventActivityIdControl(2u, (LPGUID)&InputBuffer[3])) == 0 )
    {
      LODWORD(InputBuffer[5]) = 10;
      v8 = EtwEventWrite(RegHandle, EventDescriptor, UserDataCount, UserData);
      ZwTraceControl(EtwWdiScenarioCode, InputBuffer, 0x30u, 0LL, 0, &ReturnLength);
    }
  }
  return v8;
}
