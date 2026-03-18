/*
 * XREFs of PpmEventTraceProcessorIdleAccounting @ 0x140281A60
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PpmTranslateIdleAccounting @ 0x14027ECE0 (PpmTranslateIdleAccounting.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmEventTraceProcessorIdleAccounting(__int64 a1)
{
  _QWORD *v1; // rbx
  _BYTE *v3; // rax
  _DWORD *v4; // rsi
  unsigned int v5; // edi
  int v6; // r14d
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rdx
  __int64 *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rax
  PVOID v12; // rax
  void *v13; // rsi
  __int16 v15; // [rsp+48h] [rbp-49h] BYREF
  int v16; // [rsp+4Ch] [rbp-45h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-39h] BYREF
  __int16 *v19; // [rsp+68h] [rbp-29h]
  __int64 v20; // [rsp+70h] [rbp-21h]
  __int64 v21; // [rsp+78h] [rbp-19h]
  __int64 v22; // [rsp+80h] [rbp-11h]
  unsigned __int64 *v23; // [rsp+88h] [rbp-9h]
  __int64 v24; // [rsp+90h] [rbp-1h]
  int *v25; // [rsp+98h] [rbp+7h]
  __int64 v26; // [rsp+A0h] [rbp+Fh]
  _QWORD *v27; // [rsp+A8h] [rbp+17h]
  int v28; // [rsp+B0h] [rbp+1Fh]
  int v29; // [rsp+B4h] [rbp+23h]

  v1 = 0LL;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_IDLE_ACCOUNTING_RUNDOWN) )
    {
      v3 = *(_BYTE **)(a1 + 23808);
      if ( v3 )
      {
        v4 = *(_DWORD **)(a1 + 23816);
        if ( v4 )
        {
          v5 = *v4;
          v6 = 0;
          if ( *v3 == 1 )
          {
            v6 = 80 * v5;
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 80 * v5, 0x654D5050u);
            v1 = PoolWithTag;
            if ( !PoolWithTag )
              return 0LL;
            memset(PoolWithTag, 0, 80 * v5);
            if ( v5 )
            {
              v8 = v1 + 3;
              v9 = (__int64 *)(v4 + 38);
              v10 = v5;
              do
              {
                *(v8 - 3) = *(v9 - 1);
                v11 = *v9;
                v9 += 125;
                *(v8 - 1) = v11;
                *v8 = *(v9 - 130);
                v8 += 10;
                *(v8 - 9) = *(v9 - 129);
                *(v8 - 6) = *(v9 - 132);
                *(v8 - 5) = *(v9 - 133);
                *(v8 - 4) = *(v9 - 134);
                *(v8 - 12) = *(v9 - 124);
                *(v8 - 8) = *(v9 - 122);
                *(v8 - 7) = *(v9 - 123);
                --v10;
              }
              while ( v10 );
            }
          }
          v12 = ExAllocatePoolWithTag(NonPagedPoolNx, 416 * v5 + 24, 0x654D5050u);
          v13 = v12;
          if ( v12 )
          {
            memset(v12, 0, 416 * v5 + 24);
            PpmTranslateIdleAccounting((_QWORD *)(a1 + 23808), (__int64)v13, &v17);
            v15 = *(unsigned __int8 *)(a1 + 208);
            v19 = &v15;
            v21 = a1 + 209;
            v23 = &v17;
            UserData.Ptr = (ULONGLONG)v13;
            UserData.Size = 416 * v5 + 24;
            UserData.Reserved = 0;
            v20 = 2LL;
            v22 = 1LL;
            v24 = 8LL;
            if ( v1 )
            {
              v27 = v1;
              v28 = v6;
              v29 = 0;
            }
            v26 = 4LL;
            v25 = &v16;
            v16 = v1 != 0LL ? v5 : 0;
            EtwWriteEx(PpmEtwHandle, &PPM_ETW_IDLE_ACCOUNTING_RUNDOWN, 0LL, 0, 0LL, 0LL, (v1 != 0LL) + 5, &UserData);
            ExFreePoolWithTag(v13, 0x654D5050u);
          }
          if ( v1 )
            ExFreePoolWithTag(v1, 0x654D5050u);
        }
      }
    }
  }
  return 0LL;
}
