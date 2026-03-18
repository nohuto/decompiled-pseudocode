/*
 * XREFs of IoUpdateShareAccess @ 0x140584850
 * Callers:
 *     <none>
 * Callees:
 *     IoUpdateLinkShareAccess @ 0x140595FB0 (IoUpdateLinkShareAccess.c)
 */

void __stdcall IoUpdateShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoUpdateLinkShareAccess(FileObject, ShareAccess, 0LL);
}
