/*
 * XREFs of AlpcpAllocateMessage @ 0x140479EA0
 * Callers:
 *     AlpcpCreateReserve @ 0x14043CDF4 (AlpcpCreateReserve.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140472A18 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x140474A80 (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x1404768A4 (AlpcpCreateClientPort.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140479F80 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpAllocateBlob @ 0x14047C4C0 (AlpcpAllocateBlob.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x1406B112C (AlpcpEnterAllocationEventMessageLog.c)
 */

__int64 __fastcall AlpcpAllocateMessage(ULONG_PTR *a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  ULONG_PTR Blob; // rax
  ULONG_PTR v5; // rdi
  __int64 result; // rax
  int v7; // ebx
  signed __int32 v8; // eax

  if ( a2 )
  {
    if ( a2 < 0x28 )
      return 3221225485LL;
    v3 = a2 + 240;
  }
  else
  {
    v3 = 792LL;
  }
  Blob = AlpcpAllocateBlob(&AlpcMessageType, v3);
  v5 = Blob;
  if ( !Blob )
    return 3221225626LL;
  AlpcpLockForCachedReferenceBlob(Blob);
  v7 = *(_DWORD *)(v5 + 264);
  memset((void *)v5, 0, 0x118uLL);
  *(_WORD *)(v5 + 242) = 40;
  --*(_WORD *)(v5 - 30);
  *(_DWORD *)(v5 + 264) = v7 & 0x7FFFFFFF;
  do
    v8 = _InterlockedIncrement(&AlpcpNextCallbackId);
  while ( !v8 );
  *(_DWORD *)(v5 + 272) = v8;
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterAllocationEventMessageLog(v5);
  *(_WORD *)(v5 + 242) = 40;
  result = 0LL;
  *a1 = v5;
  return result;
}
