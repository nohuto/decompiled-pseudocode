/*
 * XREFs of IoUpdateShareAccess @ 0x14056F020
 * Callers:
 *     <none>
 * Callees:
 *     IoUpdateLinkShareAccess @ 0x14056F040 (IoUpdateLinkShareAccess.c)
 */

void __stdcall IoUpdateShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoUpdateLinkShareAccess(FileObject, ShareAccess, 0LL);
}
