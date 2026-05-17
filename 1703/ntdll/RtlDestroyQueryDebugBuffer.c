/*
 * XREFs of RtlDestroyQueryDebugBuffer @ 0x1800686C0
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D9E10 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     sub_1800686F4 @ 0x1800686F4 (sub_1800686F4.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 */

__int64 __fastcall RtlDestroyQueryDebugBuffer(_QWORD *a1)
{
  sub_1800686F4(a1, 0LL, 0LL, 0LL);
  ZwClose(*a1);
  ZwUnmapViewOfSection(-1LL, a1);
  return 0LL;
}
