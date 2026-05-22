/*
 * XREFs of _dynamic_initializer_for__ControllerProcessor::s_controllerCurrentKeyMap__ @ 0x180001520
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 */

__int64 dynamic_initializer_for__ControllerProcessor::s_controllerCurrentKeyMap__()
{
  _DWORD *v0; // rbx
  __int64 v1; // rcx
  __int64 result; // rax

  v0 = &ControllerProcessor::s_controllerCurrentKeyMap;
  memset_0(&ControllerProcessor::s_controllerCurrentKeyMap, 0, 0xC4uLL);
  v1 = 24LL;
  do
  {
    result = (unsigned int)dword_180136550;
    *v0 = dword_180136550;
    v0 += 2;
    --v1;
  }
  while ( v1 );
  return result;
}
