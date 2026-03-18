/*
 * XREFs of CoreMsgSend @ 0x1C006C2DC
 * Callers:
 *     UserCoreMsgSend @ 0x1C006C2D0 (UserCoreMsgSend.c)
 *     SendCursorManagementNotification @ 0x1C00726F4 (SendCursorManagementNotification.c)
 *     NtMITCoreMsgKSend @ 0x1C00DF0F0 (NtMITCoreMsgKSend.c)
 * Callees:
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x1C006C38C (-Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z.c)
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C006C734 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

__int64 __fastcall CoreMsgSend(void *a1, char a2, const void *a3, const GUID *a4)
{
  unsigned int v4; // r14d
  unsigned int v8; // ebx
  const GUID *v9; // r9
  char v11[8]; // [rsp+30h] [rbp-49h] BYREF
  char v12; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  _QWORD *v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+78h] [rbp-1h]
  int v17; // [rsp+7Ch] [rbp+3h]
  char *v18; // [rsp+80h] [rbp+7h]
  int v19; // [rsp+88h] [rbp+Fh]
  int v20; // [rsp+8Ch] [rbp+13h]

  v4 = (unsigned int)a4;
  v11[0] = 0;
  v12 = a2;
  v13[0] = a1;
  if ( dword_1C0186C30 > 5u )
  {
    v17 = 0;
    v20 = 0;
    v15 = v13;
    v18 = &v12;
    v16 = 8;
    v19 = 1;
    TlgWrite((TraceLoggingHProvider)&dword_1C0186C30, &unk_1C016BB64, 0LL, a4, 4u, &pData);
  }
  CoreMessagingK::EntryLock::Acquire(v11, 4LL);
  v8 = CoreMessagingK::ServerPorts::Send(a1, a2, a3, v4);
  LODWORD(v13[0]) = v8;
  if ( dword_1C0186C30 > 5u )
  {
    v17 = 0;
    v15 = v13;
    v16 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0186C30, &unk_1C016BB3C, 0LL, v9, 3u, &pData);
  }
  if ( v11[0] )
    KeReleaseMutex((PRKMUTEX)Object, 0);
  return v8;
}
