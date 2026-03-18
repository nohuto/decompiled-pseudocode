/*
 * XREFs of VidSchiOpenProcessAdapterInfo @ 0x1C006C378
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C006C10C (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     memset @ 0x1C0015FC0 (memset.c)
 */

__int64 __fastcall VidSchiOpenProcessAdapterInfo(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rsi
  _DWORD *v5; // rcx
  __int64 v6; // rdx
  void *v7; // rcx
  __int64 v8; // r14
  PVOID PoolWithTag; // rax
  __int64 v10; // rdx
  void *v11; // rcx
  __int64 v12; // r14
  PVOID v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 i; // rbx
  void *v20; // rcx
  __int64 j; // rbx
  void *v22; // rcx
  void *v23; // rcx

  v2 = a2[1];
  v5 = *(_DWORD **)(*(_QWORD *)(a1 + 24) + 8 * v2);
  if ( v5 )
  {
    ++*v5;
    return 0LL;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) = ExAllocatePoolWithTag((POOL_TYPE)512, 0x298uLL, 0x68536956u);
  v7 = *(void **)(*(_QWORD *)(a1 + 24) + 8 * v2);
  if ( v7 )
  {
    memset(v7, 0, 0x298uLL);
    v8 = 0LL;
    for ( **(_DWORD **)(*(_QWORD *)(a1 + 24) + 8 * v2) = 1; (unsigned int)v8 < a2[15]; v8 = (unsigned int)(v8 + 1) )
    {
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0xD8uLL, 0x68536956u);
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2);
      *(_QWORD *)(v10 + 8 * v8 + 8) = PoolWithTag;
      v11 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * v8 + 8);
      if ( !v11 )
        goto LABEL_14;
      memset(v11, 0, 0xD8uLL);
    }
    v12 = 0LL;
    if ( a2[10] )
    {
      while ( 1 )
      {
        v13 = ExAllocatePoolWithTag((POOL_TYPE)512, 0xCuLL, 0x68536956u);
        v10 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2);
        *(_QWORD *)(v10 + 8 * v12 + 520) = v13;
        v11 = *(void **)(*(_QWORD *)(a1 + 24) + 8 * v2);
        v14 = *((_QWORD *)v11 + v12 + 65);
        if ( !v14 )
          break;
        v12 = (unsigned int)(v12 + 1);
        *(_QWORD *)v14 = 0LL;
        *(_DWORD *)(v14 + 8) = 0;
        if ( (unsigned int)v12 >= a2[10] )
          goto LABEL_9;
      }
LABEL_14:
      v18 = WdLogNewEntry5_WdWarning(v11, v10);
      WdLogEvent5_WdWarning(v18);
      for ( i = 0LL; (unsigned int)i < a2[10]; i = (unsigned int)(i + 1) )
      {
        v20 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * i + 520);
        if ( v20 )
        {
          ExFreePoolWithTag(v20, 0);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * i + 520) = 0LL;
        }
      }
      for ( j = 0LL; (unsigned int)j < a2[15]; j = (unsigned int)(j + 1) )
      {
        v22 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * j + 8);
        if ( v22 )
        {
          ExFreePoolWithTag(v22, 0);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * j + 8) = 0LL;
        }
      }
      v23 = *(void **)(*(_QWORD *)(a1 + 24) + 8 * v2);
      if ( v23 )
      {
        ExFreePoolWithTag(v23, 0);
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) = 0LL;
      }
      return 3221225495LL;
    }
LABEL_9:
    v15 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 648LL);
    v15[1] = v15;
    *v15 = v15;
    return 0LL;
  }
  v17 = WdLogNewEntry5_WdWarning(0LL, v6);
  WdLogEvent5_WdWarning(v17);
  return 3221225495LL;
}
