/*
 * XREFs of ?AddVolumeClientNotification@CVolumeStrip@@QEAAJK@Z @ 0x180017EBC
 * Callers:
 *     AudioVolumeAddMasterVolumeNotification @ 0x18002F330 (AudioVolumeAddMasterVolumeNotification.c)
 * Callees:
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 */

__int64 __fastcall CVolumeStrip::AddVolumeClientNotification(CVolumeStrip *this, int a2)
{
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_e3bea070e28c3377d9986b9fba3066b8_Traceguids, this, a2);
  }
  return CLockedList<CMasterVolumeNotificationProcess,1,0>::AddInterface((LPCRITICAL_SECTION)((char *)this + 8));
}
