/*
 * XREFs of CoreMsgOpenConnection @ 0x1C0087E20
 * Callers:
 *     OpenConnectionToMITEndpoint @ 0x1C0087D60 (OpenConnectionToMITEndpoint.c)
 *     NtMITCoreMsgKGetConnectionHandle @ 0x1C00E5F30 (NtMITCoreMsgKGetConnectionHandle.c)
 *     UserCoreMsgOpenConnectionHandle @ 0x1C012D940 (UserCoreMsgOpenConnectionHandle.c)
 * Callees:
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C0011D60 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C0087EF0 (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall CoreMsgOpenConnection(char a1, const struct tagMsgRoutingInfo *a2, void **a3, const GUID *a4)
{
  const GUID *v7; // r9
  int v8; // eax
  unsigned int v9; // ebx
  char v11[8]; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v12; // [rsp+38h] [rbp-61h] BYREF
  void *v13; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  unsigned int *v15; // [rsp+70h] [rbp-29h]
  int v16; // [rsp+78h] [rbp-21h]
  int v17; // [rsp+7Ch] [rbp-1Dh]
  void **v18; // [rsp+80h] [rbp-19h]
  int v19; // [rsp+88h] [rbp-11h]
  int v20; // [rsp+8Ch] [rbp-Dh]
  char *v21; // [rsp+90h] [rbp-9h]
  int v22; // [rsp+98h] [rbp-1h]
  int v23; // [rsp+9Ch] [rbp+3h]
  char *v24; // [rsp+A0h] [rbp+7h]
  int v25; // [rsp+A8h] [rbp+Fh]
  int v26; // [rsp+ACh] [rbp+13h]
  char *v27; // [rsp+B0h] [rbp+17h]
  int v28; // [rsp+B8h] [rbp+1Fh]
  int v29; // [rsp+BCh] [rbp+23h]

  v11[0] = 0;
  if ( dword_1C0188C40 > 5u )
  {
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v12 = a1;
    v15 = &v12;
    v21 = (char *)a2 + 4;
    v24 = (char *)a2 + 8;
    v27 = (char *)a2 + 24;
    v16 = 4;
    v18 = (void **)a2;
    v19 = 4;
    v22 = 4;
    v25 = 8;
    v28 = 16;
    TlgWrite((TraceLoggingHProvider)&dword_1C0188C40, &unk_1C016BFF8, 0LL, a4, 7u, &pData);
  }
  CoreMessagingK::EntryLock::Acquire(v11, 3u);
  if ( CoreMessagingK::RegistrarClient::s_Port )
  {
    v8 = CoreMessagingK::ServerPorts::OpenConnection(a1, a2, a3);
    v9 = v8;
    if ( !v8 )
    {
      if ( !*a3 )
        v8 = -1073741584;
      v9 = v8;
    }
  }
  else
  {
    v9 = -1073741584;
  }
  v13 = *a3;
  v12 = v9;
  if ( dword_1C0188C40 > 5u )
  {
    v17 = 0;
    v20 = 0;
    v15 = &v12;
    v18 = &v13;
    v16 = 4;
    v19 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1C0188C40, &unk_1C016BFB4, 0LL, v7, 4u, &pData);
  }
  if ( v11[0] )
    KeReleaseMutex(Mutex, 0);
  return v9;
}
