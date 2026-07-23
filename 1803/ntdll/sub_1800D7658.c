/*
 * XREFs of sub_1800D7658 @ 0x1800D7658
 * Callers:
 *     RtlReportSilentProcessExit @ 0x180048200 (RtlReportSilentProcessExit.c)
 *     RtlWerpReportException_0 @ 0x1800D67F0 (RtlWerpReportException_0.c)
 *     RtlReportSqmEscalation @ 0x1800D7320 (RtlReportSqmEscalation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQuerySystemInformation @ 0x18009B180 (ZwQuerySystemInformation.c)
 *     ZwAlpcConnectPort @ 0x18009B990 (ZwAlpcConnectPort.c)
 *     ZwAlpcSendWaitReceivePort @ 0x18009BBF0 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800D785C @ 0x1800D785C (sub_1800D785C.c)
 *     sub_1800D7904 @ 0x1800D7904 (sub_1800D7904.c)
 *     sub_1800D7A54 @ 0x1800D7A54 (sub_1800D7A54.c)
 *     sub_1800D7D5C @ 0x1800D7D5C (sub_1800D7D5C.c)
 */

__int64 __fastcall sub_1800D7658(PPORT_MESSAGE SendMessageA, PPORT_MESSAGE ReceiveMessage)
{
  int ZeroInit; // ebx
  int v5; // eax
  int v6; // eax
  PSID v7; // rdi
  char v8; // dl
  LARGE_INTEGER *Timeout; // r14
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  int Flags; // [rsp+20h] [rbp-E0h]
  int RequiredServerSid; // [rsp+28h] [rbp-D8h]
  int ConnectionMessage; // [rsp+30h] [rbp-D0h]
  int BufferLength; // [rsp+38h] [rbp-C8h]
  int OutMessageAttributes; // [rsp+40h] [rbp-C0h]
  int InMessageAttributes; // [rsp+48h] [rbp-B8h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int SystemInformation; // [rsp+68h] [rbp-98h] BYREF
  int v21; // [rsp+6Ch] [rbp-94h]
  HANDLE PortHandle; // [rsp+70h] [rbp-90h] BYREF
  PSID v23; // [rsp+78h] [rbp-88h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR v25; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+D0h] [rbp-30h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  PortHandle = 0LL;
  v23 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  ZeroInit = sub_1800D785C();
  if ( ZeroInit >= 0 )
  {
    ZeroInit = ZwQuerySystemInformation(SystemErrorPortTimeouts, &SystemInformation, 8u, 0LL);
    if ( ZeroInit >= 0 )
    {
      v5 = sub_1800D7904(SystemInformation);
      ZeroInit = v5;
      if ( v5 >= 0 && v5 != 258 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
        memset(&PortAttributes, 0, sizeof(PortAttributes));
        PortAttributes.MaxMessageLength = 1400LL;
        v6 = sub_1800D7A54(
               &IdentifierAuthority,
               Flags,
               RequiredServerSid,
               ConnectionMessage,
               BufferLength,
               OutMessageAttributes,
               InMessageAttributes,
               (__int64)&v23);
        v7 = v23;
        ZeroInit = v6;
        if ( v6 >= 0 )
        {
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          ObjectAttributes.Length = 48;
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          if ( v21 == -1 )
          {
            v8 = 1;
          }
          else
          {
            v8 = 0;
            v24 = -10000LL * v21;
          }
          Timeout = (LARGE_INTEGER *)&v24;
          if ( v8 )
            Timeout = 0LL;
          v10 = ZwAlpcConnectPort(
                  &PortHandle,
                  &DestinationString,
                  &ObjectAttributes,
                  &PortAttributes,
                  0x20000u,
                  v23,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  Timeout);
          ZeroInit = v10;
          if ( v10 >= 0 && v10 != 258 )
          {
            v25 = 1400LL;
            v11 = ZwAlpcSendWaitReceivePort(PortHandle, 0x20000u, SendMessageA, 0LL, ReceiveMessage, &v25, 0LL, Timeout);
            ZeroInit = v11;
            if ( v11 >= 0 && v11 != 258 )
            {
              ZeroInit = 0;
              if ( (ReceiveMessage[1].u2.ZeroInit & 0x80000000) != 0 )
                ZeroInit = ReceiveMessage[1].u2.ZeroInit;
            }
          }
        }
        if ( v7 )
          sub_1800D7D5C(v7);
      }
    }
  }
  if ( PortHandle )
    ZwClose(PortHandle);
  return (unsigned int)ZeroInit;
}
