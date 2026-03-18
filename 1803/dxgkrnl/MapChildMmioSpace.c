/*
 * XREFs of MapChildMmioSpace @ 0x1C0187430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MapChildMmioSpace(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v9; // rcx
  PVOID PoolWithTag; // rsi
  __int64 v11; // rax
  char v13; // al
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x4B677844u);
  if ( !PoolWithTag )
  {
    v11 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v11 + 24) = 8458LL;
    WdLogEvent5_WdLowResource(v11);
    return 3221225495LL;
  }
  v13 = *(_BYTE *)(a1 + 323);
  if ( (v13 & 8) != 0 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 456LL);
  }
  else
  {
    if ( (v13 & 4) == 0 )
    {
      v15 = 0LL;
      goto LABEL_9;
    }
    v14 = *(_QWORD *)(a1 + 456);
  }
  v15 = (_QWORD *)(v14 + 88);
LABEL_9:
  v16 = VmbChannelMapChildMmioSpace(*v15, a2 + 48, a3 >> 12, a4, PoolWithTag);
  v18 = v16;
  if ( v16 >= 0 )
  {
    *a5 = PoolWithTag;
    _InterlockedIncrement(&g_VgpuNumHpaToGpaMappings);
    _InterlockedExchangeAdd64(&g_VgpuSizeHpaToGpaMappings, a3);
  }
  else
  {
    v19 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v19 + 24) = v18;
    WdLogEvent5_WdAssertion(v19);
    ExFreePoolWithTag(PoolWithTag, 0x4B677844u);
  }
  return (unsigned int)v18;
}
