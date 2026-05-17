/*
 * XREFs of RtlDestroyQueryDebugBuffer @ 0x180077F50
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D3200 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     sub_180077F84 @ 0x180077F84 (sub_180077F84.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 */

__int64 __fastcall RtlDestroyQueryDebugBuffer(_QWORD *a1)
{
  sub_180077F84(a1, 0LL, 0LL, 0LL);
  ZwClose(*a1);
  ZwUnmapViewOfSection(-1LL);
  return 0LL;
}
