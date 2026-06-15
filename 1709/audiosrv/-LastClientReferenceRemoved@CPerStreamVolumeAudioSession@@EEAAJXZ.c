/*
 * XREFs of ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x18002CFB0
 * Callers:
 *     ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180018CC0 (-RemoveClientReference@CAudioSession@@UEAAJ_N@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180070514 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180074174 (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180074730 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::LastClientReferenceRemoved(CPerStreamVolumeAudioSession *this)
{
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 114LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids);
  }
  if ( *((_BYTE *)this + 1040) && (int)CPerStreamVolumeAudioSession::OpenSessionPropertyStore(this) >= 0 )
  {
    CPerStreamVolumeAudioSession::PersistSessionConfiguration(this);
    CPerStreamVolumeAudioSession::CloseSessionPropertyStore(this);
  }
  return 0LL;
}
