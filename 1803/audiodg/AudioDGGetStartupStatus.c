/*
 * XREFs of AudioDGGetStartupStatus @ 0x14001B2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AudioDGGetStartupStatus()
{
  if ( hHandle[0] )
    WaitForSingleObjectEx(hHandle[0], 0xFFFFFFFF, 0);
  return (unsigned int)dword_140087F90;
}
