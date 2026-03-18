/*
 * XREFs of _PopInternalError @ 0x140271708
 * Callers:
 *     PopWriteHiberPages @ 0x140473A24 (PopWriteHiberPages.c)
 *     PopSaveHiberContext @ 0x140473E20 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x1404741C4 (PopCreateDumpMdl.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
