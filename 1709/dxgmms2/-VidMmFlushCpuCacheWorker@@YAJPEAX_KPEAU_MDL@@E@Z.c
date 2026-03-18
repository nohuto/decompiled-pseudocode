/*
 * XREFs of ?VidMmFlushCpuCacheWorker@@YAJPEAX_KPEAU_MDL@@E@Z @ 0x1C009F18C
 * Callers:
 *     ?FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@HE@Z @ 0x1C009AAE0 (-FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@HE@Z.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 */

__int64 __fastcall VidMmFlushCpuCacheWorker(__int64 BaseAddress, unsigned __int64 Length, struct _MDL *a3)
{
  unsigned __int64 v3; // rsi
  char *v4; // r14
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  ULONG v9; // ebx

  v3 = Length;
  v4 = (char *)BaseAddress;
  if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(BaseAddress, (__int64)&EventProfilerEnter, (__int64)a3, 8008);
  if ( v4 )
  {
    if ( (v3 & 0xFFFFFFFF80000000uLL) != 0 )
    {
      KeInvalidateAllCaches();
    }
    else
    {
      while ( v3 )
      {
        v9 = -1;
        if ( v3 < 0xFFFFFFFF )
          v9 = v3;
        KeInvalidateRangeAllCaches(v4, v9);
        v3 -= v9;
        v4 += v9;
      }
    }
    if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(qword_1C0040010, (__int64)&EventProfilerExit, (__int64)a3, 8008);
    return 0LL;
  }
  else
  {
    v5 = WdLogNewEntry5_WdAssertion(BaseAddress, Length);
    *(_QWORD *)(v5 + 24) = 17359LL;
    WdLogEvent5_WdAssertion(v5);
    if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v6, (__int64)&EventProfilerExit, v7, 8008);
    return 3221225485LL;
  }
}
