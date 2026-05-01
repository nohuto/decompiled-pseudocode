/*
 * XREFs of ?RmpSystemCloseHandle@@YAXPEAX@Z @ 0x180061608
 * Callers:
 *     ?HampSystemGenerateLegacyHangReport@@YAJPEAKKW4_HAM_TERMINATE_REASON@@@Z @ 0x180041624 (-HampSystemGenerateLegacyHangReport@@YAJPEAKKW4_HAM_TERMINATE_REASON@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RmpSystemCloseHandle(HANDLE Handle)
{
  return NtClose(Handle);
}
