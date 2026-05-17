/*
 * XREFs of SendMessageToWERService @ 0x18000242C
 * Callers:
 *     ReportExceptionInternal @ 0x180002308 (ReportExceptionInternal.c)
 *     RtlReportSilentProcessExit @ 0x1800765A0 (RtlReportSilentProcessExit.c)
 *     RtlReportSqmEscalation @ 0x1800DD180 (RtlReportSqmEscalation.c)
 * Callees:
 *     WerpFreeSid @ 0x180002620 (WerpFreeSid.c)
 *     WerpAllocateAndInitializeSid @ 0x18000265C (WerpAllocateAndInitializeSid.c)
 *     WaitForWerSvc @ 0x180002734 (WaitForWerSvc.c)
 *     SignalStartWerSvc @ 0x1800027D0 (SignalStartWerSvc.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtQuerySystemInformation @ 0x1800A0780 (NtQuerySystemInformation.c)
 *     NtAlpcConnectPort @ 0x1800A0F70 (NtAlpcConnectPort.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1800A11D0 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall SendMessageToWERService(__int64 a1, __int64 a2)
{
  NTSTATUS started; // ebx
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
  unsigned int SystemInformation; // [rsp+68h] [rbp-98h] BYREF
  int v19; // [rsp+6Ch] [rbp-94h]
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
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
  Handle = 0LL;
  v21 = 0LL;
  v16 = 0;
  started = SignalStartWerSvc();
  if ( started >= 0 )
  {
    started = NtQuerySystemInformation(
                SystemExceptionInformation|SystemPerformanceInformation|0x50,
                &SystemInformation,
                8u,
                0LL);
    if ( started >= 0 )
    {
      v5 = WaitForWerSvc(SystemInformation);
      started = v5;
      if ( v5 >= 0 && v5 != 258 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
        memset(v30, 0, 0x48uLL);
        v30[2] = 1400LL;
        v9 = WerpAllocateAndInitializeSid((unsigned int)&v16, v6, v7, v8);
        v10 = v21;
        started = v9;
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
          v13 = NtAlpcConnectPort(&Handle, &DestinationString, &v25, v30, 0x20000, v21, 0LL, 0LL, 0LL, 0LL, v12);
          started = v13;
          if ( v13 >= 0 && v13 != 258 )
          {
            v23 = 1400LL;
            v14 = ZwAlpcSendWaitReceivePort(Handle, 0x20000LL, a1, 0LL, a2, &v23, 0LL, v12);
            started = v14;
            if ( v14 >= 0 && v14 != 258 )
            {
              started = 0;
              if ( *(int *)(a2 + 44) < 0 )
                started = *(_DWORD *)(a2 + 44);
            }
          }
        }
        if ( v10 )
          WerpFreeSid(v10);
      }
    }
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)started;
}
