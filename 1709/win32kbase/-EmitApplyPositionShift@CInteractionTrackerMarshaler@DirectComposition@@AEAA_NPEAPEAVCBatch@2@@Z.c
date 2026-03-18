/*
 * XREFs of ?EmitApplyPositionShift@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0144988
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01457B0 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0085DFC (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ??_G?$CDCompDynamicArray@UPositionShift@@@DirectComposition@@QEAAPEAXI@Z @ 0x1C0144880 (--_G-$CDCompDynamicArray@UPositionShift@@@DirectComposition@@QEAAPEAXI@Z.c)
 */

bool __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitApplyPositionShift(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rbp
  char *v6; // rcx
  unsigned int v7; // r10d
  char *v8; // r9
  _QWORD *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  int v12; // ecx
  __int64 *v13; // rcx
  unsigned __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  void *v16; // [rsp+50h] [rbp+18h] BYREF

  for ( ; *((_DWORD *)this + 87) < *((_DWORD *)this + 86); *((_DWORD *)this + 87) += v5 )
  {
    v4 = 4096LL - *((_QWORD *)(*a2)[15] + 5);
    v15 = v4;
    if ( v4 < 0x1C )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v15) )
        break;
      v4 = v15;
    }
    v5 = (unsigned int)(*((_DWORD *)this + 86) - *((_DWORD *)this + 87));
    if ( v5 >= (v4 - 16) / 0xC )
      LODWORD(v5) = (v4 - 16) / 0xC;
    DirectComposition::CBatch::EnsureBatchBuffer(
      (struct DirectComposition::CBatch **)a2,
      (unsigned int)(12 * v5 + 16),
      &v16);
    v6 = (char *)v16;
    v7 = 0;
    *(_DWORD *)v16 = 12 * v5 + 16;
    v8 = v6 + 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 190;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
    for ( *((_DWORD *)v6 + 3) = v5; v7 < (unsigned int)v5; v8 += 12 )
    {
      v9 = (_QWORD *)*((_QWORD *)this + 42);
      v10 = v7 + *((_DWORD *)this + 87);
      ++v7;
      v11 = v9[4] * v10;
      v12 = *(_DWORD *)(v11 + *v9 + 8);
      *(_QWORD *)v8 = *(_QWORD *)(v11 + *v9);
      *((_DWORD *)v8 + 2) = v12;
    }
  }
  if ( *((_DWORD *)this + 87) == *((_DWORD *)this + 86) )
  {
    *((_DWORD *)this + 86) = 0;
    *((_DWORD *)this + 87) = 0;
    v13 = (__int64 *)*((_QWORD *)this + 42);
    if ( v13 )
      DirectComposition::CDCompDynamicArray<PositionShift>::`scalar deleting destructor'(v13);
    *((_QWORD *)this + 42) = 0LL;
  }
  return *((_DWORD *)this + 87) == *((_DWORD *)this + 86);
}
