/*
 * XREFs of DpiFdoHandleQueryPowerRelations @ 0x1C01C407C
 * Callers:
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C0116260 (DpiFdoHandleQueryDeviceRelations.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00013AC (-AcquireMiniportListMutex@@YAXXZ.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     DpiGetFdoFromDevice @ 0x1C008CC0C (DpiGetFdoFromDevice.c)
 */

__int64 __fastcall DpiFdoHandleQueryPowerRelations(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rsi
  unsigned int v3; // ebx
  void *v5; // rbp
  unsigned int v6; // r14d
  __int64 FdoFromDevice; // rax
  _DWORD *PoolWithTag; // rax
  __int64 v9; // rcx
  _DWORD *v10; // rdi
  __int64 v11; // rax

  v2 = *(unsigned int **)(a2 + 56);
  v3 = 0;
  v5 = 0LL;
  v6 = 0;
  if ( !*(_BYTE *)(a1 + 1143) )
    return (unsigned int)-1073741637;
  AcquireMiniportListMutex();
  FdoFromDevice = DpiGetFdoFromDevice(qword_1C006FC00);
  if ( FdoFromDevice )
  {
    v5 = *(void **)(FdoFromDevice + 152);
    ObfReferenceObject(v5);
  }
  _InterlockedExchange64(&qword_1C006FA08, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v5 )
  {
    if ( v2 )
      v6 = *v2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v6 + 16, 0x74727044u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( v2 && v6 )
        memmove(PoolWithTag, v2, 8LL * (v6 - 1) + 16);
      else
        *PoolWithTag = 0;
      *(_QWORD *)&v10[2 * (*v10)++ + 2] = v5;
      *(_QWORD *)(a2 + 56) = v10;
      if ( v2 )
        ExFreePoolWithTag(v2, 0);
    }
    else
    {
      v3 = -1073741801;
      v11 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v11 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v11);
      ObfDereferenceObject(v5);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
