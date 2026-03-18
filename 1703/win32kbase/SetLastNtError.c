/*
 * XREFs of SetLastNtError @ 0x1C013E9AC
 * Callers:
 *     NtUserLoadKeyboardLayoutEx @ 0x1C00E2E90 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserSystemParametersInfo @ 0x1C00E4870 (NtUserSystemParametersInfo.c)
 * Callees:
 *     <none>
 */

struct _NT_TIB *__fastcall SetLastNtError(NTSTATUS a1)
{
  ULONG v1; // eax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  v1 = RtlNtStatusToDosError(a1);
  return UserSetLastError(v1, v2, v3, v4);
}
