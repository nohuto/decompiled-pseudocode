/*
 * XREFs of ?ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C007B33C
 * Callers:
 *     ?ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C007AD24 (-ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_.c)
 *     ?ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C007B288 (-ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007C8EC (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     ndisIovFindVPortByVPortIdInternal @ 0x1C006C958 (ndisIovFindVPortByVPortIdInternal.c)
 *     ?ndisIsTargetNonDefaultVPort@@YAEPEBU_NDIS_OID_REQUEST@@PEAK@Z @ 0x1C007B870 (-ndisIsTargetNonDefaultVPort@@YAEPEBU_NDIS_OID_REQUEST@@PEAK@Z.c)
 */

struct _NDIS_VPORT_BLOCK *__fastcall ndisGetVPortBlockForRequest(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const struct _NDIS_OID_REQUEST *a2)
{
  unsigned __int8 IsTargetNonDefaultVPort; // al
  __int64 v3; // r10
  unsigned int v5; // [rsp+40h] [rbp+18h] BYREF

  IsTargetNonDefaultVPort = ndisIsTargetNonDefaultVPort(a2, &v5);
  return (struct _NDIS_VPORT_BLOCK *)ndisIovFindVPortByVPortIdInternal(v3, IsTargetNonDefaultVPort != 0 ? v5 : 0);
}
