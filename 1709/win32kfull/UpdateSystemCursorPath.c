/*
 * XREFs of UpdateSystemCursorPath @ 0x1C0051C30
 * Callers:
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C00515F0 (xxxUpdateSystemCursorFromRegistry.c)
 *     _LoadCursorsAndIcons @ 0x1C0117120 (_LoadCursorsAndIcons.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01BC2FC (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01BC380 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1C004F784 (RtlUnicodeStringCopy.c)
 *     RtlInitUnicodeStringOrId @ 0x1C007C7DC (RtlInitUnicodeStringOrId.c)
 */

NTSTATUS __fastcall UpdateSystemCursorPath(unsigned int a1, const UNICODE_STRING *a2)
{
  __int64 v2; // r8

  if ( !a2 || ((unsigned __int64)a2->Buffer & 0xFFFFFFFFFFFF0000uLL) == 0 )
    return RtlInitUnicodeStringOrId((char *)&gastrSystemCursorPaths + 16 * a1, (unsigned __int16)(a1 + 100));
  v2 = 2LL * a1;
  *((_QWORD *)&gastrSystemCursorPaths + v2 + 1) = (char *)&gastrSystemCursorBuffers + 520 * a1;
  *((_WORD *)&gastrSystemCursorPaths + 4 * v2 + 1) = 260;
  return RtlUnicodeStringCopy((PUNICODE_STRING)&gastrSystemCursorPaths + a1, a2);
}
