/*
 * XREFs of PopDiagTraceIdleWakeSourceSummary @ 0x140767F08
 * Callers:
 *     PopDiagIdleWakeAccountingStop @ 0x140765870 (PopDiagIdleWakeAccountingStop.c)
 * Callees:
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x1401476F8 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceIdleWakeSourceSummary(int *a1)
{
  int v2; // eax
  const WCHAR *v3; // rdx
  __int64 v4; // r9
  unsigned __int8 v5; // al
  NTSTATUS v6; // eax
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned __int64 v9; // kr00_8
  unsigned __int64 v10; // kr08_8
  unsigned __int64 v11; // kr10_8
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v16; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  int *v18; // [rsp+78h] [rbp-90h]
  __int64 v19; // [rsp+80h] [rbp-88h]
  unsigned __int64 *v20; // [rsp+88h] [rbp-80h]
  __int64 v21; // [rsp+90h] [rbp-78h]
  unsigned __int64 *v22; // [rsp+98h] [rbp-70h]
  __int64 v23; // [rsp+A0h] [rbp-68h]
  unsigned __int64 *v24; // [rsp+A8h] [rbp-60h]
  __int64 v25; // [rsp+B0h] [rbp-58h]
  __int64 *v26; // [rsp+B8h] [rbp-50h]
  __int64 v27; // [rsp+C0h] [rbp-48h]
  wchar_t *Buffer; // [rsp+C8h] [rbp-40h]
  int Length; // [rsp+D0h] [rbp-38h]
  int v30; // [rsp+D4h] [rbp-34h]
  _BYTE v31[512]; // [rsp+D8h] [rbp-30h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DRIPS_WAKE_ACCOUNTING_SUMMARY) && a1[1] )
  {
    v2 = *a1;
    if ( *a1 == 3 )
    {
      v3 = L"Spurious Wake";
LABEL_6:
      RtlInitUnicodeString(&DestinationString, v3);
LABEL_22:
      *(_QWORD *)&UserData.Size = 1LL;
      v18 = a1 + 1;
      UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
      v20 = &v14;
      v9 = *((_QWORD *)a1 + 1);
      v19 = 4LL;
      v14 = v9 / 0xA;
      v10 = *((_QWORD *)a1 + 2);
      v22 = &v15;
      v15 = v10 / 0xA;
      v11 = *((_QWORD *)a1 + 3);
      Length = DestinationString.Length;
      v24 = &v16;
      LODWORD(v13) = DestinationString.Length >> 1;
      v26 = &v13;
      Buffer = DestinationString.Buffer;
      v16 = v11 / 0xA;
      v21 = 8LL;
      v23 = 8LL;
      v25 = 8LL;
      v27 = 4LL;
      v30 = 0;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DRIPS_WAKE_ACCOUNTING_SUMMARY, 0LL, 7u, &UserData);
      return;
    }
    switch ( v2 )
    {
      case 2:
        v3 = L"Spurious Clock";
        goto LABEL_6;
      case 4:
        v3 = L"Query Failure";
        goto LABEL_6;
      case 5:
        v3 = L"Accounting Failure";
        goto LABEL_6;
      case 1:
        v4 = *((unsigned __int8 *)a1 + 33);
        DestinationString.Buffer = (wchar_t *)v31;
        *(_DWORD *)&DestinationString.Length = 0x2000000;
        v5 = *((_BYTE *)a1 + 32);
        if ( v5 < 0xEu )
          v6 = RtlUnicodeStringPrintf(&DestinationString, L"Timer(Name:Index): %s:%d", PopIrTimerDescriptions[v5], v4);
        else
          v6 = RtlUnicodeStringPrintf(&DestinationString, L"Timer(Component:Index): %d:%d", v5, v4);
        break;
      default:
        if ( v2 )
        {
          v6 = -1073741811;
        }
        else
        {
          v7 = (unsigned int)a1[9];
          v8 = (unsigned int)a1[8];
          DestinationString.Buffer = (wchar_t *)v31;
          *(_DWORD *)&DestinationString.Length = 0x2000000;
          v6 = RtlUnicodeStringPrintf(&DestinationString, L"Interrupt(CPU:Vector): %d:%d", v8, v7);
        }
        break;
    }
    if ( v6 >= 0 )
      goto LABEL_22;
  }
}
