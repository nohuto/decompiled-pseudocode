/*
 * XREFs of AlpcpAllocateMessage @ 0x140466410
 * Callers:
 *     AlpcpCreateClientPort @ 0x140465D6C (AlpcpCreateClientPort.c)
 *     AlpcpFormatConnectionRequest @ 0x140466208 (AlpcpFormatConnectionRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140466D78 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpCreateReserve @ 0x140571730 (AlpcpCreateReserve.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404664F0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpAllocateBlob @ 0x1404A0EE0 (AlpcpAllocateBlob.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x1406DCD08 (AlpcpEnterAllocationEventMessageLog.c)
 */

__int64 __fastcall AlpcpAllocateMessage(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  ULONG_PTR Blob; // rax
  ULONG_PTR v6; // rdi
  __int64 result; // rax
  int v8; // ebx
  signed __int32 v9; // eax

  if ( a2 )
  {
    if ( a2 < 0x28 )
      return 3221225485LL;
    v4 = a2 + 240;
  }
  else
  {
    v4 = 792LL;
  }
  Blob = AlpcpAllocateBlob(&AlpcMessageType, v4, a3);
  v6 = Blob;
  if ( !Blob )
    return 3221225626LL;
  AlpcpLockForCachedReferenceBlob(Blob);
  v8 = *(_DWORD *)(v6 + 264);
  memset((void *)v6, 0, 0x118uLL);
  *(_WORD *)(v6 + 242) = 40;
  --*(_WORD *)(v6 - 30);
  *(_DWORD *)(v6 + 264) = v8 & 0x7FFFFFFF;
  do
    v9 = _InterlockedIncrement(&AlpcpNextCallbackId);
  while ( !v9 );
  *(_DWORD *)(v6 + 272) = v9;
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterAllocationEventMessageLog(v6);
  *(_WORD *)(v6 + 242) = 40;
  result = 0LL;
  *a1 = v6;
  return result;
}
