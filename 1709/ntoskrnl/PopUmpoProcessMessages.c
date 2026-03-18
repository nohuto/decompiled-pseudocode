/*
 * XREFs of PopUmpoProcessMessages @ 0x1400AEC90
 * Callers:
 *     PopUmpoMessageCallback @ 0x1400AEC30 (PopUmpoMessageCallback.c)
 *     PopUmpoInitializeChannel @ 0x1408542AC (PopUmpoInitializeChannel.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x1400AEC50 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x1400AED70 (AlpcInitializeMessageAttribute.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14017E9E0 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopUmpoProcessMessage @ 0x1404DF2D0 (PopUmpoProcessMessage.c)
 */

__int64 PopUmpoProcessMessages()
{
  __int64 result; // rax
  char *MessageAttribute; // rax
  __int64 v2; // [rsp+40h] [rbp-2C8h] BYREF
  __int64 v3; // [rsp+48h] [rbp-2C0h] BYREF
  _DWORD v4[40]; // [rsp+50h] [rbp-2B8h] BYREF
  _BYTE v5[512]; // [rsp+F0h] [rbp-218h] BYREF

  v3 = 0LL;
  memset(v4, 0, sizeof(v4));
  while ( 1 )
  {
    AlpcInitializeMessageAttribute(0x20000000LL, v4, 160LL, &v2);
    v2 = 512LL;
    result = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _BYTE *, __int64 *, _DWORD *, __int64 *))ZwAlpcSendWaitReceivePort)(
               PopAlpcServerPort,
               0LL,
               0LL,
               0LL,
               v5,
               &v2,
               v4,
               &v3);
    if ( (_DWORD)result )
      break;
    MessageAttribute = AlpcGetMessageAttribute(v4, 0x20000000);
    PopUmpoProcessMessage(v5, MessageAttribute);
  }
  return result;
}
