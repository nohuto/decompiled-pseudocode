/*
 * XREFs of OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x14000DF50
 * Callers:
 *     NtSetInformationFile @ 0x14004FBC0 (NtSetInformationFile.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400E8090 (NtWaitForWorkViaWorkerFactory.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     NtSetInformationWorkerFactory @ 0x140129BE0 (NtSetInformationWorkerFactory.c)
 *     ObpProcessRemoveObjectQueue @ 0x140428DC0 (ObpProcessRemoveObjectQueue.c)
 *     ObHandleRevocationBlockAddObject @ 0x1406C0BF0 (ObHandleRevocationBlockAddObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 26) & 0x40) == 0 )
    return 0LL;
  v1 = (__int64 *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0x7F]);
  result = *v1;
  if ( !*(_BYTE *)(*v1 + 24) )
    return 0LL;
  return result;
}
