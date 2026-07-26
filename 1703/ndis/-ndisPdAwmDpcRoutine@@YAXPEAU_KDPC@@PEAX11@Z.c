/*
 * XREFs of ?ndisPdAwmDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00750D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __fastcall ndisPdAwmDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( (unsigned __int8)byte_1C0092624 >= 5u )
    WPP_SF_q(0x21u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, DeferredContext[6]);
  *((_BYTE *)DeferredContext + 62) = 0;
  ndisTriggerPDDrainNotification((ULONG_PTR)DeferredContext);
}
