/*
 * XREFs of IoCheckShareAccessEx @ 0x1405F4120
 * Callers:
 *     <none>
 * Callees:
 *     IoCheckLinkShareAccess @ 0x1404951C0 (IoCheckLinkShareAccess.c)
 */

NTSTATUS __stdcall IoCheckShareAccessEx(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess,
        BOOLEAN Update,
        PBOOLEAN WritePermission)
{
  unsigned int v6; // eax

  if ( !WritePermission || (v6 = 0x80000000, *WritePermission) )
    v6 = 0;
  return IoCheckLinkShareAccess(
           DesiredAccess,
           DesiredShareAccess,
           (__int64)FileObject,
           &ShareAccess->OpenCount,
           0LL,
           v6 | (Update != 0));
}
