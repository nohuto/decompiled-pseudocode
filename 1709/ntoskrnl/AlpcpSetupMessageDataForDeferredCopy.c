/*
 * XREFs of AlpcpSetupMessageDataForDeferredCopy @ 0x140465CF0
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140465410 (AlpcpAcceptConnectPort.c)
 *     AlpcpFormatConnectionRequest @ 0x140466208 (AlpcpFormatConnectionRequest.c)
 * Callees:
 *     AlpcpAvailableBufferSize @ 0x14043CC74 (AlpcpAvailableBufferSize.c)
 *     AlpcpCaptureMessageData @ 0x140571974 (AlpcpCaptureMessageData.c)
 */

__int64 __fastcall AlpcpSetupMessageDataForDeferredCopy(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int16 a4,
        char a5,
        char a6)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // r10d

  if ( !a5 )
  {
    if ( (a3 & 0xC0000000) == 0x80000000 )
      a2 += 24LL;
    else
      a2 += 40LL;
  }
  if ( a6 && a2 + (unsigned __int64)a4 > 0x7FFFFFFF0000LL )
    return 3221225477LL;
  *(_QWORD *)(a1 + 176) = a2;
  v7 = AlpcpAvailableBufferSize(a1);
  if ( v8 > v7 )
    return (unsigned int)AlpcpCaptureMessageData(v9, v8, 0LL);
  return v10;
}
