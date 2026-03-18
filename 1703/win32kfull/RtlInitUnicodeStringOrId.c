/*
 * XREFs of RtlInitUnicodeStringOrId @ 0x1C00C3BC0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C00C12C0 (xxxUpdateSystemCursorFromRegistry.c)
 *     UpdateSystemCursorPath @ 0x1C00C18E4 (UpdateSystemCursorPath.c)
 *     xxxLoadSysMenu @ 0x1C00C31F4 (xxxLoadSysMenu.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00C5C08 (xxxUpdateSystemIconsFromRegistry.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01B6FA0 (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01B7024 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C020E620 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlInitUnicodeStringOrId(struct _UNICODE_STRING *a1, WCHAR *a2)
{
  if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    RtlInitUnicodeString(a1, a2);
  }
  else
  {
    a1->Buffer = a2;
    *(_DWORD *)&a1->Length = 0;
  }
}
