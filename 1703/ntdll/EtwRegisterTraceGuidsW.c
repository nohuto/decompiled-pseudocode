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
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        _QWORD *a8)
{
  int v8; // ebx
  __int128 v9; // xmm0
  char *v10; // rax
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
  v10 = sub_18001A0E4(a1, a2, &v14, a4, a5);
  if ( v10 )
  {
    LastErrorValue = EtwNotificationRegister((unsigned int)&v14, 2, v8, (_DWORD)v10, (__int64)&v13);
    if ( LastErrorValue )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
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
