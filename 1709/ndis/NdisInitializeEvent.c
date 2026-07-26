/*
 * XREFs of NdisInitializeEvent @ 0x1C001E0D0
 * Callers:
 *     ndisMInitializeMiniportBlock @ 0x1C00BF61C (ndisMInitializeMiniportBlock.c)
 *     ndisSetOpenToTranslationMode @ 0x1C010C50C (ndisSetOpenToTranslationMode.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisInitializeEvent(PNDIS_EVENT Event)
{
  KeInitializeEvent(&Event->Event, NotificationEvent, 0);
}
