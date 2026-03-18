/*
 * XREFs of CoreMsgCreatePort @ 0x1C0069DD8
 * Callers:
 *     ?CreateMitPort@@YAHXZ @ 0x1C0069D70 (-CreateMitPort@@YAHXZ.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C00073E8 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C0069EA8 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 *     ?Connect@RegistrarClient@CoreMessagingK@@CAJXZ @ 0x1C006A39C (-Connect@RegistrarClient@CoreMessagingK@@CAJXZ.c)
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C006C734 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

__int64 __fastcall CoreMsgCreatePort(__int64 a1, void *a2)
{
  char v3; // cl
  const unsigned __int16 *v4; // r8
  void **v5; // r9
  int Port; // ebx
  LPCGUID v8; // r9
  char v9[8]; // [rsp+38h] [rbp-9h] BYREF
  int v10; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  int *v12; // [rsp+68h] [rbp+27h]
  __int64 v13; // [rsp+70h] [rbp+2Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp+37h] BYREF

  v9[0] = 0;
  if ( dword_1C0186C30 > 5u )
  {
    v10 = 0;
    v12 = &v10;
    v13 = 4LL;
    TlgCreateWsz(&pDesc, L"Kernel\\MIT\\InputPort");
    TlgWrite((TraceLoggingHProvider)&dword_1C0186C30, &unk_1C016BC8B, 0LL, v8, 4u, &pData);
  }
  gMitPortHandle = 0LL;
  CoreMessagingK::EntryLock::Acquire(v9, 2LL);
  if ( CoreMessagingK::RegistrarClient::s_Port || (Port = CoreMessagingK::RegistrarClient::Connect(), Port >= 0) )
    Port = 0;
  if ( Port >= 0 )
  {
    Port = CoreMessagingK::ServerPorts::CreatePort(v3, a2, v4, v5);
    if ( Port >= 0 )
      Port = 0;
  }
  v10 = Port;
  if ( dword_1C0186C30 > 5u )
  {
    v13 = 4LL;
    v12 = &v10;
    TlgWrite((TraceLoggingHProvider)&dword_1C0186C30, &unk_1C016BC5D, 0LL, (LPCGUID)v5, 3u, &pData);
  }
  if ( v9[0] )
    KeReleaseMutex((PRKMUTEX)Object, 0);
  return (unsigned int)Port;
}
