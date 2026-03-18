/*
 * XREFs of ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1C00CEBE0
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C4D00 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1C00CD300 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 * Callees:
 *     ?AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4_POOL_TYPE@@@Z @ 0x1C0015A64 (-AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001D458 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 */

__int64 __fastcall ReadPresentPrivateDriverData(
        struct DXGADAPTER *a1,
        __int64 a2,
        char *a3,
        struct CRefCountedBuffer **a4)
{
  size_t v6; // rdi
  struct CRefCountedBuffer *RefCountedBuffer; // rax
  __int64 v8; // rcx
  struct CRefCountedBuffer *v9; // rbx
  __int64 v10; // rax

  v6 = (unsigned int)a2;
  *a4 = 0LL;
  if ( (*((int *)a1 + 492) >= 0x2000 || *((_BYTE *)a1 + 2252)) && *((_DWORD *)a1 + 382) >= 0x5007u && (_DWORD)a2 )
  {
    RefCountedBuffer = CRefCountedBuffer::AllocateRefCountedBuffer(a2, a2, (__int64)a3);
    v9 = RefCountedBuffer;
    if ( !RefCountedBuffer )
    {
      v10 = WdLogNewEntry5_WdLowResource(v8);
      *(_QWORD *)(v10 + 24) = 2234LL;
      WdLogEvent5_WdLowResource(v10);
      return 3221225495LL;
    }
    *(_DWORD *)RefCountedBuffer = v6;
    *((_DWORD *)RefCountedBuffer + 1) = 1;
    if ( &a3[v6] < a3 || (unsigned __int64)&a3[v6] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove((char *)RefCountedBuffer + 8, a3, v6);
    *a4 = v9;
  }
  return 0LL;
}
