/*
 * XREFs of ??_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z @ 0x1800F8CCC
 * Callers:
 *     ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x1800267AC (-_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ.c)
 *     ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x1800269E0 (-ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z.c)
 *     ??1?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@QEAA@XZ @ 0x1800F8D74 (--1-$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(void **this)
{
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(this + 1);
  operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
