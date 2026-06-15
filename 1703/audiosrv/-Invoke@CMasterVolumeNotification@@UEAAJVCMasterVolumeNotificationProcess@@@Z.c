/*
 * XREFs of ?Invoke@CMasterVolumeNotification@@UEAAJVCMasterVolumeNotificationProcess@@@Z @ 0x180088470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMasterVolumeNotification::Invoke(__int64 a1, __int64 a2, __int64 a3)
{
  return GenerateMediaEvent(*(_QWORD *)(a1 + 8), a2, a3);
}
