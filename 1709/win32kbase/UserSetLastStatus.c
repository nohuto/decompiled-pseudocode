/*
 * XREFs of UserSetLastStatus @ 0x1C013DE24
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0004370 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserGetDpiForMonitor @ 0x1C005AA50 (NtUserGetDpiForMonitor.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00EA4E0 (NtUserSetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall UserSetLastStatus(NTSTATUS Status)
{
  NTSTATUS v2; // ebx
  struct _NT_TIB *result; // rax
  __int64 v4; // rcx
  ULONG v5; // eax

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
    if ( PsGetCurrentProcessWow64Process(v4) )
      HIDWORD(KeGetPcr()->NtTib.Self[200].Self) = Status;
    v5 = RtlNtStatusToDosError(v2);
    return UserSetLastError(v5);
  }
  return result;
}
