/*
 * XREFs of ?EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0142934
 * Callers:
 *     ?EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0142A90 (-EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00815E4 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

char __fastcall DirectComposition::CGenericInkMarshaler::EmitSegmentUpdate(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned __int64 v2; // rax
  unsigned int i; // esi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned int v9; // ebp
  unsigned int v10; // r15d
  char *v11; // r9
  unsigned __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  void *v13; // [rsp+60h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 16);
  if ( !v2 )
    return 1;
  for ( i = v2 / *((_QWORD *)this + 18); *((_DWORD *)this + 38) < i; *((_DWORD *)this + 38) += v9 )
  {
    v7 = *((_QWORD *)this + 18) + 20LL;
    v8 = 4096LL - *((_QWORD *)(*a2)[15] + 5);
    v12 = v8;
    if ( v8 < v7 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v12) )
        return *((_DWORD *)this + 38) == i;
      v8 = v12;
    }
    v9 = (v8 - 20) / *((_QWORD *)this + 18);
    if ( i - *((_DWORD *)this + 38) < v9 )
      v9 = i - *((_DWORD *)this + 38);
    v10 = *((_DWORD *)this + 36) * v9 + 20;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, v10, &v13) )
      break;
    v11 = (char *)v13;
    *(_DWORD *)v13 = v10;
    *(_QWORD *)(v11 + 4) = 0LL;
    *(_QWORD *)(v11 + 12) = 0LL;
    *((_DWORD *)v11 + 1) = 282;
    *((_DWORD *)v11 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v11 + 3) = *((_DWORD *)this + 38);
    *((_DWORD *)v11 + 4) = v9;
    memmove(
      v11 + 20,
      (const void *)(*((_QWORD *)this + 13)
                   + *((_QWORD *)this + 18) * *((_QWORD *)this + 17) * *((unsigned int *)this + 38)),
      *((_QWORD *)this + 18) * *((_QWORD *)this + 17) * v9);
  }
  return *((_DWORD *)this + 38) == i;
}
