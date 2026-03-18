/*
 * XREFs of ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C44D4
 * Callers:
 *     ?Initialize@CDrawingContext@@EEAAJXZ @ 0x18006E500 (-Initialize@CDrawingContext@@EEAAJXZ.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800A2CF0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 *     ?Initialize@COcclusionContext@@AEAAJXZ @ 0x1800ACD30 (-Initialize@COcclusionContext@@AEAAJXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CContentBounder::Create(struct CComposition *a1, struct CContentBounder **a2)
{
  struct CContentBounder *v4; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = (struct CContentBounder *)HeapAlloc(WPF::g_processHeap, 0, 0x18uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *((_QWORD *)v4 + 2) = 0LL;
  *((_QWORD *)v4 + 1) = 0LL;
  *(_QWORD *)v4 = a1;
  *a2 = v4;
  return 0LL;
}
