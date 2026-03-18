/*
 * XREFs of ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01B6FA0
 * Callers:
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01B6E5C (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 * Callees:
 *     xxxSetMonitorIcoCurIndex @ 0x1C00C1534 (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C00C1638 (zzzSetSystemImage.c)
 *     UpdateSystemCursorPath @ 0x1C00C18E4 (UpdateSystemCursorPath.c)
 *     xxxClientLoadImage @ 0x1C00C1B44 (xxxClientLoadImage.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00C3BC0 (RtlInitUnicodeStringOrId.c)
 */

void __fastcall Feedback::xxxReplaceArrowWithNullCursor(Feedback *this)
{
  __int64 v1; // rdx
  struct tagCURSOR *Image; // rax
  struct _UNICODE_STRING v3; // [rsp+40h] [rbp-18h] BYREF

  EtwTraceContactVisualizationInfo(4LL);
  RtlInitUnicodeStringOrId(&v3, (WCHAR *)0x7F9E);
  Image = (struct tagCURSOR *)xxxClientLoadImage((char **)&v3, v1, 2u, 0, 0, 64);
  if ( Image )
  {
    zzzSetSystemImage(Image, *(_QWORD *)&gasyscur[4]);
    UpdateSystemCursorPath(0, &v3);
    xxxSetMonitorIcoCurIndex((__int64)&v3, 0, 0LL, 1);
  }
}
