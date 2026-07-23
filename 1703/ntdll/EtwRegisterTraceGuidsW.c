/*
 * XREFs of EtwRegisterTraceGuidsW @ 0x18001A200
 * Callers:
 *     EtwRegisterTraceGuidsA @ 0x1800882F0 (EtwRegisterTraceGuidsA.c)
 * Callees:
 *     sub_18001A0E4 @ 0x18001A0E4 (sub_18001A0E4.c)
 *     EtwNotificationRegister @ 0x18001B3E0 (EtwNotificationRegister.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall EtwRegisterTraceGuidsW(
        PETW_NOTIFICATION_CALLBACK Callback,
        __int64 a2,
        GUID *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        ULONGLONG *a8)
{
  GUID v9; // xmm0
  char *v10; // rsi
  unsigned __int32 LastErrorValue; // ebx
  ULONGLONG RegHandle; // [rsp+30h] [rbp-38h] BYREF
  GUID Guid; // [rsp+38h] [rbp-30h] BYREF

  if ( !Callback || !a8 || !a3 || a4 > 0x10000 )
  {
    LastErrorValue = 87;
LABEL_10:
    RtlSetLastWin32Error(LastErrorValue);
    return LastErrorValue;
  }
  v9 = *a3;
  *a8 = 0LL;
  Guid = v9;
  v10 = sub_18001A0E4((__int64)Callback, a2, &Guid, a4, a5);
  if ( v10 )
  {
    LastErrorValue = EtwNotificationRegister(&Guid, 2u, Callback, v10, &RegHandle);
    if ( LastErrorValue )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    else
      *a8 = RegHandle;
  }
  else
  {
    LastErrorValue = NtCurrentTeb()->LastErrorValue;
  }
  if ( LastErrorValue )
    goto LABEL_10;
  return LastErrorValue;
}
