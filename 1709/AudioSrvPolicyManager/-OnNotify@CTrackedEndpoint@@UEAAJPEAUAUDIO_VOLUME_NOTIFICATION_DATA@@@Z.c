/*
 * XREFs of ?OnNotify@CTrackedEndpoint@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x180023C00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTrackedEndpoint::OnNotify(CTrackedEndpoint *this, struct AUDIO_VOLUME_NOTIFICATION_DATA *a2)
{
  int v3; // eax

  if ( !a2 )
    return 2147942487LL;
  *((_DWORD *)this + 24) = LODWORD(a2->fMasterVolume);
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 56LL))(*((_QWORD *)this + 10));
  if ( v3 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_740b5a4498f73e754c5dcce8dd3bcbc7_Traceguids, v3);
  }
  return 0LL;
}
