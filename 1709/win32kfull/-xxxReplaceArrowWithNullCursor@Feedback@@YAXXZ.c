/*
 * XREFs of ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01BC2FC
 * Callers:
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01BC1B8 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 * Callees:
 *     xxxSetMonitorIcoCurIndex @ 0x1C0051864 (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C0051988 (zzzSetSystemImage.c)
 *     UpdateSystemCursorPath @ 0x1C0051C30 (UpdateSystemCursorPath.c)
 *     xxxClientLoadImage @ 0x1C00522F0 (xxxClientLoadImage.c)
 *     RtlInitUnicodeStringOrId @ 0x1C007C7DC (RtlInitUnicodeStringOrId.c)
 */

void __fastcall Feedback::xxxReplaceArrowWithNullCursor(Feedback *this)
{
  __int64 v1; // rdx
  struct tagCURSOR *Image; // rax
  struct _UNICODE_STRING v3; // [rsp+40h] [rbp-18h] BYREF

  EtwTraceContactVisualizationInfo(4LL);
  RtlInitUnicodeStringOrId(&v3, (WCHAR *)0x7F9E);
  Image = (struct tagCURSOR *)xxxClientLoadImage((void **)&v3, v1, 2u, 0, 0, 0x40u);
  if ( Image )
  {
    zzzSetSystemImage(Image, *(_QWORD *)&gasyscur[4]);
    UpdateSystemCursorPath(0, &v3);
    xxxSetMonitorIcoCurIndex((int)&v3, 0, 0);
  }
}
