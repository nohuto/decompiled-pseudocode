/*
 * XREFs of ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800ABCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800418F8 (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004197C (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180041C14 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 */

void __fastcall CPerStreamVolumeAudioSession::OnPersistanceTimerElapsed(
        struct _TP_CALLBACK_INSTANCE *a1,
        const wchar_t **a2,
        struct _TP_WORK *a3)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x74u,
      (__int64)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
      a2[91]);
  }
  if ( a2[135] )
  {
    CPerStreamVolumeAudioSession::StopSessionPersistanceTimer((CPerStreamVolumeAudioSession *)a2);
    CPerStreamVolumeAudioSession::PersistSessionConfiguration((CPerStreamVolumeAudioSession *)a2);
    CPerStreamVolumeAudioSession::CloseSessionPropertyStore((CPerStreamVolumeAudioSession *)a2);
  }
  CUnknown::Release((CUnknown *)(a2 + 4));
}
