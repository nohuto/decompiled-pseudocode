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

__int64 __fastcall sub_1800D7658(__int64 a1, __int64 a2)
{
  int SystemInformation; // ebx
  int v4; // eax
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  int v8; // eax
  __int64 v9; // rdi
  int v10; // eax
  int v11; // eax
  int v13; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v14; // [rsp+64h] [rbp-9Ch]
  unsigned int v15; // [rsp+68h] [rbp-98h]
  int v16; // [rsp+6Ch] [rbp-94h]
  __int64 v17; // [rsp+70h] [rbp-90h]
  __int64 v18; // [rsp+78h] [rbp-88h]
  __int64 v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  int v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  __int64 v24; // [rsp+B0h] [rbp-50h]
  int v25; // [rsp+B8h] [rbp-48h]
  __int128 v26; // [rsp+C0h] [rbp-40h]
  _QWORD v27[9]; // [rsp+D0h] [rbp-30h] BYREF

  v14 = 1280;
  v17 = 0LL;
  v18 = 0LL;
  v13 = 0;
  SystemInformation = sub_1800D785C();
  if ( SystemInformation >= 0 )
  {
    SystemInformation = ZwQuerySystemInformation();
    if ( SystemInformation >= 0 )
    {
      v4 = sub_1800D7904(v15);
      SystemInformation = v4;
      if ( v4 >= 0 && v4 != 258 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
        memset(v27, 0, sizeof(v27));
        v27[2] = 1400LL;
        v8 = sub_1800D7A54((unsigned int)&v13, v5, v6, v7);
        v9 = v18;
        SystemInformation = v8;
        if ( v8 >= 0 )
        {
          v26 = 0LL;
          v22 = 48;
          v23 = 0LL;
          v25 = 0;
          v24 = 0LL;
          if ( v16 != -1 )
            v19 = -10000LL * v16;
          v10 = ZwAlpcConnectPort();
          SystemInformation = v10;
          if ( v10 >= 0 && v10 != 258 )
          {
            v20 = 1400LL;
            v11 = ZwAlpcSendWaitReceivePort();
            SystemInformation = v11;
            if ( v11 >= 0 && v11 != 258 )
            {
              SystemInformation = 0;
              if ( *(int *)(a2 + 44) < 0 )
                SystemInformation = *(_DWORD *)(a2 + 44);
            }
          }
        }
        if ( v9 )
          sub_1800D7D5C(v9);
      }
    }
  }
  if ( v17 )
    ZwClose();
  return (unsigned int)SystemInformation;
}
