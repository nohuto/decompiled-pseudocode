/*
 * XREFs of PpmEventTracePlatformIdleAccounting @ 0x14076CD78
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140655C50 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x14027EF20 (PpmTranslatePlatformIdleAccounting.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

void PpmEventTracePlatformIdleAccounting()
{
  _QWORD *v0; // rbx
  __int64 v1; // r13
  int v2; // esi
  unsigned int v3; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rcx
  __int64 v6; // r8
  __int64 *v7; // rdx
  __int64 v8; // rax
  PVOID v9; // rax
  void *v10; // r14
  char v11; // [rsp+38h] [rbp-39h] BYREF
  __int16 v12; // [rsp+3Ch] [rbp-35h] BYREF
  int v13; // [rsp+40h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-29h] BYREF
  __int16 *v15; // [rsp+58h] [rbp-19h]
  __int64 v16; // [rsp+60h] [rbp-11h]
  char *v17; // [rsp+68h] [rbp-9h]
  __int64 v18; // [rsp+70h] [rbp-1h]
  int *v19; // [rsp+78h] [rbp+7h]
  __int64 v20; // [rsp+80h] [rbp+Fh]
  _QWORD *v21; // [rsp+88h] [rbp+17h]
  int v22; // [rsp+90h] [rbp+1Fh]
  int v23; // [rsp+94h] [rbp+23h]

  v0 = 0LL;
  v11 = 64;
  v12 = 20;
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PLATFORM_IDLE_ACCOUNTING_RUNDOWN) && PpmPlatformStates )
  {
    v1 = *(_QWORD *)(PpmPlatformStates + 48);
    v2 = 0;
    v3 = *(_DWORD *)(v1 + 4);
    if ( *(_DWORD *)(PpmPlatformStates + 4) == 1 )
    {
      v2 = 80 * v3;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 80 * v3, 0x654D5050u);
      v0 = PoolWithTag;
      if ( !PoolWithTag )
        return;
      memset(PoolWithTag, 0, 80 * v3);
      if ( v3 )
      {
        v5 = v0 + 2;
        v6 = v3;
        v7 = (__int64 *)(v1 + 112);
        do
        {
          *(v5 - 1) = *(v7 - 1);
          v8 = *v7;
          v7 += 126;
          *v5 = v8;
          v5 += 10;
          *(v5 - 9) = *(v7 - 124);
          *(v5 - 8) = *(v7 - 125);
          *(v5 - 5) = *(v7 - 129);
          *(v5 - 4) = *(v7 - 130);
          *(v5 - 3) = *(v7 - 131);
          *(v5 - 12) = *(v7 - 121);
          *(v5 - 7) = *(v7 - 119);
          *(v5 - 6) = *(v7 - 120);
          --v6;
        }
        while ( v6 );
      }
    }
    v9 = ExAllocatePoolWithTag(NonPagedPoolNx, 664 * v3 + 32, 0x654D5050u);
    v10 = v9;
    if ( v9 )
    {
      memset(v9, 0, 664 * v3 + 32);
      PpmTranslatePlatformIdleAccounting(v1, (__int64)v10);
      UserData.Ptr = (ULONGLONG)v10;
      v15 = &v12;
      UserData.Size = 664 * v3 + 32;
      v17 = &v11;
      UserData.Reserved = 0;
      v16 = 2LL;
      v18 = 1LL;
      if ( v0 )
      {
        v21 = v0;
        v22 = v2;
        v23 = 0;
      }
      v20 = 4LL;
      v19 = &v13;
      v13 = v0 != 0LL ? v3 : 0;
      EtwWrite(PpmEtwHandle, &PPM_ETW_PLATFORM_IDLE_ACCOUNTING_RUNDOWN, 0LL, (v0 != 0LL) + 4, &UserData);
      ExFreePoolWithTag(v10, 0x654D5050u);
    }
    if ( v0 )
      ExFreePoolWithTag(v0, 0x654D5050u);
  }
}
