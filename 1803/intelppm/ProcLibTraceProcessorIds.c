/*
 * XREFs of ProcLibTraceProcessorIds @ 0x1C0029444
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C0024B10 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C00026A8 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C0003C40 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceProcessorIds(__int64 a1)
{
  int ProcessorNumber; // eax
  struct _PROCESSOR_NUMBER v4[4]; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  unsigned __int8 *p_Number; // [rsp+50h] [rbp+7h]
  int v7; // [rsp+58h] [rbp+Fh]
  int v8; // [rsp+5Ch] [rbp+13h]
  __int64 v9; // [rsp+60h] [rbp+17h]
  int v10; // [rsp+68h] [rbp+1Fh]
  int v11; // [rsp+6Ch] [rbp+23h]
  __int64 v12; // [rsp+70h] [rbp+27h]
  int v13; // [rsp+78h] [rbp+2Fh]
  int v14; // [rsp+7Ch] [rbp+33h]
  __int64 v15; // [rsp+80h] [rbp+37h]
  int v16; // [rsp+88h] [rbp+3Fh]
  int v17; // [rsp+8Ch] [rbp+43h]

  LOBYTE(ProcessorNumber) = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, &PPM_ETW_PROCESSOR_ID_RUNDOWN);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber(a1, v4);
    if ( ProcessorNumber >= 0 )
    {
      UserData.Reserved = 0;
      v8 = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      UserData.Ptr = (unsigned __int64)v4;
      p_Number = &v4[0].Number;
      v10 = 4;
      v9 = a1 + 52;
      v12 = a1 + 48;
      v15 = a1 + 56;
      v13 = 4;
      v16 = 4;
      UserData.Size = 2;
      v7 = 1;
      LOBYTE(ProcessorNumber) = EtwWrite(
                                  (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
                                  &PPM_ETW_PROCESSOR_ID_RUNDOWN,
                                  0LL,
                                  5u,
                                  &UserData);
    }
  }
  return ProcessorNumber;
}
