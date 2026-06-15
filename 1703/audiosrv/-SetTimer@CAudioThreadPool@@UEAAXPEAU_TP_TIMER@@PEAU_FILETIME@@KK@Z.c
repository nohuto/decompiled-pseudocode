/*
 * XREFs of ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180024230
 * Callers:
 *     ?CancelInactiveTimer@CAudioSession@@AEAAXXZ @ 0x180014400 (-CancelInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     ?StartInactiveTimer@CAudioSession@@AEAAXXZ @ 0x1800144B0 (-StartInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180016FF0 (-LockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180017144 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18001D5D0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::SetTimer(
        CAudioThreadPool *this,
        struct _TP_TIMER *a2,
        struct _FILETIME *a3,
        DWORD a4,
        DWORD a5)
{
  SetThreadpoolTimer(a2, a3, a4, a5);
}
