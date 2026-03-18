/*
 * XREFs of FsRtlAcknowledgeEcp @ 0x1404E1FF0
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x140065288 (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx @ 0x140066340 (FsRtlCheckOplockEx.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlAcknowledgeEcp(PVOID EcpContext)
{
  *((_DWORD *)EcpContext - 6) |= 8u;
}
