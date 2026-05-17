/*
 * XREFs of EtwRegisterTraceGuidsW @ 0x180065E10
 * Callers:
 *     EtwRegisterTraceGuidsA @ 0x180065DD0 (EtwRegisterTraceGuidsA.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     EtwNotificationRegister @ 0x1800366A0 (EtwNotificationRegister.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     EtwpCreateRegGuidsContext @ 0x180065EE0 (EtwpCreateRegGuidsContext.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

__int64 __fastcall EtwRegisterTraceGuidsW(
        __int64 a1,
        int a2,
        __int128 *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        _QWORD *a8)
{
  __int128 v9; // xmm0
  __int64 RegGuidsContext; // rsi
  unsigned int LastErrorValue; // ebx
  unsigned __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+38h] [rbp-30h] BYREF

  if ( !a1 || !a8 || !a3 || a4 > 0x10000 )
  {
    LastErrorValue = 87;
LABEL_10:
    RtlSetLastWin32Error(LastErrorValue);
    return LastErrorValue;
  }
  v9 = *a3;
  *a8 = 0LL;
  v14 = v9;
  RegGuidsContext = EtwpCreateRegGuidsContext(a1, a2, (unsigned int)&v14, a4, a5);
  if ( RegGuidsContext )
  {
    LastErrorValue = EtwNotificationRegister(&v14, 2u, a1, RegGuidsContext, &v13);
    if ( LastErrorValue )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, RegGuidsContext);
    else
      *a8 = v13;
  }
  else
  {
    LastErrorValue = NtCurrentTeb()->LastErrorValue;
  }
  if ( LastErrorValue )
    goto LABEL_10;
  return LastErrorValue;
}
