/*
 * XREFs of ProcLibTraceProcessorSpecificEvent @ 0x1C0007638
 * Callers:
 *     ProcLibTracePccCapChange @ 0x1C000760C (ProcLibTracePccCapChange.c)
 *     PccInitiateExecuteCallback @ 0x1C000E2A0 (PccInitiateExecuteCallback.c)
 *     ProcLibDeviceStart @ 0x1C001DF9C (ProcLibDeviceStart.c)
 *     CpcHighestNotifyWorker @ 0x1C0025BC4 (CpcHighestNotifyWorker.c)
 *     AcpiCStateNotifyWorker @ 0x1C0028B60 (AcpiCStateNotifyWorker.c)
 *     AcpiPStateNotifyWorker @ 0x1C0029750 (AcpiPStateNotifyWorker.c)
 *     AcpiTStateNotifyWorker @ 0x1C002A2F0 (AcpiTStateNotifyWorker.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0003704 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C0003AE0 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceProcessorSpecificEvent(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3, __int64 a4)
{
  int ProcessorNumber; // eax
  ULONG v9; // r9d
  struct _PROCESSOR_NUMBER v11; // [rsp+30h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int8 *p_Number; // [rsp+48h] [rbp-38h]
  int v14; // [rsp+50h] [rbp-30h]
  int v15; // [rsp+54h] [rbp-2Ch]
  __int64 v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+60h] [rbp-20h]
  int v18; // [rsp+64h] [rbp-1Ch]

  LOBYTE(ProcessorNumber) = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, a2);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber(a1, &v11);
    if ( ProcessorNumber >= 0 )
    {
      UserData.Reserved = 0;
      v15 = 0;
      v9 = 2;
      UserData.Ptr = (unsigned __int64)&v11;
      p_Number = &v11.Number;
      UserData.Size = 2;
      v14 = 1;
      if ( a4 && a3 )
      {
        v18 = 0;
        v9 = 3;
        v16 = a4;
        v17 = a3;
      }
      LOBYTE(ProcessorNumber) = EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, a2, 0LL, v9, &UserData);
    }
  }
  return ProcessorNumber;
}
