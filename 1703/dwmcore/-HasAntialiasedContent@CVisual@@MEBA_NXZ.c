/*
 * XREFs of ?HasAntialiasedContent@CVisual@@MEBA_NXZ @ 0x180084A70
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CVisual::HasAntialiasedContent(CVisual *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 30);
  return v2 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 184LL))(v2)
      || (*((_BYTE *)this + 88) & 0x40) != 0;
}
