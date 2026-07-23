/*
 * XREFs of RtlDestroyQueryDebugBuffer @ 0x180077F50
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D3200 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     sub_180077F84 @ 0x180077F84 (sub_180077F84.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __cdecl RtlDestroyQueryDebugBuffer(PRTL_DEBUG_INFORMATION Buffer)
{
  sub_180077F84(Buffer, 0LL, 0LL, 0LL);
  ZwClose(Buffer->SectionHandleClient);
  ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, Buffer);
  return 0;
}
