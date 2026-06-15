/*
 * XREFs of ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180035E40
 * Callers:
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180007B78 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180007CB4 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?StartInactiveTimer@CAudioSession@@AEAAXXZ @ 0x180034298 (-StartInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180035590 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?CancelInactiveTimer@CAudioSession@@AEAAXXZ @ 0x180046AB8 (-CancelInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     AudioServerDisconnect @ 0x180049220 (AudioServerDisconnect.c)
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
