/*
 * XREFs of AudioServerGetEndpointVpoContext$catch$53 @ 0x1800C4505
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A6AEC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall AudioServerGetEndpointVpoContext_catch_53(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 168),
                           (void *)0xC3B,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                           a4);
  return &loc_1800C44AF;
}
