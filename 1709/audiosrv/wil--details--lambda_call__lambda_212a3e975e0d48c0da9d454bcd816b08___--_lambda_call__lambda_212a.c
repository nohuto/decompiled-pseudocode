/*
 * XREFs of wil::details::lambda_call__lambda_212a3e975e0d48c0da9d454bcd816b08___::_lambda_call__lambda_212a3e975e0d48c0da9d454bcd816b08___ @ 0x18005BC9C
 * Callers:
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$5 @ 0x180038E29 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$5.c)
 * Callees:
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x180014DDC (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_212a3e975e0d48c0da9d454bcd816b08___::_lambda_call__lambda_212a3e975e0d48c0da9d454bcd816b08___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
      *(_QWORD *)a1 + 64LL,
      *(_QWORD *)(a1 + 8));
    return (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 16) + 16LL))(**(_QWORD **)(a1 + 16));
  }
  return result;
}
