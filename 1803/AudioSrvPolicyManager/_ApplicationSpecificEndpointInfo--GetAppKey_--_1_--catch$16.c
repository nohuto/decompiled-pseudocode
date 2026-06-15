/*
 * XREFs of _ApplicationSpecificEndpointInfo::GetAppKey_::_1_::catch$16 @ 0x180037F82
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180019BC4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ApplicationSpecificEndpointInfo::GetAppKey_::_1_::catch_16(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 104) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 840),
                            (void *)0x25F,
                            (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationsp"
                                     "ecificendpointinfo.cpp",
                            a4);
  return &loc_180030E6B;
}
