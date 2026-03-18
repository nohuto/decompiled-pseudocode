/*
 * XREFs of AlpcpAllocateMessage @ 0x1404DCA4C
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x1404DBA50 (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x1404DC5A8 (AlpcpCreateClientPort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1404DD564 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpCreateReserve @ 0x140556174 (AlpcpCreateReserve.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     AlpcpAllocateBlob @ 0x1404D44F8 (AlpcpAllocateBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x140747A28 (AlpcpEnterAllocationEventMessageLog.c)
 */

__int64 __fastcall AlpcpAllocateMessage(char **a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rdx
  char *Blob; // rax
  char *v6; // rdi
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
  Blob = AlpcpAllocateBlob((__int64)&AlpcMessageType, v4, a3);
  v6 = Blob;
  if ( !Blob )
    return 3221225626LL;
  AlpcpLockForCachedReferenceBlob((ULONG_PTR)Blob);
  v8 = *((_DWORD *)v6 + 66);
  memset(v6, 0, 0x118uLL);
  *((_WORD *)v6 + 121) = 40;
  --*((_WORD *)v6 - 15);
  *((_DWORD *)v6 + 66) = v8 & 0x7FFFFFFF;
  do
    v9 = _InterlockedIncrement(&AlpcpNextCallbackId);
  while ( !v9 );
  *((_DWORD *)v6 + 68) = v9;
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterAllocationEventMessageLog(v6);
  *((_WORD *)v6 + 121) = 40;
  result = 0LL;
  *a1 = v6;
  return result;
}
