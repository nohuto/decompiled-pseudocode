/*
 * XREFs of ?IsAffectedByLights@CVisual@@QEAA_NPEBVCVisualTree@@@Z @ 0x180160BC4
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180095520 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BBE10 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::IsAffectedByLights(CVisual *this, const struct CVisualTree *a2)
{
  __int64 *v2; // r14
  char v3; // di
  __int64 v4; // rbx
  unsigned int v7; // esi
  unsigned __int64 v8; // rax

  v2 = (__int64 *)((char *)this + 256);
  v3 = 0;
  v4 = *((_QWORD *)this + 32);
  if ( (v4 & 2) != 0 )
    v4 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v4) = v4 & 1;
  v7 = 0;
  if ( (_DWORD)v4 )
  {
    while ( 1 )
    {
      v8 = CPtrArrayBase::operator[](v2, v7);
      if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, const struct CVisualTree *, CVisual *))(*(_QWORD *)v8 + 168LL))(
             v8,
             a2,
             this) )
      {
        break;
      }
      if ( ++v7 >= (unsigned int)v4 )
        return v3;
    }
    return 1;
  }
  return v3;
}
