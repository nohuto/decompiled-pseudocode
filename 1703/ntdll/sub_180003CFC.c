/*
 * XREFs of sub_180003CFC @ 0x180003CFC
 * Callers:
 *     RtlWerpReportException_0 @ 0x180003BD8 (RtlWerpReportException_0.c)
 *     RtlReportSilentProcessExit @ 0x180070200 (RtlReportSilentProcessExit.c)
 *     RtlReportSqmEscalation @ 0x1800DDE90 (RtlReportSqmEscalation.c)
 * Callees:
 *     sub_180003EF0 @ 0x180003EF0 (sub_180003EF0.c)
 *     sub_180003F2C @ 0x180003F2C (sub_180003F2C.c)
 *     sub_180004004 @ 0x180004004 (sub_180004004.c)
 *     sub_1800040A0 @ 0x1800040A0 (sub_1800040A0.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQuerySystemInformation @ 0x1800A59C0 (ZwQuerySystemInformation.c)
 *     ZwAlpcConnectPort @ 0x1800A61B0 (ZwAlpcConnectPort.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1800A6410 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_180003CFC(PPORT_MESSAGE SendMessageA, PPORT_MESSAGE ReceiveMessage)
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
  ZeroInit = sub_1800040A0();
  if ( ZeroInit >= 0 )
  {
    ZeroInit = ZwQuerySystemInformation(SystemErrorPortTimeouts, &SystemInformation, 8u, 0LL);
    if ( ZeroInit >= 0 )
    {
      v5 = sub_180004004(SystemInformation);
      ZeroInit = v5;
      if ( v5 >= 0 && v5 != 258 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
        memset(&PortAttributes, 0, sizeof(PortAttributes));
        PortAttributes.MaxMessageLength = 1400LL;
        v6 = sub_180003F2C(
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
          sub_180003EF0(v7);
      }
    }
  }
  if ( PortHandle )
    ZwClose(PortHandle);
  return (unsigned int)ZeroInit;
}
