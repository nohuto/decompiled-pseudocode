/*
 * XREFs of ?AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4_POOL_TYPE@@@Z @ 0x1C001B89C
 * Callers:
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1C00CE588 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z.c)
 *     ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1C01A3484 (-SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@@Z.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C01DA294 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCo.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

struct CRefCountedBuffer *__fastcall CRefCountedBuffer::AllocateRefCountedBuffer(
        unsigned int a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax

  v3 = a1;
  if ( (int)v3 + 8 >= (unsigned int)v3 )
    return (struct CRefCountedBuffer *)operator new[](a1 + 8, 0x4B677844u, (POOL_TYPE)512);
  v4 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, a2, a3);
  *(_QWORD *)(v4 + 24) = v3;
  WdLogEvent5_WdWarning(v4);
  return 0LL;
}
