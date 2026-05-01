/*
 * XREFs of ??1SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@XZ @ 0x1800F81FC
 * Callers:
 *     _CApplicationManager::OnMessage_::_1_::dtor$14 @ 0x1800B3BF4 (_CApplicationManager--OnMessage_--_1_--dtor$14.c)
 *     _CIAMSpecialWindowBase::s_SpecialMsgWndProc_::_1_::dtor$14 @ 0x1800B5E74 (_CIAMSpecialWindowBase--s_SpecialMsgWndProc_--_1_--dtor$14.c)
 *     ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1800F0A40 (-_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication.c)
 *     _CApplicationManager::_SendServiceAvailabilityChangedNotification_::_1_::dtor$1 @ 0x1800F0B4B (_CApplicationManager--_SendServiceAvailabilityChangedNotification_--_1_--dtor$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall SERVICE_AVAILABILITY_CHANGED_DATA::~SERVICE_AVAILABILITY_CHANGED_DATA(
        void **this,
        const struct std::nothrow_t *a2)
{
  operator delete(this[3], a2);
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(this + 1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
}
