/*
 * XREFs of ?HasNonEmptyContent@CWindowNode@@UEAA_NXZ @ 0x180051C80
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CWindowNode::HasNonEmptyContent(CWindowNode *this)
{
  __int64 v1; // rax
  char v2; // bl
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 102);
  v2 = 0;
  if ( (!v1 || !*(_BYTE *)(v1 + 120))
    && (!*((_BYTE *)this + 986) && (*((_QWORD *)this + 95) || *((_DWORD *)this + 198))
     || *((_QWORD *)this + 115)
     || *((_DWORD *)this + 238)
     || *((_QWORD *)this + 112)
     || *((_QWORD *)this + 113)) )
  {
    return 1;
  }
  v3 = *((_QWORD *)this + 30);
  if ( v3 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 176LL))(v3) )
      return 1;
  }
  return v2;
}
