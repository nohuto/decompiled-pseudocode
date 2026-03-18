/*
 * XREFs of ?Connect@RegistrarClient@CoreMessagingK@@CAJXZ @ 0x1C0086B48
 * Callers:
 *     CoreMsgCreatePort @ 0x1C0086608 (CoreMsgCreatePort.c)
 * Callees:
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     ?InitializeMessageAttributes@RegistrarClient@CoreMessagingK@@CAXPEAU_ALPC_MESSAGE_ATTRIBUTES@@_K@Z @ 0x1C0086D1C (-InitializeMessageAttributes@RegistrarClient@CoreMessagingK@@CAXPEAU_ALPC_MESSAGE_ATTRIBUTES@@_K.c)
 *     ?InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z @ 0x1C0086EA8 (-InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 CoreMessagingK::RegistrarClient::Connect(void)
{
  unsigned __int16 v0; // cx
  NTSTATUS v1; // ebx
  const GUID *v2; // r9
  unsigned __int64 v3; // rdx
  NTSTATUS v5; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v6; // [rsp+70h] [rbp-90h] BYREF
  __int128 v7; // [rsp+80h] [rbp-80h] BYREF
  _BYTE SecurityDescriptor[32]; // [rsp+90h] [rbp-70h] BYREF
  PVOID P; // [rsp+B0h] [rbp-50h]
  int v10; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v11; // [rsp+C0h] [rbp-40h]
  __int64 v12; // [rsp+C8h] [rbp-38h]
  int v13; // [rsp+D0h] [rbp-30h]
  __int128 v14; // [rsp+D8h] [rbp-28h]
  int v15; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v16; // [rsp+F0h] [rbp-10h]
  __int128 *v17; // [rsp+F8h] [rbp-8h]
  int v18; // [rsp+100h] [rbp+0h]
  __int128 v19; // [rsp+108h] [rbp+8h]
  _DWORD v20[14]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v21[10]; // [rsp+150h] [rbp+50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1A0h] [rbp+A0h] BYREF
  NTSTATUS *v23; // [rsp+1C0h] [rbp+C0h]
  int v24; // [rsp+1C8h] [rbp+C8h]
  int v25; // [rsp+1CCh] [rbp+CCh]
  _BYTE v26[32]; // [rsp+1D0h] [rbp+D0h] BYREF

  v16 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  *((_QWORD *)&v6 + 1) = L"\\BaseNamedObjects\\CoreMessagingRegistrar";
  v18 = 512;
  v13 = 512;
  LODWORD(v6) = 5374032;
  v7 = v6;
  v19 = 0LL;
  v15 = 48;
  v14 = 0LL;
  v17 = &v7;
  v10 = 48;
  memset(v21, 0, 0x48uLL);
  v0 = CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize;
  LODWORD(v21[0]) = 1114112;
  if ( CoreMessagingK::RegistrarClient::s_MaxSendMessagePayloadSize > CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize )
    v0 = CoreMessagingK::RegistrarClient::s_MaxSendMessagePayloadSize;
  HIDWORD(v21[0]) = 12;
  v21[2] = v0 + 80LL;
  LODWORD(v21[1]) = 1;
  WORD2(v21[1]) = 257;
  v1 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v1 >= 0 )
  {
    v1 = CoreMessagingK::RegistrarClient::InitializeSecurityDescriptor(SecurityDescriptor);
    if ( v1 >= 0 )
    {
      memset(v20, 0, 0x30uLL);
      v20[0] = 3145736;
      LOWORD(v20[1]) = 0x8000;
      *(_QWORD *)&v6 = 48LL;
      CoreMessagingK::RegistrarClient::InitializeMessageAttributes((struct _ALPC_MESSAGE_ATTRIBUTES *)v26, v3);
      v1 = ZwAlpcConnectPortEx(
             &CoreMessagingK::RegistrarClient::s_Port,
             &v15,
             &v10,
             v21,
             0x20000,
             SecurityDescriptor,
             v20,
             &v6,
             v26,
             0LL,
             0LL);
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0x44534D43u);
  P = 0LL;
  v5 = v1;
  if ( dword_1C0188C40 > 5u )
  {
    v25 = 0;
    v23 = &v5;
    v24 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0188C40, &unk_1C016C165, 0LL, v2, 3u, &pData);
  }
  return (unsigned int)v1;
}
