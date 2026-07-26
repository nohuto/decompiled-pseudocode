/*
 * XREFs of ?ndisPdAwmDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00773F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ?ndisTriggerPDDrainNotification@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C0077480 (-ndisTriggerPDDrainNotification@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 */

void __fastcall ndisPdAwmDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( (unsigned __int8)byte_1C0099624 >= 5u )
    WPP_SF_q(0x21u, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, DeferredContext[6]);
  *((_BYTE *)DeferredContext + 62) = 0;
  ndisTriggerPDDrainNotification((ULONG_PTR)DeferredContext);
}
