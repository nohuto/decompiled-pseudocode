/*
 * XREFs of VidSchiAllocateHistoryBufferStorage @ 0x1C00B2F64
 * Callers:
 *     VidSchSubmitCommand @ 0x1C006E3C0 (VidSchSubmitCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiAllocateHistoryBufferStorage(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  PVOID PoolWithTag; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  PVOID v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx

  if ( a2 <= 4 )
  {
    *(_QWORD *)(a1 + 624) = a1 + 184;
    *(_QWORD *)(a1 + 280) = a1 + 216;
    return 0LL;
  }
  v4 = a2;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * a2, 0x75424856u);
  *(_QWORD *)(a1 + 624) = PoolWithTag;
  if ( PoolWithTag )
  {
    v9 = ExAllocatePoolWithTag((POOL_TYPE)512, 16 * v4, 0x75424856u);
    *(_QWORD *)(a1 + 280) = v9;
    if ( v9 )
      return 0LL;
    ExFreePoolWithTag(*(PVOID *)(a1 + 624), 0);
    *(_QWORD *)(a1 + 624) = 0LL;
    v8 = WdLogNewEntry5_WdLowResource(v11, v10);
    *(_QWORD *)(v8 + 24) = 9784LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdLowResource(v7, v6);
    *(_QWORD *)(v8 + 24) = 9772LL;
  }
  WdLogEvent5_WdLowResource(v8);
  return 3221225495LL;
}
