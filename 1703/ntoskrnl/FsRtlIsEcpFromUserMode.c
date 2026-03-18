/*
 * XREFs of FsRtlIsEcpFromUserMode @ 0x14043FB50
 * Callers:
 *     IopCreateFile @ 0x140541AA0 (IopCreateFile.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsEcpFromUserMode(PVOID EcpContext)
{
  return (*((_DWORD *)EcpContext - 6) & 0x10) != 0;
}
