/*
 * XREFs of ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C012D7E4
 * Callers:
 *     UnInitializeInputComponents @ 0x1C012EBF8 (UnInitializeInputComponents.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     HMAssignmentUnlock @ 0x1C0037430 (HMAssignmentUnlock.c)
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C0124DC4 (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
 *     ?FreeDelayZoneList@DelayZonePalmRejection@@AEAAXXZ @ 0x1C012C5D8 (-FreeDelayZoneList@DelayZonePalmRejection@@AEAAXXZ.c)
 *     ?ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ @ 0x1C0132950 (-ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ.c)
 */

void __fastcall DelayZonePalmRejection::Uninitialize(__int64 a1, __int64 a2)
{
  DelayZoneTelemetry *v2; // rcx

  if ( DelayZonePalmRejection::s_instance )
  {
    if ( *((_QWORD *)DelayZonePalmRejection::s_instance + 3) )
      HMAssignmentUnlock((__int64 *)DelayZonePalmRejection::s_instance + 3);
    CInpLockGuard::Uninitialize((DelayZonePalmRejection *)((char *)DelayZonePalmRejection::s_instance + 120), a2);
    v2 = (DelayZoneTelemetry *)*((_QWORD *)DelayZonePalmRejection::s_instance + 21);
    if ( v2 )
    {
      DelayZoneTelemetry::ClearInputPanelRects(v2);
      Win32FreePool(*((_QWORD *)DelayZonePalmRejection::s_instance + 21));
      *((_QWORD *)DelayZonePalmRejection::s_instance + 21) = 0LL;
    }
    DelayZonePalmRejection::FreeDelayZoneList(v2);
    Win32FreePool((__int64)DelayZonePalmRejection::s_instance);
    DelayZonePalmRejection::s_instance = 0LL;
  }
}
