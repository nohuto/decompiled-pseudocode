/*
 * XREFs of ProcLibTraceCoordinatedIdleStates @ 0x1C002A9DC
 * Callers:
 *     RegisterKernelCoordinatedStates @ 0x1C001D374 (RegisterKernelCoordinatedStates.c)
 *     ProcLibTraceControlCallback @ 0x1C0028AA0 (ProcLibTraceControlCallback.c)
 *     PepUpdateCoordinatedStateWorker @ 0x1C002D010 (PepUpdateCoordinatedStateWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000C400 (__security_check_cookie.c)
 */

void __fastcall ProcLibTraceCoordinatedIdleStates(char a1)
{
  unsigned int *v1; // rbx
  int *PoolWithTag; // rdi
  char *v4; // rsi
  const EVENT_DESCRIPTOR *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // eax
  const EVENT_DESCRIPTOR *v9; // r12
  __int64 v10; // rax
  unsigned int v11; // r8d
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // r14
  unsigned int v16; // eax
  unsigned int v17; // r10d
  __int64 v18; // r9
  unsigned int *v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  char *v22; // rcx
  bool v23; // zf
  int v24; // eax
  int i; // [rsp+38h] [rbp-59h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+3Ch] [rbp-55h] BYREF
  unsigned int v27; // [rsp+40h] [rbp-51h] BYREF
  BOOL v28; // [rsp+44h] [rbp-4Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-49h] BYREF
  int *v30; // [rsp+58h] [rbp-39h]
  __int64 v31; // [rsp+60h] [rbp-31h]
  BOOL *v32; // [rsp+68h] [rbp-29h]
  __int64 v33; // [rsp+70h] [rbp-21h]
  struct _PROCESSOR_NUMBER *p_ProcNumber; // [rsp+78h] [rbp-19h]
  __int64 v35; // [rsp+80h] [rbp-11h]
  unsigned __int8 *p_Number; // [rsp+88h] [rbp-9h]
  __int64 v37; // [rsp+90h] [rbp-1h]
  unsigned int *v38; // [rsp+98h] [rbp+7h]
  __int64 v39; // [rsp+A0h] [rbp+Fh]
  char *v40; // [rsp+A8h] [rbp+17h]
  int v41; // [rsp+B0h] [rbp+1Fh]
  int v42; // [rsp+B4h] [rbp+23h]

  v1 = (unsigned int *)qword_1C0011958;
  PoolWithTag = 0LL;
  v4 = 0LL;
  if ( qword_1C0011958 )
  {
    v5 = (const EVENT_DESCRIPTOR *)&PPM_ETW_GET_COORDINATED_IDLE_STATES;
    if ( a1 )
      v5 = &PPM_ETW_GET_COORDINATED_IDLE_STATES_RUNDOWN;
    if ( EtwEventEnabled(ProcLibEtwHandle, v5) )
    {
      PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 12LL * *v1, 0x72637250u);
      if ( !PoolWithTag )
        return;
      v6 = 0LL;
      for ( i = 0; (unsigned int)v6 < *v1; i = v6 )
      {
        v7 = 3 * v6;
        PoolWithTag[v7] = v1[56 * v6 + 60];
        PoolWithTag[v7 + 1] = v1[56 * v6 + 61];
        PoolWithTag[v7 + 2] = v1[56 * v6 + 63];
        v6 = (unsigned int)(i + 1);
      }
      UserData.Ptr = (unsigned __int64)v1;
      *(_QWORD *)&UserData.Size = 4LL;
      v8 = *v1;
      v30 = PoolWithTag;
      v31 = 12 * v8;
      EtwWrite(ProcLibEtwHandle, v5, 0LL, 2u, &UserData);
    }
    v9 = (const EVENT_DESCRIPTOR *)&PPM_ETW_GET_COORDINATED_DEPENDENCY;
    if ( a1 )
      v9 = &PPM_ETW_GET_COORDINATED_DEPENDENCY_RUNDOWN;
    if ( EtwEventEnabled(ProcLibEtwHandle, v9) )
    {
      i = 0;
      v10 = 0LL;
      if ( *v1 )
      {
        v11 = 0;
        do
        {
          v12 = v10;
          v10 = v1[56 * v11++ + 62];
          i = v11;
          if ( v12 >= (unsigned int)v10 )
            v10 = v12;
        }
        while ( v11 < *v1 );
      }
      v4 = (char *)ExAllocatePoolWithTag(PagedPool, 13 * v10, 0x72637250u);
      if ( v4 )
      {
        v13 = 0;
        i = 0;
        if ( *v1 )
        {
          v14 = 0;
          do
          {
            v15 = 56LL * v14;
            v27 = 0;
            if ( v1[v15 + 63] )
            {
              v16 = 0;
              do
              {
                v17 = 0;
                v18 = *(_QWORD *)&v1[v15 + 66] + 16LL * v16;
                v19 = (unsigned int *)(v18 + 4);
                if ( *(_DWORD *)(v18 + 4) )
                {
                  do
                  {
                    v20 = *(_QWORD *)(v18 + 8);
                    v21 = v17++;
                    v22 = &v4[13 * v21];
                    *v22 = *(_BYTE *)(v20 + 4 * v21);
                    *(_DWORD *)(v22 + 1) = *(unsigned __int8 *)(v20 + 4 * v21 + 1);
                    *(_DWORD *)(v22 + 5) = *(unsigned __int8 *)(v20 + 4 * v21 + 2);
                    *(_DWORD *)(v22 + 9) = *(unsigned __int8 *)(v20 + 4 * v21 + 3);
                  }
                  while ( v17 < *v19 );
                }
                v23 = *(_DWORD *)v18 == -1;
                v28 = *(_DWORD *)v18 != -1;
                if ( v23 )
                {
                  ProcNumber.Group = 0;
                  ProcNumber.Number = 0;
                }
                else
                {
                  KeGetProcessorNumberFromIndex(*(_DWORD *)v18, &ProcNumber);
                }
                UserData.Ptr = (unsigned __int64)&i;
                *(_QWORD *)&UserData.Size = 4LL;
                v30 = (int *)&v27;
                v31 = 4LL;
                v32 = &v28;
                v33 = 4LL;
                p_ProcNumber = &ProcNumber;
                p_Number = &ProcNumber.Number;
                v35 = 2LL;
                v37 = 1LL;
                v38 = v19;
                v39 = 4LL;
                v24 = 13 * *v19;
                v40 = v4;
                v42 = 0;
                v41 = v24;
                EtwWrite(ProcLibEtwHandle, v9, 0LL, 7u, &UserData);
                v16 = v27 + 1;
                v27 = v16;
              }
              while ( v16 < v1[v15 + 63] );
              v13 = i;
            }
            i = ++v13;
            v14 = v13;
          }
          while ( v13 < *v1 );
        }
      }
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x72637250u);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x72637250u);
  }
}
