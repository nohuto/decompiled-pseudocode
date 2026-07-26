/*
 * XREFs of NdisInitializeEvent @ 0x1C0024200
 * Callers:
 *     ndisMInitializeMiniportBlock @ 0x1C00C12F0 (ndisMInitializeMiniportBlock.c)
 *     ndisSetOpenToTranslationMode @ 0x1C010E49C (ndisSetOpenToTranslationMode.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisInitializeEvent(PNDIS_EVENT Event)
{
  KeInitializeEvent(&Event->Event, NotificationEvent, 0);
}
