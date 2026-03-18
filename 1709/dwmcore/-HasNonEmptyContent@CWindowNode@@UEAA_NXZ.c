/*
 * XREFs of ?HasNonEmptyContent@CWindowNode@@UEAA_NXZ @ 0x18009A4E0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CWindowNode::HasNonEmptyContent(CWindowNode *this)
{
  __int64 v1; // rax
  char v2; // bl
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 105);
  v2 = 0;
  if ( (!v1 || !*(_BYTE *)(v1 + 120))
    && (!*((_BYTE *)this + 1010) && (*((_QWORD *)this + 98) || *((_DWORD *)this + 204))
     || *((_QWORD *)this + 118)
     || *((_DWORD *)this + 244)
     || *((_QWORD *)this + 115)
     || *((_QWORD *)this + 116)) )
  {
    return 1;
  }
  v3 = *((_QWORD *)this + 30);
  if ( v3 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 192LL))(v3) )
      return 1;
  }
  return v2;
}
