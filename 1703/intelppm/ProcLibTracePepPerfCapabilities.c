/*
 * XREFs of ProcLibTracePepPerfCapabilities @ 0x1C00244E0
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C001A8C0 (ProcLibTraceControlCallback.c)
 *     InitPepPerfStates @ 0x1C002FC10 (InitPepPerfStates.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0003704 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C0003AE0 (__security_check_cookie.c)
 */

void __fastcall ProcLibTracePepPerfCapabilities(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // r14
  __int64 v4; // rdi
  unsigned int *v5; // r15
  unsigned int v6; // r12d
  _BYTE *PoolWithTag; // rsi
  unsigned int i; // r9d
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _PROCESSOR_NUMBER v12[4]; // [rsp+38h] [rbp-99h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-89h] BYREF
  unsigned __int8 *p_Number; // [rsp+58h] [rbp-79h]
  __int64 v15; // [rsp+60h] [rbp-71h]
  __int64 v16; // [rsp+68h] [rbp-69h]
  __int64 v17; // [rsp+70h] [rbp-61h]
  _BYTE *v18; // [rsp+78h] [rbp-59h]
  unsigned int v19; // [rsp+80h] [rbp-51h]
  int v20; // [rsp+84h] [rbp-4Dh]
  __int64 v21; // [rsp+88h] [rbp-49h]
  __int64 v22; // [rsp+90h] [rbp-41h]
  __int64 v23; // [rsp+98h] [rbp-39h]
  __int64 v24; // [rsp+A0h] [rbp-31h]
  __int64 v25; // [rsp+A8h] [rbp-29h]
  __int64 v26; // [rsp+B0h] [rbp-21h]
  __int64 v27; // [rsp+B8h] [rbp-19h]
  __int64 v28; // [rsp+C0h] [rbp-11h]
  __int64 v29; // [rsp+C8h] [rbp-9h]
  __int64 v30; // [rsp+D0h] [rbp-1h]
  __int64 v31; // [rsp+D8h] [rbp+7h]
  __int64 v32; // [rsp+E0h] [rbp+Fh]

  v3 = (const EVENT_DESCRIPTOR *)&PPM_ETW_PERF_CAPABILITIES;
  if ( a2 )
    v3 = &PPM_ETW_PERF_CAPABILITIES_RUNDOWN;
  if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v3) )
  {
    v4 = *(_QWORD *)(a1 + 1160);
    if ( v4 )
    {
      if ( *(_QWORD *)(a1 + 1176) )
      {
        v5 = (unsigned int *)(a1 + 1096);
        v6 = 10 * *(_DWORD *)(a1 + 1096);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x72637250u);
        if ( PoolWithTag )
        {
          for ( i = 0; i < *v5; *(_DWORD *)&PoolWithTag[2 * v10 + 6] = *(unsigned __int8 *)(v4 + 8 * v9 + 44) )
          {
            v9 = i++;
            v10 = 5 * v9;
            *(_DWORD *)&PoolWithTag[2 * v10] = *(_DWORD *)(v4 + 8 * v9 + 40) & 1;
            PoolWithTag[2 * v10 + 4] = (*(_DWORD *)(v4 + 8 * v9 + 40) >> 1) & 3;
            PoolWithTag[2 * v10 + 5] = (*(_DWORD *)(v4 + 8 * v9 + 40) >> 3) & 0xF;
          }
          if ( (int)ProcLibGetProcessorNumber(a1, v12) >= 0 )
          {
            v11 = *(_QWORD *)(a1 + 1176);
            UserData.Ptr = (unsigned __int64)v12;
            *(_QWORD *)&UserData.Size = 2LL;
            p_Number = &v12[0].Number;
            v15 = 1LL;
            v23 = v4 + 4;
            v16 = a1 + 1096;
            v25 = v4 + 8;
            v27 = v4 + 12;
            v29 = v11 + 12;
            v31 = v11 + 20;
            v17 = 4LL;
            v18 = PoolWithTag;
            v19 = v6;
            v20 = 0;
            v21 = v4;
            v22 = 4LL;
            v24 = 4LL;
            v26 = 4LL;
            v28 = 4LL;
            v30 = 4LL;
            v32 = 4LL;
            EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v3, 0LL, 0xAu, &UserData);
          }
          ExFreePoolWithTag(PoolWithTag, 0x72637250u);
        }
      }
    }
  }
}
