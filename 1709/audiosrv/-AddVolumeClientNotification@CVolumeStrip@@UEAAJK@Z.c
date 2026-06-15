/*
 * XREFs of ?AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x18006C960
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qd @ 0x180067C30 (WPP_SF_qd.c)
 */

__int64 __fastcall CVolumeStrip::AddVolumeClientNotification(CVolumeStrip *this, int a2)
{
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x16u,
      (__int64)&WPP_879f8c7a46163fac74ca54c33ad9d683_Traceguids,
      (char *)this - 8,
      a2);
  }
  return CLockedList<CMasterVolumeNotificationProcess,1,0>::AddInterface(
           (struct _RTL_CRITICAL_SECTION *)((char *)this + 16),
           a2);
}
