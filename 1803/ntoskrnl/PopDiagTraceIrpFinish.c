/*
 * XREFs of PopDiagTraceIrpFinish @ 0x140166264
 * Callers:
 *     PopRequestCompletion @ 0x140165E50 (PopRequestCompletion.c)
 *     PopDequeueQuerySetIrp @ 0x140166088 (PopDequeueQuerySetIrp.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x140077F7C (PopFxAddLogEntry.c)
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     PopDiagGetDriverName @ 0x140153A58 (PopDiagGetDriverName.c)
 *     IoFindDeviceThatFailedIrp @ 0x140163684 (IoFindDeviceThatFailedIrp.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x140166428 (PopDiagTraceIrpFinishTelemetry.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceIrpFinish(__int64 a1)
{
  BOOLEAN result; // al
  const size_t *v2; // rbx
  int v3; // edx
  __int64 v4; // rdi
  char v5; // r14
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 DeviceThatFailedIrp; // rax
  NTSTATUS DriverName; // eax
  wchar_t *v12; // rcx
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v16; // [rsp+68h] [rbp-A0h]
  __int64 v17; // [rsp+70h] [rbp-98h]
  const size_t *v18; // [rsp+78h] [rbp-90h]
  int v19; // [rsp+80h] [rbp-88h]
  int v20; // [rsp+84h] [rbp-84h]
  wchar_t v21[64]; // [rsp+88h] [rbp-80h] BYREF

  v14 = a1;
  result = PopDiagTraceIrpFinishTelemetry();
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRPFINISH);
    if ( result )
    {
      v2 = &pwsz;
      v3 = *(_DWORD *)(v14 + 48);
      v4 = *(_QWORD *)(v14 + 72LL * (*(char *)(v14 + 66) - 1) + 272);
      LODWORD(v13) = v3;
      v5 = *(_BYTE *)(v4 + 184);
      v6 = *(_DWORD *)(v4 + 188);
      if ( v3 < 0 && !v6 )
      {
        DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(v14);
        DriverName = PopDiagGetDriverName(DeviceThatFailedIrp, v21);
        v3 = v13;
        v12 = v21;
        if ( DriverName < 0 )
          v12 = (wchar_t *)&pwsz;
        v2 = (const size_t *)v12;
      }
      if ( v6 == 1 && v5 == 2 )
      {
        v8 = *(_QWORD *)(v4 + 24);
        if ( v8 )
          v9 = *(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL);
        else
          v9 = 0LL;
        PopFxAddLogEntry(v9, 0, 23, v3);
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
      return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_IRPFINISH, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return result;
}
