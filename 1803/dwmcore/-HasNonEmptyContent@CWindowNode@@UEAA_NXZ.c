/*
 * XREFs of ?HasNonEmptyContent@CWindowNode@@UEAA_NXZ @ 0x180091810
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A9B10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetShadowAtIndexNoRef@CProjectedShadowReceiver@@QEBAPEAVCProjectedShadow@@H@Z @ 0x1800DCFF4 (-GetShadowAtIndexNoRef@CProjectedShadowReceiver@@QEBAPEAVCProjectedShadow@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CWindowNode::HasNonEmptyContent(CWindowNode *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  char v4; // di
  __int64 v5; // rcx
  __int64 i; // rcx
  int v8; // esi
  __int64 v9; // rbx
  struct CProjectedShadow *ShadowAtIndexNoRef; // rax
  CProjectedShadowReceiver *v11; // [rsp+30h] [rbp+8h]

  v1 = *((_QWORD *)this + 97);
  if ( (!v1 || !*(_BYTE *)(v1 + 152))
    && (!*((_BYTE *)this + 914) && (*((_QWORD *)this + 90) || *((_DWORD *)this + 188))
     || *((_QWORD *)this + 108)
     || *((_DWORD *)this + 224)) )
  {
    return 1;
  }
  v3 = *((_QWORD *)this + 31);
  v4 = 1;
  if ( !v3 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 192LL))(v3) )
  {
    v5 = *((_QWORD *)this + 27);
    if ( (*(_BYTE *)(v5 + 4) & 1) == 0 )
      return 0;
    for ( i = v5 + 12; (*(_DWORD *)i & 0x7F000000) != 0x20000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    v11 = *(CProjectedShadowReceiver **)(i + 4);
    if ( v11 && (v8 = 0, v9 = (__int64)(*((_QWORD *)v11 + 9) - *((_QWORD *)v11 + 8)) >> 3, (int)v9 > 0) )
    {
      while ( 1 )
      {
        ShadowAtIndexNoRef = CProjectedShadowReceiver::GetShadowAtIndexNoRef(v11, v8);
        if ( !(*(unsigned __int8 (__fastcall **)(struct CProjectedShadow *))(*(_QWORD *)ShadowAtIndexNoRef + 192LL))(ShadowAtIndexNoRef) )
          break;
        if ( ++v8 >= (int)v9 )
          return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return v4;
}
