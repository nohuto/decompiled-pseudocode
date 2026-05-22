/*
 * XREFs of _dynamic_atexit_destructor_for__WGIRawInputProvider::s_spInstance__ @ 0x1800D2920
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@GazeProcessor@@UEAAKXZ @ 0x180003410 (-Release@GazeProcessor@@UEAAKXZ.c)
 */

__int64 dynamic_atexit_destructor_for__WGIRawInputProvider::s_spInstance__()
{
  GazeProcessor *v0; // rcx
  __int64 result; // rax

  v0 = WGIRawInputProvider::s_spInstance;
  if ( WGIRawInputProvider::s_spInstance )
  {
    WGIRawInputProvider::s_spInstance = 0LL;
    return GazeProcessor::Release(v0);
  }
  return result;
}
