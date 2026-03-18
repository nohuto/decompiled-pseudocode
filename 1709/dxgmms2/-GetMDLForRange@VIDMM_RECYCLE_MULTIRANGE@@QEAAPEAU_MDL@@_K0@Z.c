/*
 * XREFs of ?GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z @ 0x1C006B688
 * Callers:
 *     ?GetMDLForRange@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX_K1@Z @ 0x1C00686D0 (-GetMDLForRange@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX_K1@Z.c)
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 *     ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z @ 0x1C004C6B4 (-CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z.c)
 */

struct _MDL *__fastcall VIDMM_RECYCLE_MULTIRANGE::GetMDLForRange(
        VIDMM_RECYCLE_MULTIRANGE *this,
        __int64 a2,
        unsigned __int64 a3)
{
  void *v6; // rcx
  SIZE_T v7; // rbp
  PVOID PoolWithTag; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v14; // rax

  if ( *((_DWORD *)this + 54) == 4 )
  {
    v6 = (void *)*((_QWORD *)this + 13);
    if ( v6 )
    {
      if ( *((_QWORD *)this + 14) == a2 )
      {
        if ( *((_QWORD *)this + 15) == a3 )
          return (struct _MDL *)v6;
      }
      else if ( *((_QWORD *)this + 15) == a3 )
      {
        goto LABEL_5;
      }
      ExFreePoolWithTag(v6, 0);
    }
    v7 = 8 * (a3 >> 12) + 48;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v7, 0x35336956u);
    *((_QWORD *)this + 13) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x30uLL);
      *(_DWORD *)(*((_QWORD *)this + 13) + 40LL) = a3;
      *(_WORD *)(*((_QWORD *)this + 13) + 8LL) = v7;
      *(_QWORD *)(*((_QWORD *)this + 13) + 16LL) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL)
                                                                           + 8LL)
                                                               + 8LL);
LABEL_5:
      v11 = *((_QWORD *)this + 13);
      v12 = a2 + *((_QWORD *)this + 6);
      *((_QWORD *)this + 14) = a2;
      *((_QWORD *)this + 15) = a3;
      *(_QWORD *)(v11 + 32) = v12;
      VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray(
        (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 10) + 88LL),
        (unsigned __int64 *)(*((_QWORD *)this + 13) + 48LL),
        a2 + *((_QWORD *)this + 6),
        a2 + *((_QWORD *)this + 6) + a3);
      return (struct _MDL *)*((_QWORD *)this + 13);
    }
    _InterlockedIncrement(&dword_1C0040640);
    v14 = WdLogNewEntry5_WdLowResource(v10, v9);
    *(_QWORD *)(v14 + 24) = 3933LL;
    WdLogEvent5_WdLowResource(v14);
  }
  return 0LL;
}
