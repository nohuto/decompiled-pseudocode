/*
 * XREFs of FsRtlAcknowledgeEcp @ 0x14044D050
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x14005306C (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx @ 0x1400FE350 (FsRtlCheckOplockEx.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlAcknowledgeEcp(PVOID EcpContext)
{
  *((_DWORD *)EcpContext - 6) |= 8u;
}
