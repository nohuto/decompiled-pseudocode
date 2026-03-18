/*
 * XREFs of SetLastNtError @ 0x1C013DE08
 * Callers:
 *     NtUserLoadKeyboardLayoutEx @ 0x1C00E95B0 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserSystemParametersInfo @ 0x1C00EA7B0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall SetLastNtError(NTSTATUS a1)
{
  ULONG v1; // eax

  v1 = RtlNtStatusToDosError(a1);
  return UserSetLastError(v1);
}
