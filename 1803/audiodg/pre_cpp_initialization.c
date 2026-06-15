/*
 * XREFs of pre_cpp_initialization @ 0x14001BAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateRegistry@CSystemAudioDeviceOffloadGraph@@SAJH@Z @ 0x14001B320 (-UpdateRegistry@CSystemAudioDeviceOffloadGraph@@SAJH@Z.c)
 *     __scrt_set_unhandled_exception_filter @ 0x14001C684 (__scrt_set_unhandled_exception_filter.c)
 */

int pre_cpp_initialization()
{
  int updated; // eax

  _scrt_set_unhandled_exception_filter();
  updated = CSystemAudioDeviceOffloadGraph::UpdateRegistry();
  return o__set_new_mode_0(updated);
}
