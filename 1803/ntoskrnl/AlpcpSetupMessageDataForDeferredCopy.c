/*
 * XREFs of AlpcpSetupMessageDataForDeferredCopy @ 0x1404DC52C
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x1404DBA50 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1404DBC58 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     AlpcpAvailableBufferSize @ 0x140489898 (AlpcpAvailableBufferSize.c)
 *     AlpcpCaptureMessageData @ 0x140556F78 (AlpcpCaptureMessageData.c)
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
  __int64 v8; // rcx
  unsigned __int64 v9; // r9
  unsigned int v10; // r10d

  if ( !a5 )
  {
    if ( (a3 & 0xC0000000) == 0x80000000 )
      a2 += 24LL;
    else
      a2 += 40LL;
  }
  if ( a6 && (unsigned __int64)a4 + a2 > 0x7FFFFFFF0000LL )
    return 3221225477LL;
  *(_QWORD *)(a1 + 176) = a2;
  v7 = AlpcpAvailableBufferSize(a1);
  if ( v9 > v7 )
    return (unsigned int)AlpcpCaptureMessageData(v8, v9, 0LL);
  return v10;
}
