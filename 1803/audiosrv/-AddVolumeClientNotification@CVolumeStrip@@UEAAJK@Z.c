/*
 * XREFs of ?AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x180009360
 * Callers:
 *     AudioVolumeAddMasterVolumeNotification @ 0x1800085F0 (AudioVolumeAddMasterVolumeNotification.c)
 * Callees:
 *     WPP_SF_qd @ 0x1800A1B30 (WPP_SF_qd.c)
 */

__int64 __fastcall CVolumeStrip::AddVolumeClientNotification(CVolumeStrip *this)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      22LL,
      &WPP_507d7cb4b14a35034dcca2f146935df3_Traceguids,
      (char *)this - 8);
  }
  return CLockedList<CMasterVolumeNotificationProcess,1,0>::AddInterface((LPCRITICAL_SECTION)((char *)this + 16));
}
