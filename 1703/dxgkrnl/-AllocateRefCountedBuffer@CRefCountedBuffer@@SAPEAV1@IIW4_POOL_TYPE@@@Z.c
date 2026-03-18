/*
 * XREFs of ?AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4_POOL_TYPE@@@Z @ 0x1C00147EC
 * Callers:
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C00B1990 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C01B9CB0 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCo.c)
 * Callees:
 *     <none>
 */

struct CRefCountedBuffer *__fastcall CRefCountedBuffer::AllocateRefCountedBuffer(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax

  v4 = a1;
  if ( (int)v4 + 8 >= (unsigned int)v4 )
    return (struct CRefCountedBuffer *)operator new[](a1 + 8, 0x4B677844u, (enum _POOL_TYPE)512);
  v5 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, a2, a3, a4);
  *(_QWORD *)(v5 + 24) = v4;
  WdLogEvent5_WdWarning(v5);
  return 0LL;
}
