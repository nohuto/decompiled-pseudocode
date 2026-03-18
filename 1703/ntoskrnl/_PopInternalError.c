/*
 * XREFs of _PopInternalError @ 0x140227528
 * Callers:
 *     PopWriteHiberPages @ 0x140405508 (PopWriteHiberPages.c)
 *     PopCreateDumpMdl @ 0x14040572C (PopCreateDumpMdl.c)
 *     PopSaveHiberContext @ 0x140405800 (PopSaveHiberContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
