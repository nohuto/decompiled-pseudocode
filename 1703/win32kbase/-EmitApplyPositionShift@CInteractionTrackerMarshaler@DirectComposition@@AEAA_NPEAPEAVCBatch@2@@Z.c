/*
 * XREFs of ?EmitApplyPositionShift@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0144F14
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0145D50 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00815E4 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitApplyPositionShift(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rbp
  char *v6; // rcx
  unsigned int v7; // r10d
  char *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // ecx
  void (__fastcall ***v14)(_QWORD, __int64); // rcx
  unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  void *v17; // [rsp+50h] [rbp+18h] BYREF

  for ( ; *((_DWORD *)this + 81) < *((_DWORD *)this + 80); *((_DWORD *)this + 81) += v5 )
  {
    v4 = 4096LL - *((_QWORD *)(*a2)[15] + 5);
    v16 = v4;
    if ( v4 < 0x1C )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v16) )
        break;
      v4 = v16;
    }
    v5 = (v4 - 16) / 0xC;
    if ( (unsigned int)(*((_DWORD *)this + 80) - *((_DWORD *)this + 81)) < v5 )
      LODWORD(v5) = *((_DWORD *)this + 80) - *((_DWORD *)this + 81);
    DirectComposition::CBatch::EnsureBatchBuffer(
      (struct DirectComposition::CBatch **)a2,
      (unsigned int)(12 * v5 + 16),
      &v17);
    v6 = (char *)v17;
    v7 = 0;
    *(_DWORD *)v17 = 12 * v5 + 16;
    v8 = v6 + 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 251;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
    for ( *((_DWORD *)v6 + 3) = v5; v7 < (unsigned int)v5; v8 += 12 )
    {
      v9 = *((_QWORD *)this + 39);
      v10 = v7 + *((_DWORD *)this + 81);
      ++v7;
      v11 = *(_QWORD *)(v9 + 40) * v10;
      v12 = *(_QWORD *)(v9 + 8);
      v13 = *(_DWORD *)(v11 + v12 + 8);
      *(_QWORD *)v8 = *(_QWORD *)(v11 + v12);
      *((_DWORD *)v8 + 2) = v13;
    }
  }
  if ( *((_DWORD *)this + 81) == *((_DWORD *)this + 80) )
  {
    v14 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 39);
    *((_QWORD *)this + 40) = 0LL;
    if ( v14 )
      (**v14)(v14, 1LL);
    *((_QWORD *)this + 39) = 0LL;
  }
  return *((_DWORD *)this + 81) == *((_DWORD *)this + 80);
}
