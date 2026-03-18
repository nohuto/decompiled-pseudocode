/*
 * XREFs of ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C00B1990
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B2DA0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00BDE10 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 * Callees:
 *     ?AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4_POOL_TYPE@@@Z @ 0x1C00147EC (-AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00201C8 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 */

__int64 __fastcall ReadPresentPrivateDriverData(
        struct DXGADAPTER *a1,
        const struct _D3DKMT_PRESENT *a2,
        struct CRefCountedBuffer **a3,
        __int64 a4)
{
  UINT PrivateDriverDataSize; // ecx
  __int64 v7; // rcx
  struct CRefCountedBuffer *RefCountedBuffer; // rbx
  __int64 v9; // rax
  size_t v11; // r8
  char *pPrivateDriverData; // rdx

  *a3 = 0LL;
  if ( (*((int *)a1 + 486) >= 0x2000 || *((_BYTE *)a1 + 2228)) && *((_DWORD *)a1 + 376) >= 0x5007u )
  {
    PrivateDriverDataSize = a2->PrivateDriverDataSize;
    if ( PrivateDriverDataSize )
    {
      RefCountedBuffer = CRefCountedBuffer::AllocateRefCountedBuffer(
                           PrivateDriverDataSize,
                           (__int64)a2,
                           (__int64)a3,
                           a4);
      if ( !RefCountedBuffer )
      {
        v9 = WdLogNewEntry5_WdLowResource(v7);
        *(_QWORD *)(v9 + 24) = 1837LL;
        WdLogEvent5_WdLowResource(v9);
        return 3221225495LL;
      }
      *(_DWORD *)RefCountedBuffer = a2->PrivateDriverDataSize;
      *((_DWORD *)RefCountedBuffer + 1) = 1;
      v11 = a2->PrivateDriverDataSize;
      pPrivateDriverData = (char *)a2->pPrivateDriverData;
      if ( &pPrivateDriverData[v11] < pPrivateDriverData
        || (unsigned __int64)&pPrivateDriverData[v11] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove((char *)RefCountedBuffer + 8, pPrivateDriverData, v11);
      *a3 = RefCountedBuffer;
    }
  }
  return 0LL;
}
