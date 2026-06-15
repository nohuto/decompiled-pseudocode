/*
 * XREFs of ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180014620
 * Callers:
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180020EB0 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 * Callees:
 *     ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x18001457C (-PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x18001D440 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     WPP_SF_qdd @ 0x180090C54 (WPP_SF_qdd.c)
 */

__int64 __fastcall CAudioSession::RemoveClientReference(CAudioSession *this, char a2)
{
  char v3; // di
  __int64 (__fastcall *v5)(CPerStreamVolumeAudioSession *__hidden); // rax

  v3 = 0;
  if ( a2 )
    v3 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 119, 0xFFFFFFFF) == 1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 118, 0xFFFFFFFF) == 1 )
  {
    v5 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioSession *__hidden))(*(_QWORD *)this + 296LL);
    if ( v5 == CPerStreamVolumeAudioSession::LastClientReferenceRemoved )
      CPerStreamVolumeAudioSession::LastClientReferenceRemoved(this);
    else
      v5(this);
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 99LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids);
    }
    v3 |= 1u;
  }
  else if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
         && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      100LL,
      &WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
      this,
      *((_DWORD *)this + 118),
      *((_DWORD *)this + 119));
  }
  if ( v3 )
    CAudioSession::PostStateCheckExpirationWork((struct _TP_WORK **)this);
  return 0LL;
}
