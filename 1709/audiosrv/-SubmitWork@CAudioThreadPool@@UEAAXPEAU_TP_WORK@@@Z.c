/*
 * XREFs of ?SubmitWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z @ 0x18001F4F0
 * Callers:
 *     ?OnProcessTerminated@CAudioSession@@UEAAXPEAUIAudioProcess@@@Z @ 0x180018BC0 (-OnProcessTerminated@CAudioSession@@UEAAXPEAUIAudioProcess@@@Z.c)
 *     ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x180018C64 (-PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 *     ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180018CC0 (-RemoveClientReference@CAudioSession@@UEAAJ_N@Z.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x18002C738 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::SubmitWork(CAudioThreadPool *this, struct _TP_WORK *a2)
{
  SubmitThreadpoolWork(a2);
}
