/*
 * XREFs of rimHidP_GetLinkCollectionNodes @ 0x1C009974C
 * Callers:
 *     RIMRetrieveLinkCollection @ 0x1C000FC08 (RIMRetrieveLinkCollection.c)
 *     RIMIsParallelDevice @ 0x1C000FF9C (RIMIsParallelDevice.c)
 *     RIMDiscoverCustomPTPSettings @ 0x1C01166F0 (RIMDiscoverCustomPTPSettings.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
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
