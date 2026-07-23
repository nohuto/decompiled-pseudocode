/*
 * XREFs of EtwRegisterTraceGuidsW @ 0x1800099D0
 * Callers:
 *     EtwRegisterTraceGuidsA @ 0x180009990 (EtwRegisterTraceGuidsA.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180008390 (RtlSetLastWin32Error.c)
 *     sub_180009AA0 @ 0x180009AA0 (sub_180009AA0.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     EtwNotificationRegister @ 0x1800296B0 (EtwNotificationRegister.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwRegisterTraceGuidsW(
        PETW_NOTIFICATION_CALLBACK Callback,
        int a2,
        GUID *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        ULONGLONG *a8)
{
  GUID v9; // xmm0
  void *v10; // rsi
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
  v10 = (void *)sub_180009AA0((_DWORD)Callback, a2, (unsigned int)&Guid, a4, a5);
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
