/*
 * XREFs of PopDiagTraceSessionStates @ 0x14059FE78
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     PopSessionInputChange @ 0x14059FC48 (PopSessionInputChange.c)
 *     PopSetSessionUserStatus @ 0x14059FF2C (PopSetSessionUserStatus.c)
 *     PopSessionConnected @ 0x1405ED7F0 (PopSessionConnected.c)
 *     PopSetSessionDisplayStatus @ 0x1405ED87C (PopSetSessionDisplayStatus.c)
 *     PopSessionDisconnected @ 0x140709E74 (PopSessionDisconnected.c)
 *     PopSessionWinlogonNotification @ 0x140709EF4 (PopSessionWinlogonNotification.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSessionStates(PCEVENT_DESCRIPTOR EventDescriptor, int a2, int a3)
{
  REGHANDLE v4; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+78h] [rbp+10h] BYREF
  int v10; // [rsp+80h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, EventDescriptor) )
    {
      UserData.Reserved = 0;
      v8 = 0;
      UserData.Ptr = (ULONGLONG)&v9;
      UserData.Size = 4;
      v6 = &v10;
      v7 = 4;
      EtwWrite(v4, EventDescriptor, 0LL, 2u, &UserData);
    }
  }
}
