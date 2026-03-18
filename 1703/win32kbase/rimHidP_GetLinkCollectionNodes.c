/*
 * XREFs of rimHidP_GetLinkCollectionNodes @ 0x1C00082F0
 * Callers:
 *     RIMRetrieveLinkCollection @ 0x1C000AD38 (RIMRetrieveLinkCollection.c)
 *     RIMIsParallelDevice @ 0x1C000AF88 (RIMIsParallelDevice.c)
 *     RIMDiscoverCustomPTPSettings @ 0x1C01177E4 (RIMDiscoverCustomPTPSettings.c)
 * Callees:
 *     <none>
 */

int __fastcall rimHidP_GetLinkCollectionNodes(
        struct _HIDP_LINK_COLLECTION_NODE *a1,
        unsigned int *a2,
        struct _HIDP_PREPARSED_DATA *a3)
{
  if ( gpfnHidP_GetLinkCollectionNodes )
    return gpfnHidP_GetLinkCollectionNodes(a1, a2, a3);
  else
    return -1073741637;
}
