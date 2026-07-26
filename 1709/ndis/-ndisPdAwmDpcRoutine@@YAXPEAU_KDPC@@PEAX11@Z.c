/*
 * XREFs of ?ndisPdAwmDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0076C40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ?ndisTriggerPDDrainNotification@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C0076CD0 (-ndisTriggerPDDrainNotification@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 */

void __fastcall ndisPdAwmDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( (unsigned __int8)byte_1C0098764 >= 5u )
    WPP_SF_q(0x21u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, DeferredContext[6]);
  *((_BYTE *)DeferredContext + 62) = 0;
  ndisTriggerPDDrainNotification((ULONG_PTR)DeferredContext);
}
