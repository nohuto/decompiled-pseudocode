/*
 * XREFs of WmipInitializeAllocs @ 0x1408C90FC
 * Callers:
 *     WMIInitialize @ 0x1408A38C4 (WMIInitialize.c)
 * Callees:
 *     ExInitializePagedLookasideList @ 0x140576040 (ExInitializePagedLookasideList.c)
 */

void WmipInitializeAllocs()
{
  ExInitializePagedLookasideList(&WmipDSChunkInfoLookaside, 0LL, 0LL, 0, 0x78uLL, 0x53446D57u, 0);
  ExInitializePagedLookasideList(&WmipGEChunkInfoLookaside, 0LL, 0LL, 0, 0xA0uLL, 0x45476D57u, 0);
  ExInitializePagedLookasideList(&WmipISChunkInfoLookaside, 0LL, 0LL, 0, 0x60uLL, 0x53496D57u, 0);
  ExInitializePagedLookasideList(&WmipMRChunkInfoLookaside, 0LL, 0LL, 0, 0x38uLL, 0x524D6D57u, 0);
}
