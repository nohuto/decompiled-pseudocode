/*
 * XREFs of IopSymlinkRegistryCallback @ 0x1405CFFB0
 * Callers:
 *     IopSymlinkRegistryInitCallback @ 0x14014B8A0 (IopSymlinkRegistryInitCallback.c)
 * Callees:
 *     IopSymlinkQueryEnabledClasses @ 0x1405CFFDC (IopSymlinkQueryEnabledClasses.c)
 */

__int64 IopSymlinkRegistryCallback()
{
  __int64 result; // rax

  result = IopSymlinkQueryEnabledClasses(L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\Windows\\FileSystems\\NTFS");
  if ( (int)result < 0 )
    return IopSymlinkQueryEnabledClasses(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\FileSystem");
  return result;
}
