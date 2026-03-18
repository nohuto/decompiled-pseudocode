/*
 * XREFs of MiSynchronousPageWrite @ 0x14017E1C4
 * Callers:
 *     MiZeroPageFileFirstPage @ 0x14063CD20 (MiZeroPageFileFirstPage.c)
 * Callees:
 *     IoSynchronousPageWriteEx @ 0x140048838 (IoSynchronousPageWriteEx.c)
 */

NTSTATUS __fastcall MiSynchronousPageWrite(
        struct _FILE_OBJECT *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  return IoSynchronousPageWriteEx(a1, a2, a3, a4, a5, a6, a7);
}
