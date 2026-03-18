/*
 * XREFs of FsRtlIsEcpFromUserMode @ 0x140575AF0
 * Callers:
 *     IopCreateFile @ 0x14053C790 (IopCreateFile.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsEcpFromUserMode(PVOID EcpContext)
{
  return (*((_DWORD *)EcpContext - 6) & 0x10) != 0;
}
