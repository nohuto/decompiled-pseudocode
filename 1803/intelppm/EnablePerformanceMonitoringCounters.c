/*
 * XREFs of EnablePerformanceMonitoringCounters @ 0x1C0034044
 * Callers:
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C0022B28 (InitializeEnergyEstimationForEfficiencyClass.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003C40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0005280 (memset.c)
 */

__int64 __fastcall EnablePerformanceMonitoringCounters(__int64 a1)
{
  int *v2; // rax
  unsigned int v3; // edi
  int v4; // ebx
  unsigned int v5; // ecx
  int *v6; // rdx
  int *i; // r8
  int v8; // eax
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v14[16]; // [rsp+38h] [rbp-20h] BYREF

  v2 = &dword_1C001AB60[64 * (unsigned __int64)*(unsigned __int8 *)(a1 + 352)];
  v3 = v2[10];
  if ( v3 )
  {
    if ( v3 > 4 )
      return (unsigned int)-1073741670;
    v5 = 0;
    v6 = (int *)v14;
    for ( i = v2 + 11; ; i += 3 )
    {
      v8 = *i;
      *v6 = *i;
      if ( (unsigned int)(v8 - 2) > 0x15 )
        break;
      ++v5;
      ++v6;
      if ( v5 >= v3 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x72637250u);
        v10 = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741670;
        memset(PoolWithTag, 0, 0x70uLL);
        v11 = *(unsigned int *)(a1 + 56);
        *(_QWORD *)(a1 + 344) = v10;
        v4 = ((__int64 (__fastcall *)(__int64, _BYTE *, _QWORD, __int64 *))HalPrivateDispatchTable[72])(
               v11,
               v14,
               v3,
               &v13);
        if ( v4 < 0 )
        {
          ExFreePoolWithTag(v10, 0x72637250u);
          *(_QWORD *)(a1 + 344) = 0LL;
        }
        else
        {
          v10[1] = v13;
          *(_DWORD *)v10 = v3;
        }
        return (unsigned int)v4;
      }
    }
  }
  return (unsigned int)-1073741637;
}
