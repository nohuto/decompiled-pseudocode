/*
 * XREFs of MiSynchronousPageWrite @ 0x140150210
 * Callers:
 *     MiZeroPageFileFirstPage @ 0x1405D4E68 (MiZeroPageFileFirstPage.c)
 * Callees:
 *     IoSynchronousPageWriteEx @ 0x140114DBC (IoSynchronousPageWriteEx.c)
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
