/*
 * XREFs of ?GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z @ 0x1C007A780
 * Callers:
 *     ?GetMDLForRange@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX_K1@Z @ 0x1C007A710 (-GetMDLForRange@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX_K1@Z.c)
 * Callees:
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z @ 0x1C00583B0 (-CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z.c)
 */

struct _MDL *__fastcall VIDMM_RECYCLE_MULTIRANGE::GetMDLForRange(
        VIDMM_RECYCLE_MULTIRANGE *this,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v6; // r8
  SIZE_T v8; // rbp
  PVOID PoolWithTag; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax

  if ( *((_DWORD *)this + 54) == 4 )
  {
    v6 = *((_QWORD *)this + 13);
    if ( v6 )
    {
      if ( *((_QWORD *)this + 14) == a2 )
      {
        if ( *((_QWORD *)this + 15) == a3 )
          return (struct _MDL *)*((_QWORD *)this + 13);
      }
      else if ( *((_QWORD *)this + 15) == a3 )
      {
        goto LABEL_8;
      }
      ExFreePoolWithTag(*((PVOID *)this + 13), 0);
    }
    v8 = 8 * (a3 >> 12) + 48;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v8, 0x35336956u);
    *((_QWORD *)this + 13) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x30uLL);
      *(_DWORD *)(*((_QWORD *)this + 13) + 40LL) = a3;
      *(_WORD *)(*((_QWORD *)this + 13) + 8LL) = v8;
      *(_QWORD *)(*((_QWORD *)this + 13) + 16LL) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL)
                                                                           + 8LL)
                                                               + 8LL);
      v6 = *((_QWORD *)this + 13);
LABEL_8:
      v11 = a2 + *((_QWORD *)this + 6);
      *((_QWORD *)this + 14) = a2;
      *((_QWORD *)this + 15) = a3;
      *(_QWORD *)(v6 + 32) = v11;
      VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray(
        (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 10) + 88LL),
        (unsigned __int64 *)(*((_QWORD *)this + 13) + 48LL),
        a2 + *((_QWORD *)this + 6),
        a2 + *((_QWORD *)this + 6) + a3);
      return (struct _MDL *)*((_QWORD *)this + 13);
    }
    _InterlockedIncrement(&dword_1C0047640);
    v12 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v12 + 24) = 4116LL;
    WdLogEvent5_WdLowResource(v12);
  }
  return 0LL;
}
