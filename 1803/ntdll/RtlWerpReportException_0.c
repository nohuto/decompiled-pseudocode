/*
 * XREFs of RtlWerpReportException_0 @ 0x1800D67F0
 * Callers:
 *     RtlReportExceptionEx @ 0x1800D69F0 (RtlReportExceptionEx.c)
 *     sub_1800D6EB8 @ 0x1800D6EB8 (sub_1800D6EB8.c)
 *     RtlWerpReportException @ 0x1800D7650 (RtlWerpReportException.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800D7658 @ 0x1800D7658 (sub_1800D7658.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlWerpReportException_0(
        ULONG ProcessId,
        HANDLE CrashReportSharedMem,
        ULONG Flags,
        PHANDLE CrashVerticalProcessHandle)
{
  const void *v4; // rsi
  __int64 v5; // rbx
  NTSTATUS result; // eax
  _PORT_MESSAGE ReceiveMessage[35]; // [rsp+20h] [rbp-E0h] BYREF
  _PORT_MESSAGE SendMessageA[35]; // [rsp+5A0h] [rbp+4A0h] BYREF
  unsigned int v11; // [rsp+B90h] [rbp+A90h]
  HANDLE *v12; // [rsp+B98h] [rbp+A98h]

  v4 = *(const void **)&Flags;
  v5 = (unsigned int)CrashVerticalProcessHandle;
  *v12 = 0LL;
  if ( (unsigned int)CrashVerticalProcessHandle > 5 )
    return -1073740757;
  memset(SendMessageA, 0, sizeof(SendMessageA));
  SendMessageA[1].ClientId.UniqueProcess = (HANDLE)__PAIR64__(ProcessId, v11);
  SendMessageA[0].u1.Length = 91751760;
  SendMessageA[1].u1.Length = 0x20000000;
  SendMessageA[1].ClientId.UniqueThread = CrashReportSharedMem;
  if ( v4 && (_DWORD)v5 )
    memmove(&SendMessageA[1].MessageId, v4, 8 * v5);
  memset(ReceiveMessage, 0, sizeof(ReceiveMessage));
  ReceiveMessage[0].u1.Length = 91751760;
  result = sub_1800D7658(SendMessageA, ReceiveMessage);
  if ( result >= 0 )
  {
    if ( result == 258 )
    {
      return -1073741248;
    }
    else
    {
      *v12 = ReceiveMessage[1].ClientId.UniqueProcess;
      return 0;
    }
  }
  return result;
}
