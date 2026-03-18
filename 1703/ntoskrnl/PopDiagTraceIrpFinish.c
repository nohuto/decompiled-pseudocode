/*
 * XREFs of PopDiagTraceIrpFinish @ 0x140144E20
 * Callers:
 *     PopRequestCompletion @ 0x140144A90 (PopRequestCompletion.c)
 *     PopDequeueQuerySetIrp @ 0x140144CE4 (PopDequeueQuerySetIrp.c)
 * Callees:
 *     IoFindDeviceThatFailedIrp @ 0x1400398F0 (IoFindDeviceThatFailedIrp.c)
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x140069898 (PopFxAddLogEntry.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     PopDiagGetDriverName @ 0x14013AB60 (PopDiagGetDriverName.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceIrpFinish(__int64 a1)
{
  const size_t *v2; // rdi
  __int64 v3; // rsi
  int v4; // edx
  char v5; // r15
  int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 DeviceThatFailedIrp; // rax
  NTSTATUS DriverName; // eax
  wchar_t *v12; // rcx
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  int *v16; // [rsp+60h] [rbp-A0h]
  __int64 v17; // [rsp+68h] [rbp-98h]
  const size_t *v18; // [rsp+70h] [rbp-90h]
  int v19; // [rsp+78h] [rbp-88h]
  int v20; // [rsp+7Ch] [rbp-84h]
  wchar_t v21[64]; // [rsp+90h] [rbp-70h] BYREF

  v14 = a1;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRPFINISH) )
  {
    v2 = &cchOriginalDestLength;
    v3 = *(_QWORD *)(a1 + 72LL * (*(char *)(a1 + 66) - 1) + 272);
    v4 = *(_DWORD *)(a1 + 48);
    v13 = v4;
    v5 = *(_BYTE *)(v3 + 184);
    v6 = *(_DWORD *)(v3 + 188);
    if ( v4 < 0 && !v6 )
    {
      DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(a1);
      DriverName = PopDiagGetDriverName(DeviceThatFailedIrp, v21, 0x78u);
      v4 = v13;
      v12 = v21;
      if ( DriverName < 0 )
        v12 = (wchar_t *)&cchOriginalDestLength;
      v2 = (const size_t *)v12;
    }
    if ( v6 == 1 && v5 == 2 )
    {
      v8 = *(_QWORD *)(v3 + 24);
      if ( v8 )
        v9 = *(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL);
      else
        v9 = 0LL;
      PopFxAddLogEntry(v9, 0, 23, v4);
    }
    *(_QWORD *)&UserData.Size = 8LL;
    UserData.Ptr = (ULONGLONG)&v14;
    v16 = &v13;
    v7 = -1LL;
    v17 = 4LL;
    v18 = v2;
    do
      ++v7;
    while ( *((_WORD *)v2 + v7) );
    v19 = 2 * v7 + 2;
    v20 = 0;
    EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_IRPFINISH, 0LL, 0, 0LL, 0LL, 3u, &UserData);
  }
}
