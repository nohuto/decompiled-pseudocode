/*
 * XREFs of _ATL::CAtlMap_IAudioStreamInfo_____ptr64_Sarm::CStreamResource_ATL::CElementTraits_IAudioStreamInfo_____ptr64__ATL::CElementTraits_Sarm::CStreamResource___::NewNode_::_1_::catch$2 @ 0x1800F3774
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800657A3 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::CAtlMap_IAudioStreamInfo_____ptr64_Sarm::CStreamResource_ATL::CElementTraits_IAudioStreamInfo_____ptr64__ATL::CElementTraits_Sarm::CStreamResource___::NewNode_::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 96);
  v4 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v4 + 104) = *(_QWORD *)(v3 + 64);
  *(_QWORD *)(v3 + 64) = v4;
  throw;
}
