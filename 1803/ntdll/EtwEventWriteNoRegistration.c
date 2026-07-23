/*
 * XREFs of EtwEventWriteNoRegistration @ 0x180082B90
 * Callers:
 *     sub_1800410D4 @ 0x1800410D4 (sub_1800410D4.c)
 *     sub_180043A08 @ 0x180043A08 (sub_180043A08.c)
 *     sub_1800896AC @ 0x1800896AC (sub_1800896AC.c)
 *     sub_1800CB510 @ 0x1800CB510 (sub_1800CB510.c)
 *     sub_1800D785C @ 0x1800D785C (sub_1800D785C.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

ULONG __cdecl EtwEventWriteNoRegistration(
        LPCGUID ProviderId,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONG v4; // ebx
  EVENT_DESCRIPTOR v5; // xmm0
  GUID ActivityId; // xmm0
  NTSTATUS v7; // eax
  _BYTE Fields[4]; // [rsp+20h] [rbp-88h] BYREF
  int v10; // [rsp+24h] [rbp-84h]
  EVENT_DESCRIPTOR v11; // [rsp+48h] [rbp-60h]
  GUID v12; // [rsp+60h] [rbp-48h]
  char v13; // [rsp+70h] [rbp-38h]
  __int16 v14; // [rsp+72h] [rbp-36h]
  ULONG v15; // [rsp+74h] [rbp-34h]
  PEVENT_DATA_DESCRIPTOR v16; // [rsp+78h] [rbp-30h]
  int v17; // [rsp+90h] [rbp-18h]

  v4 = 0;
  if ( !EventDescriptor || !ProviderId )
    return 87;
  v5 = *EventDescriptor;
  v10 = 0;
  v11 = v5;
  v15 = UserDataCount;
  v16 = UserData;
  ActivityId = NtCurrentTeb()->ActivityId;
  v13 = 0;
  v14 = 0;
  v12 = ActivityId;
  v17 = 0;
  v7 = ZwTraceEvent((HANDLE)ProviderId, 0x700u, 0x78u, Fields);
  if ( v7 )
    return RtlNtStatusToDosError(v7);
  return v4;
}
