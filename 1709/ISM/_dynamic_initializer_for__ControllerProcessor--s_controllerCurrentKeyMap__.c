/*
 * XREFs of _dynamic_initializer_for__ControllerProcessor::s_controllerCurrentKeyMap__ @ 0x180001430
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800CAA5E (memset.c)
 */

__int64 dynamic_initializer_for__ControllerProcessor::s_controllerCurrentKeyMap__()
{
  _DWORD *v0; // rbx
  __int64 v1; // rcx
  __int64 result; // rax

  v0 = &ControllerProcessor::s_controllerCurrentKeyMap;
  memset(&ControllerProcessor::s_controllerCurrentKeyMap, 0, 0xC4uLL);
  v1 = 24LL;
  do
  {
    result = (unsigned int)dword_18010F130;
    *v0 = dword_18010F130;
    v0 += 2;
    --v1;
  }
  while ( v1 );
  return result;
}
