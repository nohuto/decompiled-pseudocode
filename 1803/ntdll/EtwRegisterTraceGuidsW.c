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
        __int64 a1,
        int a2,
        __int128 *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        _QWORD *a8)
{
  int v8; // ebx
  __int128 v9; // xmm0
  __int64 v10; // rsi
  unsigned int LastErrorValue; // ebx
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+38h] [rbp-30h] BYREF

  v8 = a1;
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
  v10 = sub_180009AA0(a1, a2, (unsigned int)&v14, a4, a5);
  if ( v10 )
  {
    LastErrorValue = EtwNotificationRegister((unsigned int)&v14, 2, v8, v10, (__int64)&v13);
    if ( LastErrorValue )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v10);
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
