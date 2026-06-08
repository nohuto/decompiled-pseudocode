/*
 * XREFs of InitializeEnergyEstimationForEfficiencyClass @ 0x1C001D950
 * Callers:
 *     InitializeEnergyEstimation @ 0x1C001D4AC (InitializeEnergyEstimation.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C000148C (InitializeEnumerationContext.c)
 *     ResetEnumerationContext @ 0x1C0001864 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00024C8 (EnumerateNextDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0005000 (memset.c)
 *     EnableEnergyEstimation @ 0x1C001E7A0 (EnableEnergyEstimation.c)
 *     DisableEnergyEstimation @ 0x1C0032C88 (DisableEnergyEstimation.c)
 *     EnablePerformanceMonitoringCounters @ 0x1C0032D24 (EnablePerformanceMonitoringCounters.c)
 */

__int64 __fastcall InitializeEnergyEstimationForEfficiencyClass(unsigned int a1)
{
  int *v2; // rbx
  __int64 result; // rax
  int v4; // r10d
  __int64 v5; // rdi
  __int64 i; // r8
  __int64 v7; // rcx
  int v8; // r10d
  __int64 v9; // rdi
  _QWORD *v10; // rsi
  __int64 v11[4]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+68h] [rbp+28h] BYREF

  v2 = &dword_1C0019B60[64 * (unsigned __int64)a1];
  InitializeEnumerationContext((__int64)&qword_1C00195E8, 32, (__int64)v11);
  ResetEnumerationContext(v11);
  result = EnumerateNextDevice((__int64)v11, &v12);
  if ( !(_DWORD)result )
  {
    while ( (*(_QWORD *)(v12 + 264) & 0x2000000000LL) == 0
         || *(unsigned __int8 *)(v12 + 352) != a1
         || (int)EnableEnergyEstimation() >= 0 )
    {
      result = EnumerateNextDevice((__int64)v11, &v12);
      if ( (_DWORD)result )
      {
        if ( v4 >= 0 )
          goto LABEL_37;
        break;
      }
    }
    InitializeEnumerationContext((__int64)&qword_1C00195E8, 32, (__int64)v11);
    ResetEnumerationContext(v11);
    while ( !(unsigned int)EnumerateNextDevice((__int64)v11, &v12) )
    {
      if ( (*(_QWORD *)(v12 + 264) & 0x2000000000LL) != 0 && *(unsigned __int8 *)(v12 + 352) == a1 )
        DisableEnergyEstimation();
    }
    *((_QWORD *)v2 + 31) = 0LL;
    v5 = 0LL;
    *((_QWORD *)v2 + 30) = 0LL;
    for ( i = 0LL; (unsigned int)i < v2[10]; i = (unsigned int)(i + 1) )
    {
      if ( (v2[3 * i + 12] & 1) == 0 )
      {
        if ( (_DWORD)i != (_DWORD)v5 )
        {
          v7 = 3 * v5;
          *(_QWORD *)&v2[v7 + 11] = *(_QWORD *)&v2[3 * i + 11];
          v2[v7 + 13] = v2[3 * i + 13];
        }
        v5 = (unsigned int)(v5 + 1);
      }
    }
    result = (unsigned int)v2[10];
    if ( (_DWORD)result != (_DWORD)v5 )
    {
      result = (__int64)memset(&v2[2 * v5 + 11 + (unsigned int)v5], 0, 12LL * (unsigned int)(result - v5));
      v2[10] = v5;
    }
    if ( (_DWORD)v5 )
    {
      ResetEnumerationContext(v11);
      result = EnumerateNextDevice((__int64)v11, &v12);
      if ( (_DWORD)result )
      {
LABEL_27:
        if ( *((_QWORD *)v2 + 30) )
          return result;
      }
      else
      {
        while ( (*(_QWORD *)(v12 + 264) & 0x2000000000LL) == 0
             || *(unsigned __int8 *)(v12 + 352) != a1
             || (int)EnablePerformanceMonitoringCounters() >= 0 )
        {
          result = EnumerateNextDevice((__int64)v11, &v12);
          if ( (_DWORD)result )
          {
            if ( v8 < 0 )
              break;
            goto LABEL_27;
          }
        }
      }
      InitializeEnumerationContext((__int64)&qword_1C00195E8, 32, (__int64)v11);
      ResetEnumerationContext(v11);
      while ( 1 )
      {
        result = EnumerateNextDevice((__int64)v11, &v12);
        if ( (_DWORD)result )
          break;
        v9 = v12;
        if ( (*(_QWORD *)(v12 + 264) & 0x2000000000LL) != 0 && *(unsigned __int8 *)(v12 + 352) == a1 )
        {
          v10 = *(_QWORD **)(v12 + 344);
          if ( v10 )
          {
            if ( v10[1] )
            {
              ((void (*)(void))HalPrivateDispatchTable[74])();
              v10[1] = 0LL;
            }
            ExFreePoolWithTag(v10, 0x72637250u);
            *(_QWORD *)(v9 + 344) = 0LL;
          }
        }
      }
      *((_QWORD *)v2 + 31) = 0LL;
      *((_QWORD *)v2 + 30) = 0LL;
    }
  }
LABEL_37:
  if ( !*((_QWORD *)v2 + 30) )
  {
    result = (__int64)ComputeProcessorEnergy;
    *((_QWORD *)v2 + 30) = ComputeProcessorEnergy;
  }
  return result;
}
