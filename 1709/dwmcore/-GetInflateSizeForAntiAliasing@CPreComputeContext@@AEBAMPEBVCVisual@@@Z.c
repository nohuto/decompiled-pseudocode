/*
 * XREFs of ?GetInflateSizeForAntiAliasing@CPreComputeContext@@AEBAMPEBVCVisual@@@Z @ 0x180054E4C
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CPreComputeContext::GetInflateSizeForAntiAliasing(CPreComputeContext *this, const struct CVisual *a2)
{
  if ( *((_DWORD *)this + 110) || *((char *)a2 + 88) < 0 )
    return FLOAT_4_0;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisual *))(*(_QWORD *)a2 + 312LL))(a2) )
    return FLOAT_0_5;
  return 0.0;
}
