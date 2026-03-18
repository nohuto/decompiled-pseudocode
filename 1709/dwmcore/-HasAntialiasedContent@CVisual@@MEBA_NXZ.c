/*
 * XREFs of ?HasAntialiasedContent@CVisual@@MEBA_NXZ @ 0x180054420
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CVisual::HasAntialiasedContent(CVisual *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 30);
  return v2 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2)
      || (*((_DWORD *)this + 22) & 0x100) != 0;
}
