/*
 * XREFs of _Sarm::CSpatialAudioResourceManager::RegisterForApplicationPolicyChanges_::_1_::catch$42 @ 0x1800C3A9C
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Sarm::CSpatialAudioResourceManager::RegisterForApplicationPolicyChanges_::_1_::catch_42(
        __int64 a1,
        __int64 a2)
{
  wil::details::in1diag3::Return_Hr(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x263,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
    (const char *)0x8007000ELL);
  return &loc_1800C3A64;
}
