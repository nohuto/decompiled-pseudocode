/*
 * XREFs of RtlWerpReportException_0 @ 0x180003BD8
 * Callers:
 *     RtlWerpReportException @ 0x180003BD0 (RtlWerpReportException.c)
 *     RtlReportExceptionEx @ 0x1800DD4D0 (RtlReportExceptionEx.c)
 *     sub_1800DD9C0 @ 0x1800DD9C0 (sub_1800DD9C0.c)
 * Callees:
 *     sub_180003CFC @ 0x180003CFC (sub_180003CFC.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlWerpReportException_0(
        ULONG ProcessId,
        HANDLE CrashReportSharedMem,
        ULONG Flags,
        PHANDLE CrashVerticalProcessHandle)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  __int64 v8; // rdx
  NTSTATUS result; // eax
  _PORT_MESSAGE ReceiveMessage[35]; // [rsp+20h] [rbp-E0h] BYREF
  _PORT_MESSAGE SendMessageA[35]; // [rsp+5A0h] [rbp+4A0h] BYREF
  unsigned int v12; // [rsp+B90h] [rbp+A90h]
  HANDLE *v13; // [rsp+B98h] [rbp+A98h]

  v4 = (unsigned int)CrashVerticalProcessHandle;
  v5 = *(_QWORD *)&Flags;
  *v13 = 0LL;
  if ( (unsigned int)CrashVerticalProcessHandle > 5 )
    return -1073740757;
  memset(SendMessageA, 0, sizeof(SendMessageA));
  v8 = 0LL;
  SendMessageA[0].u1.Length = 91751760;
  SendMessageA[1].u1.Length = 0x20000000;
  SendMessageA[1].ClientId.UniqueThread = CrashReportSharedMem;
  SendMessageA[1].ClientId.UniqueProcess = (HANDLE)__PAIR64__(ProcessId, v12);
  if ( v5 )
  {
    while ( (unsigned int)v8 < v4 && (unsigned int)v8 < 5 )
    {
      *((_QWORD *)&SendMessageA[1].MessageId + v8) = *(_QWORD *)(v5 + 8 * v8);
      v8 = (unsigned int)(v8 + 1);
    }
  }
  memset(ReceiveMessage, 0, sizeof(ReceiveMessage));
  ReceiveMessage[0].u1.Length = 91751760;
  result = sub_180003CFC(SendMessageA, ReceiveMessage);
  if ( result >= 0 )
  {
    if ( result == 258 )
    {
      return -1073741248;
    }
    else
    {
      *v13 = ReceiveMessage[1].ClientId.UniqueProcess;
      return 0;
    }
  }
  return result;
}
