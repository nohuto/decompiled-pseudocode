/*
 * XREFs of _dynamic_atexit_destructor_for__WGIRawInputProvider::s_spInstance__ @ 0x1800EAC80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@EdgyInputTarget@@UEAAKXZ @ 0x1800031D0 (-Release@EdgyInputTarget@@UEAAKXZ.c)
 */

__int64 dynamic_atexit_destructor_for__WGIRawInputProvider::s_spInstance__()
{
  EdgyInputTarget *v0; // rcx
  __int64 result; // rax

  v0 = WGIRawInputProvider::s_spInstance;
  if ( WGIRawInputProvider::s_spInstance )
  {
    WGIRawInputProvider::s_spInstance = 0LL;
    return EdgyInputTarget::Release(v0);
  }
  return result;
}
