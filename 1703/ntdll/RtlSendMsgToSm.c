/*
 * XREFs of RtlSendMsgToSm @ 0x18008E6C0
 * Callers:
 *     <none>
 * Callees:
 *     ZwAlpcSendWaitReceivePort @ 0x1800A6410 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

NTSTATUS __fastcall RtlSendMsgToSm(HANDLE PortHandle, PPORT_MESSAGE SendMessageA)
{
  __int64 v4; // rbx
  int v5; // edi
  CSHORT v6; // ax
  int v7; // edi
  _PORT_MESSAGE *ReceiveMessage; // rax
  NTSTATUS result; // eax
  ULONG_PTR BufferLength; // [rsp+68h] [rbp+10h] BYREF

  if ( SendMessageA[1].u1.Length > 7 )
    return -1073741822;
  v4 = 2LL * (int)SendMessageA[1].u1.Length;
  v5 = *((_DWORD *)&unk_180123740 + 4 * (int)SendMessageA[1].u1.Length + 2);
  memset(SendMessageA, 0, sizeof(_PORT_MESSAGE));
  v6 = *((_WORD *)&unk_180123740 + 4 * v4) + 8;
  BufferLength = 328LL;
  SendMessageA->u1.s1.DataLength = v6;
  SendMessageA->u1.s1.TotalLength = v6 + 40;
  v7 = v5 & 1;
  ReceiveMessage = SendMessageA;
  if ( v7 )
    ReceiveMessage = 0LL;
  result = ZwAlpcSendWaitReceivePort(
             PortHandle,
             v7 == 0 ? 0x20000 : 0,
             SendMessageA,
             0LL,
             ReceiveMessage,
             &BufferLength,
             0LL,
             0LL);
  if ( result >= 0 )
    return SendMessageA[1].u2.ZeroInit;
  return result;
}
