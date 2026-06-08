/*
 * XREFs of ProcLibTraceProcessorSpecificEvent @ 0x1C000597C
 * Callers:
 *     ProcLibTracePccCapChange @ 0x1C0005BA8 (ProcLibTracePccCapChange.c)
 *     PccInitiateExecuteCallback @ 0x1C000B4C0 (PccInitiateExecuteCallback.c)
 *     AcpiPStateNotifyWorker @ 0x1C001B110 (AcpiPStateNotifyWorker.c)
 *     AcpiTStateNotifyWorker @ 0x1C001B240 (AcpiTStateNotifyWorker.c)
 *     AcpiCStateNotifyWorker @ 0x1C001B370 (AcpiCStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x1C001BB84 (ProcLibDeviceStart.c)
 *     CpcHighestNotifyWorker @ 0x1C0021D98 (CpcHighestNotifyWorker.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0005BD4 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C000BAE0 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceProcessorSpecificEvent(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3, __int64 a4)
{
  int ProcessorNumber; // eax
  ULONG v9; // r9d
  _BYTE v11[2]; // [rsp+30h] [rbp-50h] BYREF
  char v12; // [rsp+32h] [rbp-4Eh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-48h] BYREF
  char *v14; // [rsp+48h] [rbp-38h]
  int v15; // [rsp+50h] [rbp-30h]
  int v16; // [rsp+54h] [rbp-2Ch]
  __int64 v17; // [rsp+58h] [rbp-28h]
  int v18; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+64h] [rbp-1Ch]

  LOBYTE(ProcessorNumber) = EtwEventEnabled(ProcLibEtwHandle, a2);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber(a1, v11);
    if ( ProcessorNumber >= 0 )
    {
      UserData.Reserved = 0;
      v16 = 0;
      v9 = 2;
      UserData.Ptr = (unsigned __int64)v11;
      v14 = &v12;
      UserData.Size = 2;
      v15 = 1;
      if ( a4 && a3 )
      {
        v19 = 0;
        v9 = 3;
        v17 = a4;
        v18 = a3;
      }
      LOBYTE(ProcessorNumber) = EtwWrite(ProcLibEtwHandle, a2, 0LL, v9, &UserData);
    }
  }
  return ProcessorNumber;
}
