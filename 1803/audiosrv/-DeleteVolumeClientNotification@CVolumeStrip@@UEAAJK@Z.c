/*
 * XREFs of ?DeleteVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x1800498F0
 * Callers:
 *     AudioVolumeDeleteMasterVolumeNotification @ 0x180049850 (AudioVolumeDeleteMasterVolumeNotification.c)
 * Callees:
 *     WPP_SF_qd @ 0x1800A1B30 (WPP_SF_qd.c)
 */

__int64 __fastcall CVolumeStrip::DeleteVolumeClientNotification(CVolumeStrip *this)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      23LL,
      &WPP_507d7cb4b14a35034dcca2f146935df3_Traceguids,
      (char *)this - 8);
  }
  return CLockedList<CMasterVolumeNotificationProcess,1,0>::RemoveInterface((LPCRITICAL_SECTION)((char *)this + 16));
}
