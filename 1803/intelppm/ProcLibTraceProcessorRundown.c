/*
 * XREFs of ProcLibTraceProcessorRundown @ 0x1C00297C8
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C0024B10 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C00026A8 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C0003C40 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceProcessorRundown(__int64 a1)
{
  int ProcessorNumber; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  ULONG Type; // [rsp+40h] [rbp-29h] BYREF
  int Data; // [rsp+44h] [rbp-25h] BYREF
  int v13; // [rsp+48h] [rbp-21h] BYREF
  int v14; // [rsp+4Ch] [rbp-1Dh] BYREF
  int v15; // [rsp+50h] [rbp-19h] BYREF
  ULONG RequiredSize; // [rsp+54h] [rbp-15h] BYREF
  struct _PROCESSOR_NUMBER v17; // [rsp+58h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  int *v19; // [rsp+70h] [rbp+7h]
  int v20; // [rsp+78h] [rbp+Fh]
  int v21; // [rsp+7Ch] [rbp+13h]
  int *v22; // [rsp+80h] [rbp+17h]
  int v23; // [rsp+88h] [rbp+1Fh]
  int v24; // [rsp+8Ch] [rbp+23h]
  struct _PROCESSOR_NUMBER *v25; // [rsp+90h] [rbp+27h]
  int v26; // [rsp+98h] [rbp+2Fh]
  int v27; // [rsp+9Ch] [rbp+33h]
  unsigned __int8 *p_Number; // [rsp+A0h] [rbp+37h]
  int v29; // [rsp+A8h] [rbp+3Fh]
  int v30; // [rsp+ACh] [rbp+43h]

  LOBYTE(ProcessorNumber) = EtwEventEnabled(
                              (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
                              &PPM_ETW_PROCESSOR_FIRMWARE_RUNDOWN);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber(a1, &v17);
    if ( ProcessorNumber >= 0 )
    {
      v3 = *(_DWORD *)(a1 + 1072);
      v4 = v3 & *(_DWORD *)(a1 + 1076);
      v5 = ~*(_DWORD *)(a1 + 1080);
      v13 = v3;
      v6 = v4 & v5;
      v14 = v4;
      v15 = v6;
      if ( qword_1C001AAA0 )
      {
        v13 = v3 | 0x4000;
        v15 = v6 | 0x4000;
        v14 = v4 | 0x4000;
      }
      if ( IoGetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 8),
             &PROCESSOR_ETW_FEATUREPRESENT_OVERRIDE,
             0,
             0,
             4u,
             &Data,
             &RequiredSize,
             &Type) >= 0 )
      {
        v7 = v13;
        if ( Type == 7 )
          v7 = Data;
        v13 = v7;
      }
      if ( IoGetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 8),
             &PROCESSOR_ETW_FEATUREACCESSED_OVERRIDE,
             0,
             0,
             4u,
             &Data,
             &RequiredSize,
             &Type) >= 0 )
      {
        v8 = v14;
        if ( Type == 7 )
          v8 = Data;
        v14 = v8;
      }
      if ( IoGetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 8),
             &PROCESSOR_ETW_FEATUREVALID_OVERRIDE,
             0,
             0,
             4u,
             &Data,
             &RequiredSize,
             &Type) >= 0 )
      {
        v9 = v15;
        if ( Type == 7 )
          v9 = Data;
        v15 = v9;
      }
      UserData.Reserved = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      UserData.Ptr = (unsigned __int64)&v13;
      v19 = &v14;
      v22 = &v15;
      v25 = &v17;
      p_Number = &v17.Number;
      UserData.Size = 4;
      v20 = 4;
      v23 = 4;
      v26 = 2;
      v29 = 1;
      LOBYTE(ProcessorNumber) = EtwWrite(
                                  (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
                                  &PPM_ETW_PROCESSOR_FIRMWARE_RUNDOWN,
                                  0LL,
                                  5u,
                                  &UserData);
    }
  }
  return ProcessorNumber;
}
