/*
 * XREFs of UserSetLastStatus @ 0x1C013E9C8
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0004370 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserGetDpiForMonitor @ 0x1C00281A0 (NtUserGetDpiForMonitor.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00E4560 (NtUserSetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall UserSetLastStatus(NTSTATUS Status)
{
  NTSTATUS v2; // ebx
  struct _NT_TIB *result; // rax
  ULONG v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  if ( ((Status >> 16) & 0x1FFFu) - 62 <= 1 )
  {
    v2 = 0;
    if ( Status < 0 )
      v2 = -1073741823;
  }
  else
  {
    v2 = Status;
  }
  result = (struct _NT_TIB *)KeIsAttachedProcess();
  if ( !(_BYTE)result )
  {
    LODWORD(KeGetPcr()->NtTib.Self[83].ArbitraryUserPointer) = Status;
    if ( PsGetCurrentProcessWow64Process() )
      HIDWORD(KeGetPcr()->NtTib.Self[200].Self) = Status;
    v4 = RtlNtStatusToDosError(v2);
    return UserSetLastError(v4, v5, v6, v7);
  }
  return result;
}
