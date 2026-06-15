/*
 * XREFs of ?DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ @ 0x1800A8BC4
 * Callers:
 *     ?Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800A8F40 (-Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800AB3F0 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1800AE49C (WPP_SF_qq.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPerEndpointVolumeAudioSession::DestroyVolumeStrip(CPerEndpointVolumeAudioSession *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v5; // [rsp+40h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 992);
  v5 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      36LL,
      &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
      this,
      *((_QWORD *)this + 129));
  }
  v2 = *((_QWORD *)this + 129);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 240LL))(v2, (char *)this + 984);
    v3 = *((_QWORD *)this + 129);
    if ( v3 )
    {
      *((_QWORD *)this + 129) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
}
