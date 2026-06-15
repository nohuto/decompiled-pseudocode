/*
 * XREFs of wil::details::lambda_call__lambda_212a3e975e0d48c0da9d454bcd816b08___::_lambda_call__lambda_212a3e975e0d48c0da9d454bcd816b08___ @ 0x180098B58
 * Callers:
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$5 @ 0x18006A797 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$5.c)
 * Callees:
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x180042CC0 (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
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
      *(const struct CAudioSessionInstanceId **)(a1 + 8));
    return (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 16) + 16LL))(**(_QWORD **)(a1 + 16));
  }
  return result;
}
