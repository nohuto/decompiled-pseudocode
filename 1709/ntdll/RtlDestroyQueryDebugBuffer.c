/*
 * XREFs of RtlDestroyQueryDebugBuffer @ 0x180083090
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D9060 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     RtlpChangeQueryDebugBufferTarget @ 0x1800830C4 (RtlpChangeQueryDebugBufferTarget.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall RtlDestroyQueryDebugBuffer(HANDLE *a1)
{
  __int64 v2; // r8

  RtlpChangeQueryDebugBufferTarget(a1, 0LL, 0LL, 0LL);
  NtClose(*a1);
  NtUnmapViewOfSection(-1LL, a1, v2);
  return 0LL;
}
