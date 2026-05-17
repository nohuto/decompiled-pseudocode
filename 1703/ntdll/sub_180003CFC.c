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

__int64 __fastcall sub_180003CFC(__int64 a1, __int64 a2)
{
  int v4; // ebx
  int v5; // eax
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  int v9; // eax
  __int64 v10; // rdi
  char v11; // dl
  __int64 *v12; // r14
  int v13; // eax
  int v14; // eax
  int v16; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v17; // [rsp+64h] [rbp-9Ch]
  unsigned int v18; // [rsp+68h] [rbp-98h] BYREF
  int v19; // [rsp+6Ch] [rbp-94h]
  __int64 v20; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21; // [rsp+78h] [rbp-88h]
  __int64 v22; // [rsp+80h] [rbp-80h] BYREF
  __int64 v23; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  int v25; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-58h]
  __int64 v27; // [rsp+B0h] [rbp-50h]
  int v28; // [rsp+B8h] [rbp-48h]
  __int128 v29; // [rsp+C0h] [rbp-40h]
  _QWORD v30[10]; // [rsp+D0h] [rbp-30h] BYREF

  v17 = 1280;
  v20 = 0LL;
  v21 = 0LL;
  v16 = 0;
  v4 = sub_1800040A0();
  if ( v4 >= 0 )
  {
    v4 = ZwQuerySystemInformation(115LL, &v18, 8LL, 0LL);
    if ( v4 >= 0 )
    {
      v5 = sub_180004004(v18);
      v4 = v5;
      if ( v5 >= 0 && v5 != 258 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
        memset(v30, 0, 0x48uLL);
        v30[2] = 1400LL;
        v9 = sub_180003F2C((unsigned int)&v16, v6, v7, v8);
        v10 = v21;
        v4 = v9;
        if ( v9 >= 0 )
        {
          v29 = 0LL;
          v25 = 48;
          v26 = 0LL;
          v28 = 0;
          v27 = 0LL;
          if ( v19 == -1 )
          {
            v11 = 1;
          }
          else
          {
            v11 = 0;
            v22 = -10000LL * v19;
          }
          v12 = &v22;
          if ( v11 )
            v12 = 0LL;
          v13 = ZwAlpcConnectPort(&v20, &DestinationString, &v25, v30, 0x20000, v21, 0LL, 0LL, 0LL, 0LL, v12);
          v4 = v13;
          if ( v13 >= 0 && v13 != 258 )
          {
            v23 = 1400LL;
            v14 = ZwAlpcSendWaitReceivePort(v20, 0x20000LL, a1, 0LL, a2, &v23, 0LL, v12);
            v4 = v14;
            if ( v14 >= 0 && v14 != 258 )
            {
              v4 = 0;
              if ( *(int *)(a2 + 44) < 0 )
                v4 = *(_DWORD *)(a2 + 44);
            }
          }
        }
        if ( v10 )
          sub_180003EF0(v10);
      }
    }
  }
  if ( v20 )
    ZwClose(v20);
  return (unsigned int)v4;
}
