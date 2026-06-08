/*
 * XREFs of ProcLibTraceBiosTStatesRundown @ 0x1C0029B8C
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C0028AA0 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0009108 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C000C400 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ProcLibTraceBiosTStatesRundown(__int64 a1)
{
  void *v2; // rbx
  int ProcessorNumber; // eax
  int v4; // eax
  ULONG v5; // r9d
  unsigned int *v6; // r14
  unsigned int v7; // eax
  int v8; // esi
  PVOID PoolWithTag; // rax
  unsigned int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  unsigned int v16; // [rsp+38h] [rbp-79h] BYREF
  struct _PROCESSOR_NUMBER v17; // [rsp+3Ch] [rbp-75h] BYREF
  int v18; // [rsp+40h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int8 *p_Number; // [rsp+58h] [rbp-59h]
  __int64 v21; // [rsp+60h] [rbp-51h]
  char *v22; // [rsp+68h] [rbp-49h]
  __int64 v23; // [rsp+70h] [rbp-41h]
  char *v24; // [rsp+78h] [rbp-39h]
  __int64 v25; // [rsp+80h] [rbp-31h]
  __int64 v26; // [rsp+88h] [rbp-29h]
  __int64 v27; // [rsp+90h] [rbp-21h]
  int *v28; // [rsp+98h] [rbp-19h]
  __int64 v29; // [rsp+A0h] [rbp-11h]
  __int64 v30; // [rsp+A8h] [rbp-9h]
  __int64 v31; // [rsp+B0h] [rbp-1h]
  __int64 v32; // [rsp+B8h] [rbp+7h]
  __int64 v33; // [rsp+C0h] [rbp+Fh]
  unsigned int *v34; // [rsp+C8h] [rbp+17h]
  __int64 v35; // [rsp+D0h] [rbp+1Fh]
  PVOID v36; // [rsp+D8h] [rbp+27h]
  int v37; // [rsp+E0h] [rbp+2Fh]
  int i; // [rsp+E4h] [rbp+33h]

  v2 = 0LL;
  LOBYTE(ProcessorNumber) = EtwEventEnabled(ProcLibEtwHandle, &PPM_ETW_BIOS_T_STATES_RUNDOWN);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber(a1, &v17);
    if ( ProcessorNumber >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 208),
        0LL);
      v4 = *(_DWORD *)(a1 + 264);
      v5 = 9;
      v6 = *(unsigned int **)(a1 + 472);
      v16 = 0;
      if ( (v4 & 0x3300000) != 0 )
      {
        v7 = *v6;
        v16 = v7;
        if ( v7 )
        {
          v8 = 20 * v7;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 20 * v7, 0x72637250u);
          v2 = PoolWithTag;
          if ( !PoolWithTag )
          {
LABEL_13:
            LOBYTE(ProcessorNumber) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                        WdfDriverGlobals,
                                        *(_QWORD *)(a1 + 208));
            return ProcessorNumber;
          }
          v5 = 10;
          v36 = PoolWithTag;
          v10 = 0;
          v37 = v8;
          for ( i = 0; v10 < v16; *((_DWORD *)PoolWithTag + v12 + 4) = v6[5 * v11 + 5] )
          {
            v11 = v10++;
            v12 = 5 * v11;
            *((_DWORD *)PoolWithTag + v12) = v6[5 * v11 + 1];
            *((_DWORD *)PoolWithTag + v12 + 1) = v6[5 * v11 + 2];
            *((_DWORD *)PoolWithTag + v12 + 2) = v6[5 * v11 + 3];
            *((_DWORD *)PoolWithTag + v12 + 3) = v6[5 * v11 + 4];
          }
        }
      }
      v13 = *(_QWORD *)(a1 + 264);
      if ( (v13 & 0x3000000) != 0 )
        v14 = 3;
      else
        v14 = (v13 & 0x300000) != 0;
      v18 = v14;
      *(_QWORD *)&UserData.Size = 2LL;
      UserData.Ptr = (unsigned __int64)&v17;
      p_Number = &v17.Number;
      v22 = &byte_1C0011C06;
      v24 = &byte_1C0011C07;
      v26 = a1 + 480;
      v28 = &v18;
      v30 = a1 + 448;
      v32 = a1 + 460;
      v34 = &v16;
      v21 = 1LL;
      v23 = 1LL;
      v25 = 1LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 12LL;
      v33 = 12LL;
      v35 = 4LL;
      EtwWrite(ProcLibEtwHandle, &PPM_ETW_BIOS_T_STATES_RUNDOWN, 0LL, v5, &UserData);
      if ( v2 )
        ExFreePoolWithTag(v2, 0x72637250u);
      goto LABEL_13;
    }
  }
  return ProcessorNumber;
}
