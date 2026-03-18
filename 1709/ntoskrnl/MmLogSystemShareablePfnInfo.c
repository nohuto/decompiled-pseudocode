/*
 * XREFs of MmLogSystemShareablePfnInfo @ 0x1406E734C
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14074CFD4 (EtwpKernelTraceRundown.c)
 * Callees:
 *     MiGetWorkingSetInfoEx @ 0x14000CD84 (MiGetWorkingSetInfoEx.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiGetAggregateWorkingSetSize @ 0x14022A224 (MiGetAggregateWorkingSetSize.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     EtwLogPfnInfoRundown @ 0x14074CA6C (EtwLogPfnInfoRundown.c)
 */

void __fastcall MmLogSystemShareablePfnInfo(__int64 a1, unsigned int a2)
{
  __int64 v3; // r14
  _QWORD *PoolWithTag; // rdi
  unsigned __int64 v5; // r15
  SIZE_T v6; // rsi
  char *AnyMultiplexedVm; // r12
  char *v8; // rbp
  unsigned __int64 AggregateWorkingSetSize; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rbx
  int v12; // ecx
  _DWORD v14[4]; // [rsp+28h] [rbp-50h]

  v14[0] = 2;
  v14[1] = 3;
  v3 = 0LL;
  v14[2] = 4;
  PoolWithTag = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
  v8 = AnyMultiplexedVm;
  AggregateWorkingSetSize = MiGetAggregateWorkingSetSize((__int64)AnyMultiplexedVm);
  if ( AggregateWorkingSetSize <= v10 )
    v11 = 64LL;
  else
    v11 = AggregateWorkingSetSize - v10 + 64;
  do
  {
    if ( v14[v3] == 2 )
    {
      v8 = AnyMultiplexedVm;
    }
    else
    {
      if ( v14[v3] == 3 )
      {
        v12 = 2;
      }
      else
      {
        if ( v14[v3] != 4 )
          goto LABEL_11;
        v12 = 1;
      }
      v8 = MiGetAnyMultiplexedVm(v12);
    }
LABEL_11:
    if ( v5 < v11 )
    {
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      v6 = 32 * v11 + 16;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x4D777445u);
      if ( !PoolWithTag )
        return;
      v5 = v11;
    }
    memset(PoolWithTag, 0, v6);
    if ( (int)MiGetWorkingSetInfoEx((__int64)v8, PoolWithTag, v6, 0) >= 0 )
    {
      if ( PoolWithTag[1] )
        EtwLogPfnInfoRundown(0LL, a1, a2, PoolWithTag);
      v3 = (unsigned int)(v3 + 1);
    }
    else
    {
      v11 = PoolWithTag[1] + 64LL;
    }
  }
  while ( (unsigned int)v3 < 3 );
  ExFreePoolWithTag(PoolWithTag, 0);
}
