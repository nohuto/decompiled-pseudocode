/*
 * XREFs of ProcLibTracePepPerfCapabilities @ 0x1C002A3F0
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C0028AA0 (ProcLibTraceControlCallback.c)
 *     InitPepPerfStates @ 0x1C002B494 (InitPepPerfStates.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0009108 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C000C400 (__security_check_cookie.c)
 */

void __fastcall ProcLibTracePepPerfCapabilities(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // r13
  char *v4; // rdi
  __int64 v5; // rbx
  int *v6; // r12
  _BYTE *PoolWithTag; // rsi
  __int64 i; // r9
  __int64 v9; // rdx
  int v10; // eax
  unsigned __int8 *v11; // r15
  unsigned __int8 v12; // al
  __int64 j; // r10
  char *v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  struct _PROCESSOR_NUMBER v18[4]; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int8 *p_Number; // [rsp+58h] [rbp-B0h]
  __int64 v21; // [rsp+60h] [rbp-A8h]
  __int64 v22; // [rsp+68h] [rbp-A0h]
  __int64 v23; // [rsp+70h] [rbp-98h]
  _BYTE *v24; // [rsp+78h] [rbp-90h]
  int v25; // [rsp+80h] [rbp-88h]
  int v26; // [rsp+84h] [rbp-84h]
  __int64 v27; // [rsp+88h] [rbp-80h]
  __int64 v28; // [rsp+90h] [rbp-78h]
  __int64 v29; // [rsp+98h] [rbp-70h]
  __int64 v30; // [rsp+A0h] [rbp-68h]
  __int64 v31; // [rsp+A8h] [rbp-60h]
  __int64 v32; // [rsp+B0h] [rbp-58h]
  __int64 v33; // [rsp+B8h] [rbp-50h]
  __int64 v34; // [rsp+C0h] [rbp-48h]
  __int64 v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  __int64 v37; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  __int64 v39; // [rsp+E8h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-18h]
  char *v41; // [rsp+F8h] [rbp-10h]
  int v42; // [rsp+100h] [rbp-8h]
  int v43; // [rsp+104h] [rbp-4h]

  v3 = (const EVENT_DESCRIPTOR *)&PPM_ETW_PERF_CAPABILITIES;
  v4 = 0LL;
  if ( a2 )
    v3 = &PPM_ETW_PERF_CAPABILITIES_RUNDOWN;
  if ( EtwEventEnabled(ProcLibEtwHandle, v3) )
  {
    v5 = *(_QWORD *)(a1 + 1160);
    if ( v5 )
    {
      if ( *(_QWORD *)(a1 + 1176) )
      {
        v6 = (int *)(a1 + 1096);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(10 * *(_DWORD *)(a1 + 1096)), 0x72637250u);
        if ( PoolWithTag )
        {
          for ( i = 0LL; (unsigned int)i < *v6; *(_DWORD *)&PoolWithTag[2 * v9 + 6] = v10 )
          {
            v9 = 5 * i;
            *(_DWORD *)&PoolWithTag[2 * v9] = *(_DWORD *)(v5 + 8 * i + 56) & 1;
            PoolWithTag[2 * v9 + 4] = (*(_DWORD *)(v5 + 8 * i + 56) >> 1) & 3;
            PoolWithTag[2 * v9 + 5] = (*(_DWORD *)(v5 + 8 * i + 56) >> 3) & 0xF;
            v10 = *(unsigned __int8 *)(v5 + 8 * i + 60);
            i = (unsigned int)(i + 1);
          }
          v11 = (unsigned __int8 *)(v5 + 32);
          v12 = *(_BYTE *)(v5 + 32);
          if ( v12 )
          {
            v4 = (char *)ExAllocatePoolWithTag(PagedPool, 9 * (unsigned int)v12, 0x72637250u);
            if ( !v4 )
            {
LABEL_15:
              ExFreePoolWithTag(PoolWithTag, 0x72637250u);
              if ( v4 )
                ExFreePoolWithTag(v4, 0x72637250u);
              return;
            }
            for ( j = 0LL; (unsigned int)j < *v11; j = (unsigned int)(j + 1) )
            {
              v14 = &v4[8 * j];
              *(_DWORD *)&v14[j] = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 24 * j);
              *(_DWORD *)&v14[j + 4] = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 24 * j + 4);
              v14[j + 8] = *(_BYTE *)(*(_QWORD *)(v5 + 40) + 24 * j + 8);
            }
          }
          if ( (int)ProcLibGetProcessorNumber(a1, v18) >= 0 )
          {
            *(_QWORD *)&UserData.Size = 2LL;
            UserData.Ptr = (unsigned __int64)v18;
            v21 = 1LL;
            p_Number = &v18[0].Number;
            v15 = *v6;
            v22 = a1 + 1096;
            v23 = 4LL;
            v24 = PoolWithTag;
            v26 = 0;
            v27 = v5;
            v25 = 10 * v15;
            v16 = *(_QWORD *)(a1 + 1176);
            v29 = v5 + 4;
            v31 = v5 + 8;
            v33 = v5 + 12;
            v28 = 4LL;
            v35 = v16 + 12;
            v37 = v16 + 20;
            v30 = 4LL;
            v32 = 4LL;
            v34 = 4LL;
            v36 = 4LL;
            v38 = 4LL;
            v39 = v5 + 32;
            v40 = 1LL;
            v17 = *v11;
            v41 = v4;
            v43 = 0;
            v42 = 9 * v17;
            EtwWrite(ProcLibEtwHandle, v3, 0LL, 0xCu, &UserData);
          }
          goto LABEL_15;
        }
      }
    }
  }
}
