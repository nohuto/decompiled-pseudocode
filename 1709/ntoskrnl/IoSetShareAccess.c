/*
 * XREFs of IoSetShareAccess @ 0x140546FC0
 * Callers:
 *     <none>
 * Callees:
 *     IoSetLinkShareAccess @ 0x140547630 (IoSetLinkShareAccess.c)
 */

void __stdcall IoSetShareAccess(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess)
{
  IoSetLinkShareAccess(DesiredAccess, DesiredShareAccess, (_DWORD)FileObject, (_DWORD)ShareAccess, 0LL, 0);
}
