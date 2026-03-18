/*
 * XREFs of IoSetShareAccess @ 0x1404220B0
 * Callers:
 *     <none>
 * Callees:
 *     IoSetShareAccessEx @ 0x140005710 (IoSetShareAccessEx.c)
 */

void __stdcall IoSetShareAccess(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess)
{
  IoSetShareAccessEx(DesiredAccess, DesiredShareAccess, FileObject, ShareAccess, 0LL);
}
