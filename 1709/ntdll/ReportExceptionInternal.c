/*
 * XREFs of ReportExceptionInternal @ 0x180002308
 * Callers:
 *     RtlWerpReportException @ 0x180002300 (RtlWerpReportException.c)
 *     RtlReportExceptionEx @ 0x1800DC850 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DCD18 (RtlReportExceptionHelper.c)
 * Callees:
 *     SendMessageToWERService @ 0x18000242C (SendMessageToWERService.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall ReportExceptionInternal(
        unsigned int a1,
        void *a2,
        const void *a3,
        unsigned int a4,
        unsigned int a5,
        void **a6)
{
  __int64 result; // rax
  _PORT_MESSAGE ReceiveMessage[35]; // [rsp+20h] [rbp-E0h] BYREF
  _PORT_MESSAGE SendMessageA[35]; // [rsp+5A0h] [rbp+4A0h] BYREF

  *a6 = 0LL;
  if ( a4 > 5 )
    return 3221226539LL;
  memset(SendMessageA, 0, sizeof(SendMessageA));
  SendMessageA[1].ClientId.UniqueProcess = (void *)__PAIR64__(a1, a5);
  SendMessageA[0].u1.Length = 91751760;
  SendMessageA[1].u1.Length = 0x20000000;
  SendMessageA[1].ClientId.UniqueThread = a2;
  if ( a3 && a4 )
    memmove(&SendMessageA[1].MessageId, a3, 8LL * a4);
  memset(ReceiveMessage, 0, sizeof(ReceiveMessage));
  ReceiveMessage[0].u1.Length = 91751760;
  result = SendMessageToWERService(SendMessageA, ReceiveMessage);
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)result == 258 )
    {
      return 3221226048LL;
    }
    else
    {
      *a6 = ReceiveMessage[1].ClientId.UniqueProcess;
      return 0LL;
    }
  }
  return result;
}
