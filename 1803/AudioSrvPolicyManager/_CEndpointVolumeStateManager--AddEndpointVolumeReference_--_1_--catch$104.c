/*
 * XREFs of _CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::catch$104 @ 0x180037CF8
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180019BC4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::catch_104(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 232),
                           (void *)0xC2,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
                           a4);
  return &loc_18002DDE9;
}
