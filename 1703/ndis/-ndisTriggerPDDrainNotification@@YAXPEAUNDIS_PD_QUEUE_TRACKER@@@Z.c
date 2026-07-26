/*
 * XREFs of ?ndisTriggerPDDrainNotification@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C0075160
 * Callers:
 *     ?ndisPdAwmDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00750D0 (-ndisPdAwmDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     NdisMTriggerPDDrainNotification @ 0x1C00756D0 (NdisMTriggerPDDrainNotification.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C00505FC (ndisBugCheckEx.c)
 */

void __fastcall ndisTriggerPDDrainNotification(ULONG_PTR BugCheckParameter3)
{
  if ( _InterlockedExchange((volatile __int32 *)(BugCheckParameter3 + 56), 0) != 1 )
    ndisBugCheckEx(0x23uLL, 3uLL, BugCheckParameter3, *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 32) + 48LL));
  if ( (unsigned __int8)byte_1C0092624 >= 5u )
    WPP_SF_q(0x1Fu, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, *(_QWORD *)(BugCheckParameter3 + 48));
  KeSetEvent(*(PRKEVENT *)(BugCheckParameter3 + 64), 2, 0);
}
