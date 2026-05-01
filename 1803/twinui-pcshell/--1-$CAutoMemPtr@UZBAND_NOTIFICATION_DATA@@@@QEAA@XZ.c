/*
 * XREFs of ??1?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@QEAA@XZ @ 0x1800F8D74
 * Callers:
 *     _CImmersiveMode::_ScheduleListenerNotification_::_1_::dtor$0 @ 0x1800B24D7 (_CImmersiveMode--_ScheduleListenerNotification_--_1_--dtor$0.c)
 * Callees:
 *     ??_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z @ 0x1800F8CCC (--_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z.c)
 */

void **__fastcall CAutoMemPtr<ZBAND_NOTIFICATION_DATA>::~CAutoMemPtr<ZBAND_NOTIFICATION_DATA>(void ***a1)
{
  void **result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(result);
  return result;
}
