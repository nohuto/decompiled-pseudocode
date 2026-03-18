/*
 * XREFs of ?AllocateOcclusionInfo@CVisual@@MEAAPEAVCOcclusionInfo@@XZ @ 0x180049B00
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800AB230 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

struct COcclusionInfo *__fastcall CVisual::AllocateOcclusionInfo(CVisual *this)
{
  struct COcclusionInfo *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = (struct COcclusionInfo *)HeapAlloc(WPF::g_processHeap, 0, 0x18uLL);
  if ( !result )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *((_QWORD *)result + 1) = 0LL;
  *((_QWORD *)result + 2) = 0LL;
  *(_QWORD *)result = &CVisualOcclusionInfo::`vftable';
  return result;
}
