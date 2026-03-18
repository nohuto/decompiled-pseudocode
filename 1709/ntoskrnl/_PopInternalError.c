/*
 * XREFs of _PopInternalError @ 0x14023A308
 * Callers:
 *     PopCreateDumpMdl @ 0x140432A08 (PopCreateDumpMdl.c)
 *     PopSaveHiberContext @ 0x140434F40 (PopSaveHiberContext.c)
 *     PopWriteHiberPages @ 0x140435F04 (PopWriteHiberPages.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
