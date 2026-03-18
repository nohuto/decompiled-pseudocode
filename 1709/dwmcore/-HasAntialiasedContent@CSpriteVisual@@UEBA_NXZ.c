/*
 * XREFs of ?HasAntialiasedContent@CSpriteVisual@@UEBA_NXZ @ 0x180022320
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CSpriteVisual::HasAntialiasedContent(CSpriteVisual *this)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 30);
  if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 200LL))(v3)
    || (*((_DWORD *)this + 22) & 0x100) != 0
    || (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x100) != 0 )
  {
    return 1;
  }
  return v2;
}
