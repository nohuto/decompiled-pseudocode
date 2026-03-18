/*
 * XREFs of ?HasAntialiasedContent@CVisual@@MEBA_NXZ @ 0x180049ED0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CVisual::HasAntialiasedContent(CVisual *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 31);
  return v2 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2)
      || (*((_DWORD *)this + 22) & 0x100) != 0;
}
