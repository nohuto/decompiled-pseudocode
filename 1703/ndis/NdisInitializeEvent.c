/*
 * XREFs of NdisInitializeEvent @ 0x1C0014480
 * Callers:
 *     ndisMInitializeMiniportBlock @ 0x1C00A9958 (ndisMInitializeMiniportBlock.c)
 *     ndisSetOpenToTranslationMode @ 0x1C010357C (ndisSetOpenToTranslationMode.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisInitializeEvent(PNDIS_EVENT Event)
{
  KeInitializeEvent(&Event->Event, NotificationEvent, 0);
}
