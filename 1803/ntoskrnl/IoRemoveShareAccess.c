/*
 * XREFs of IoRemoveShareAccess @ 0x140494600
 * Callers:
 *     <none>
 * Callees:
 *     IoRemoveLinkShareAccess @ 0x140494E50 (IoRemoveLinkShareAccess.c)
 */

void __stdcall IoRemoveShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoRemoveLinkShareAccess(FileObject, ShareAccess, 0LL);
}
