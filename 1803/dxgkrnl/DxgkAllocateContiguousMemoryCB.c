/*
 * XREFs of DxgkAllocateContiguousMemoryCB @ 0x1C002E9E0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DpiAddMemoryTracker @ 0x1C0040490 (DpiAddMemoryTracker.c)
 */

__int64 __fastcall DxgkAllocateContiguousMemoryCB(__int64 a1, PHYSICAL_ADDRESS *a2, __int64 a3)
{
  __int64 CacheType; // rbx
  __int64 v6; // rax
  __int64 result; // rax
  PVOID ContiguousMemorySpecifyCache; // rbp
  __int64 v9; // rax
  __int64 v10; // rsi
  _QWORD *v11; // rbx
  SIZE_T QuadPart; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax

  CacheType = (int)a2[4].LowPart;
  if ( (int)CacheType > 2 )
  {
    v6 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v6 + 24) = CacheType;
    WdLogEvent5_WdWarning(v6);
    return 2147942487LL;
  }
  ContiguousMemorySpecifyCache = MmAllocateContiguousMemorySpecifyCache(
                                   a2->QuadPart,
                                   a2[1],
                                   a2[2],
                                   a2[3],
                                   (MEMORY_CACHING_TYPE)CacheType);
  if ( !ContiguousMemorySpecifyCache )
  {
    v9 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v9 + 24) = 867LL;
    WdLogEvent5_WdLowResource(v9);
    LODWORD(v10) = -1073741801;
    return (unsigned int)v10;
  }
  v11 = operator new[](0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v11 )
  {
    QuadPart = a2->QuadPart;
    *v11 = 0LL;
    v11[1] = 0LL;
    *((_DWORD *)v11 + 4) = 0;
    v11[3] = ContiguousMemorySpecifyCache;
    v11[4] = QuadPart;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
  {
    v13 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v13 + 24) = 875LL;
    WdLogEvent5_WdLowResource(v13);
    LODWORD(v10) = -1073741801;
    goto LABEL_12;
  }
  v14 = DpiAddMemoryTracker(a1, v11);
  v10 = v14;
  if ( v14 < 0 )
  {
    v18 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v18 + 24) = v10;
    WdLogEvent5_WdWarning(v18);
LABEL_12:
    MmFreeContiguousMemory(ContiguousMemorySpecifyCache);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    return (unsigned int)v10;
  }
  a2[5].QuadPart = (LONGLONG)v11;
  result = 0LL;
  a2[6].QuadPart = (LONGLONG)ContiguousMemorySpecifyCache;
  return result;
}
