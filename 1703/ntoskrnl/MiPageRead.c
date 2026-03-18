/*
 * XREFs of MiPageRead @ 0x14010AFC4
 * Callers:
 *     MiCreateImageFileMap @ 0x1404921D4 (MiCreateImageFileMap.c)
 *     MiPfExecuteReadList @ 0x14053D754 (MiPfExecuteReadList.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __fastcall MiPageRead(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        _QWORD *a3,
        struct _KEVENT *a4,
        struct _IO_STATUS_BLOCK *a5,
        char a6,
        __int64 a7)
{
  return IoPageReadEx(a1, a2, a3, a4, a5, a6, a7);
}
