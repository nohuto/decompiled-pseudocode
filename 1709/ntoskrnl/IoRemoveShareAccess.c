/*
 * XREFs of IoRemoveShareAccess @ 0x140546FE0
 * Callers:
 *     <none>
 * Callees:
 *     IoRemoveLinkShareAccess @ 0x1405475A0 (IoRemoveLinkShareAccess.c)
 */

void __stdcall IoRemoveShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoRemoveLinkShareAccess(FileObject, ShareAccess, 0LL);
}
