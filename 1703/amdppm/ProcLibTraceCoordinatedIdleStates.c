/*
 * XREFs of ProcLibTraceCoordinatedIdleStates @ 0x1C001F634
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C001D790 (ProcLibTraceControlCallback.c)
 *     PepUpdateCoordinatedStateWorker @ 0x1C0020B30 (PepUpdateCoordinatedStateWorker.c)
 *     RegisterKernelCoordinatedStates @ 0x1C00234C4 (RegisterKernelCoordinatedStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000BAE0 (__security_check_cookie.c)
 */

void __fastcall ProcLibTraceCoordinatedIdleStates(char a1)
{
  unsigned int *v1; // rbx
  int *PoolWithTag; // rdi
  char *v4; // rsi
  const EVENT_DESCRIPTOR *v5; // r14
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rdx
  unsigned int v9; // eax
  const EVENT_DESCRIPTOR *v10; // r12
  unsigned int v11; // edx
  unsigned int v12; // r8d
  unsigned int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // r14
  unsigned int v16; // r10d
  __int64 v17; // r9
  unsigned int *v18; // r15
  __int64 v19; // rdx
  __int64 v20; // r8
  char *v21; // rcx
  int v22; // eax
  unsigned int i; // [rsp+38h] [rbp-69h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+3Ch] [rbp-65h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-61h] BYREF
  BOOL v26; // [rsp+44h] [rbp-5Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-59h] BYREF
  int *v28; // [rsp+58h] [rbp-49h]
  __int64 v29; // [rsp+60h] [rbp-41h]
  BOOL *v30; // [rsp+68h] [rbp-39h]
  __int64 v31; // [rsp+70h] [rbp-31h]
  struct _PROCESSOR_NUMBER *p_ProcNumber; // [rsp+78h] [rbp-29h]
  __int64 v33; // [rsp+80h] [rbp-21h]
  unsigned __int8 *p_Number; // [rsp+88h] [rbp-19h]
  __int64 v35; // [rsp+90h] [rbp-11h]
  unsigned int *v36; // [rsp+98h] [rbp-9h]
  __int64 v37; // [rsp+A0h] [rbp-1h]
  char *v38; // [rsp+A8h] [rbp+7h]
  int v39; // [rsp+B0h] [rbp+Fh]
  int v40; // [rsp+B4h] [rbp+13h]

  v1 = (unsigned int *)qword_1C0011928;
  PoolWithTag = 0LL;
  v4 = 0LL;
  if ( qword_1C0011928 )
  {
    v5 = (const EVENT_DESCRIPTOR *)&PPM_ETW_GET_COORDINATED_IDLE_STATES;
    if ( a1 )
      v5 = &PPM_ETW_GET_COORDINATED_IDLE_STATES_RUNDOWN;
    if ( EtwEventEnabled(ProcLibEtwHandle, v5) )
    {
      PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 12LL * *v1, 0x72637250u);
      if ( !PoolWithTag )
        return;
      v6 = 0;
      for ( i = 0; v6 < *v1; i = v6 )
      {
        v7 = 56LL * v6;
        v8 = 3LL * v6;
        PoolWithTag[v8] = v1[v7 + 60];
        PoolWithTag[v8 + 1] = v1[v7 + 61];
        PoolWithTag[v8 + 2] = v1[v7 + 63];
        v6 = i + 1;
      }
      UserData.Ptr = (unsigned __int64)v1;
      *(_QWORD *)&UserData.Size = 4LL;
      v9 = *v1;
      v28 = PoolWithTag;
      v29 = 12 * v9;
      EtwWrite(ProcLibEtwHandle, v5, 0LL, 2u, &UserData);
    }
    v10 = (const EVENT_DESCRIPTOR *)&PPM_ETW_GET_COORDINATED_DEPENDENCY;
    if ( a1 )
      v10 = &PPM_ETW_GET_COORDINATED_DEPENDENCY_RUNDOWN;
    if ( EtwEventEnabled(ProcLibEtwHandle, v10) )
    {
      v11 = 0;
      v12 = 0;
      for ( i = 0; v11 < *v1; i = v11 )
      {
        if ( v12 < v1[56 * v11 + 62] )
          v12 = v1[56 * v11 + 62];
        ++v11;
      }
      v4 = (char *)ExAllocatePoolWithTag(PagedPool, 13LL * v12, 0x72637250u);
      if ( v4 )
      {
        v13 = 0;
        for ( i = 0; v13 < *v1; i = v13 )
        {
          v14 = 0;
          v15 = 56LL * v13;
          v25 = 0;
          if ( v1[v15 + 63] )
          {
            do
            {
              v16 = 0;
              v17 = *(_QWORD *)&v1[v15 + 66] + 16LL * v14;
              v18 = (unsigned int *)(v17 + 4);
              if ( *(_DWORD *)(v17 + 4) )
              {
                do
                {
                  v19 = *(_QWORD *)(v17 + 8);
                  v20 = v16++;
                  v21 = &v4[13 * v20];
                  *v21 = *(_BYTE *)(v19 + 4 * v20);
                  *(_DWORD *)(v21 + 1) = *(unsigned __int8 *)(v19 + 4 * v20 + 1);
                  *(_DWORD *)(v21 + 5) = *(unsigned __int8 *)(v19 + 4 * v20 + 2);
                  *(_DWORD *)(v21 + 9) = *(unsigned __int8 *)(v19 + 4 * v20 + 3);
                }
                while ( v16 < *v18 );
              }
              v26 = *(_DWORD *)v17 != -1;
              if ( v26 )
              {
                KeGetProcessorNumberFromIndex(*(_DWORD *)v17, &ProcNumber);
              }
              else
              {
                ProcNumber.Group = 0;
                ProcNumber.Number = 0;
              }
              UserData.Ptr = (unsigned __int64)&i;
              *(_QWORD *)&UserData.Size = 4LL;
              v28 = (int *)&v25;
              v29 = 4LL;
              v30 = &v26;
              v31 = 4LL;
              p_ProcNumber = &ProcNumber;
              p_Number = &ProcNumber.Number;
              v33 = 2LL;
              v35 = 1LL;
              v36 = v18;
              v37 = 4LL;
              v22 = 13 * *v18;
              v38 = v4;
              v40 = 0;
              v39 = v22;
              EtwWrite(ProcLibEtwHandle, v10, 0LL, 7u, &UserData);
              v14 = v25 + 1;
              v25 = v14;
            }
            while ( v14 < v1[v15 + 63] );
            v13 = i;
          }
          ++v13;
        }
      }
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x72637250u);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x72637250u);
  }
}
