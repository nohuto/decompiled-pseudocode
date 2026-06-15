/*
 * XREFs of _Sarm::CEndpointResourcePool::Initialize_::_1_::catch$8 @ 0x1800C439C
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Sarm::CEndpointResourcePool::Initialize_::_1_::catch_8(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::Return_Hr(
    *(wil::details::in1diag3 **)(a2 + 232),
    (void *)0x47,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
    (const char *)0x8007000ELL);
  return &loc_1800C4338;
}
