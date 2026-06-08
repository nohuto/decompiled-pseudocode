/*
 * XREFs of ProcLibTracePlatformIdleStates @ 0x1C001F300
 * Callers:
 *     UpdateKernelPlatformStates @ 0x1C0007E4C (UpdateKernelPlatformStates.c)
 *     ProcLibTraceControlCallback @ 0x1C001D790 (ProcLibTraceControlCallback.c)
 *     RegisterKernelPlatformStates @ 0x1C0023188 (RegisterKernelPlatformStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000BAE0 (__security_check_cookie.c)
 */

void __fastcall ProcLibTracePlatformIdleStates(char a1)
{
  _DWORD *v1; // rdi
  _WORD *PoolWithTag; // rsi
  const EVENT_DESCRIPTOR *v3; // r15
  __int64 v4; // rdx
  unsigned int v5; // r8d
  unsigned int i; // eax
  ULONG v7; // r9d
  __int64 v8; // r14
  unsigned int *v9; // r12
  unsigned int v10; // r13d
  __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned int v13; // eax
  int v14; // [rsp+38h] [rbp-79h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+3Ch] [rbp-75h] BYREF
  int v16; // [rsp+40h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-69h] BYREF
  __int64 v18; // [rsp+58h] [rbp-59h]
  __int64 v19; // [rsp+60h] [rbp-51h]
  __int64 v20; // [rsp+68h] [rbp-49h]
  __int64 v21; // [rsp+70h] [rbp-41h]
  int *v22; // [rsp+78h] [rbp-39h]
  __int64 v23; // [rsp+80h] [rbp-31h]
  __int64 v24; // [rsp+88h] [rbp-29h]
  __int64 v25; // [rsp+90h] [rbp-21h]
  __int64 v26; // [rsp+98h] [rbp-19h]
  __int64 v27; // [rsp+A0h] [rbp-11h]
  __int64 v28; // [rsp+A8h] [rbp-9h]
  __int64 v29; // [rsp+B0h] [rbp-1h]
  _WORD *v30; // [rsp+B8h] [rbp+7h]
  int v31; // [rsp+C0h] [rbp+Fh]
  int v32; // [rsp+C4h] [rbp+13h]

  v1 = Src;
  PoolWithTag = 0LL;
  if ( Src )
  {
    v3 = (const EVENT_DESCRIPTOR *)&PPM_ETW_GET_PLATFORM_IDLE_STATE;
    if ( a1 )
      v3 = &PPM_ETW_GET_PLATFORM_IDLE_STATE_RUNDOWN;
    if ( EtwEventEnabled(ProcLibEtwHandle, v3) )
    {
      v14 = 0;
      v4 = 0LL;
      v5 = 0;
      if ( !v1[2] )
        goto LABEL_11;
      do
      {
        if ( v1[12 * v5 + 18] > (unsigned int)v4 )
          v4 = (unsigned int)v1[12 * v5 + 18];
        v14 = ++v5;
      }
      while ( v5 < v1[2] );
      if ( !(_DWORD)v4 || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, 12 * v4, 0x72637250u)) != 0LL )
      {
LABEL_11:
        v14 = 0;
        for ( i = 0; i < v1[2]; v14 = i )
        {
          *(_QWORD *)&UserData.Size = 4LL;
          v7 = 7;
          v19 = 2LL;
          v21 = 1LL;
          v8 = (__int64)&v1[12 * i + 14];
          UserData.Ptr = (unsigned __int64)&v14;
          v18 = v8;
          v20 = v8 + 2;
          v9 = (unsigned int *)(v8 + 16);
          v16 = *(unsigned __int8 *)(v8 + 4);
          v22 = &v16;
          v24 = v8 + 8;
          v26 = v8 + 12;
          v23 = 4LL;
          v25 = 4LL;
          v27 = 4LL;
          v28 = v8 + 16;
          v29 = 4LL;
          if ( *(_DWORD *)(v8 + 16) )
          {
            v10 = 0;
            do
            {
              v11 = v10;
              KeGetProcessorNumberFromIndex(*(_DWORD *)(*(_QWORD *)(v8 + 40) + 8LL * v10), &ProcNumber);
              v12 = 3LL * v10;
              PoolWithTag[2 * v12] = ProcNumber.Group;
              ++v10;
              LOBYTE(PoolWithTag[2 * v12 + 1]) = ProcNumber.Number;
              HIBYTE(PoolWithTag[2 * v12 + 1]) = *(_BYTE *)(*(_QWORD *)(v8 + 40) + 8 * v11 + 4);
              *(_DWORD *)&PoolWithTag[2 * v12 + 2] = *(unsigned __int8 *)(*(_QWORD *)(v8 + 40) + 8 * v11 + 5);
              *(_DWORD *)&PoolWithTag[2 * v12 + 4] = *(unsigned __int8 *)(*(_QWORD *)(v8 + 40) + 8 * v11 + 6);
            }
            while ( v10 < *v9 );
            v13 = *v9;
            v30 = PoolWithTag;
            v32 = 0;
            v7 = 8;
            v31 = 12 * v13;
          }
          EtwWrite(ProcLibEtwHandle, v3, 0LL, v7, &UserData);
          i = v14 + 1;
        }
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0x72637250u);
      }
    }
  }
}
