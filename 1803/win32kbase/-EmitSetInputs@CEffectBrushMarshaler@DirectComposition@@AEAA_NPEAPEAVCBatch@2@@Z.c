/*
 * XREFs of ?EmitSetInputs@CEffectBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00055E8
 * Callers:
 *     ?EmitUpdateCommands@CEffectBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00059E0 (-EmitUpdateCommands@CEffectBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CEffectBrushMarshaler::EmitSetInputs(
        DirectComposition::CEffectBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v5; // rdx
  __int64 v6; // r8
  int v7; // eax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  for ( ; *((_DWORD *)this + 21) < *((_DWORD *)this + 20); ++*((_DWORD *)this + 21) )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v8) )
      break;
    v5 = (char *)v8;
    *(_DWORD *)v8 = 20;
    *(_QWORD *)(v5 + 4) = 0LL;
    *(_QWORD *)(v5 + 12) = 0LL;
    *((_DWORD *)v5 + 1) = 151;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v5 + 3) = *((_DWORD *)this + 21);
    v6 = *(_QWORD *)(*((_QWORD *)this + 9) + 8LL * *((unsigned int *)this + 21));
    v7 = v6 ? *(_DWORD *)(v6 + 24) : 0;
    *((_DWORD *)v5 + 4) = v7;
  }
  return *((_DWORD *)this + 21) == *((_DWORD *)this + 20);
}
