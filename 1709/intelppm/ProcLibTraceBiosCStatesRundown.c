/*
 * XREFs of ProcLibTraceBiosCStatesRundown @ 0x1C00268C0
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C0023AE0 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0003530 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ProcLibTraceBiosCStatesRundown(_QWORD *a1)
{
  char *PoolWithTag; // rbx
  int ProcessorNumber; // eax
  __int64 v4; // rax
  ULONG v5; // r9d
  unsigned int *v6; // rsi
  unsigned int v7; // ecx
  unsigned int v8; // eax
  __int64 i; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // xmm0_8
  char *v13; // r8
  unsigned int v15; // [rsp+38h] [rbp-39h] BYREF
  struct _PROCESSOR_NUMBER v16; // [rsp+3Ch] [rbp-35h] BYREF
  int v17; // [rsp+40h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int8 *p_Number; // [rsp+58h] [rbp-19h]
  int v20; // [rsp+60h] [rbp-11h]
  int v21; // [rsp+64h] [rbp-Dh]
  __int16 *v22; // [rsp+68h] [rbp-9h]
  int v23; // [rsp+70h] [rbp-1h]
  int v24; // [rsp+74h] [rbp+3h]
  __int16 *v25; // [rsp+78h] [rbp+7h]
  int v26; // [rsp+80h] [rbp+Fh]
  int v27; // [rsp+84h] [rbp+13h]
  int *v28; // [rsp+88h] [rbp+17h]
  int v29; // [rsp+90h] [rbp+1Fh]
  int v30; // [rsp+94h] [rbp+23h]
  unsigned int *v31; // [rsp+98h] [rbp+27h]
  int v32; // [rsp+A0h] [rbp+2Fh]
  int v33; // [rsp+A4h] [rbp+33h]
  char *v34; // [rsp+A8h] [rbp+37h]
  int v35; // [rsp+B0h] [rbp+3Fh]
  int v36; // [rsp+B4h] [rbp+43h]

  PoolWithTag = 0LL;
  LOBYTE(ProcessorNumber) = EtwEventEnabled(
                              (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
                              &PPM_ETW_BIOS_C_STATES_RUNDOWN);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber((__int64)a1, &v16);
    if ( ProcessorNumber >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        a1[26],
        0LL);
      v4 = a1[33];
      v5 = 6;
      v6 = (unsigned int *)a1[62];
      v7 = 0;
      v15 = 0;
      if ( (v4 & 0x7F077) != 0 )
      {
        v7 = *v6;
        v15 = *v6;
      }
      if ( (v4 & 0x7F070) != 0 )
        v17 = 2;
      else
        v17 = (v4 & 7) != 0;
      UserData.Reserved = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v33 = 0;
      UserData.Ptr = (unsigned __int64)&v16;
      p_Number = &v16.Number;
      v22 = &AcpiInfo;
      v25 = &word_1C0019D82;
      v28 = &v17;
      UserData.Size = 2;
      v23 = 2;
      v26 = 2;
      v31 = &v15;
      v20 = 1;
      v29 = 4;
      v32 = 4;
      if ( v7 )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 19LL * v7, 0x72637250u);
        if ( !PoolWithTag )
        {
LABEL_15:
          LOBYTE(ProcessorNumber) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                      WdfDriverGlobals,
                                      a1[26]);
          return ProcessorNumber;
        }
        v8 = v15;
        for ( i = 0LL; (unsigned int)i < v15; v8 = v15 )
        {
          v10 = 5 * i;
          v11 = (unsigned int)i;
          v12 = *(_QWORD *)&v6[5 * i + 1];
          i = (unsigned int)(i + 1);
          v13 = &PoolWithTag[19 * v11];
          *(_QWORD *)v13 = v12;
          *((_DWORD *)v13 + 2) = v6[v10 + 3];
          v13[12] = v6[v10 + 4];
          *(_DWORD *)(v13 + 13) = v6[v10 + 5];
          *(_WORD *)(v13 + 17) = HIWORD(v6[v10 + 4]);
        }
        v5 = 7;
        v36 = 0;
        v34 = PoolWithTag;
        v35 = 19 * v8;
      }
      EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, &PPM_ETW_BIOS_C_STATES_RUNDOWN, 0LL, v5, &UserData);
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x72637250u);
      goto LABEL_15;
    }
  }
  return ProcessorNumber;
}
