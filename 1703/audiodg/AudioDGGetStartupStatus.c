/*
 * XREFs of AudioDGGetStartupStatus @ 0x140001280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AudioDGGetStartupStatus()
{
  if ( *(&hEvent + 1) )
    WaitForSingleObjectEx(*(&hEvent + 1), 0xFFFFFFFF, 0);
  return (unsigned int)dword_140085F88;
}
