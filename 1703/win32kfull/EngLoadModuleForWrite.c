/*
 * XREFs of EngLoadModuleForWrite @ 0x1C026A730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE __stdcall EngLoadModuleForWrite(LPWSTR pwsz, ULONG cjSizeOfModule)
{
  if ( !cjSizeOfModule )
    cjSizeOfModule = -1;
  return (HANDLE)LoadModuleWorkHorse((char *)pwsz, cjSizeOfModule);
}
