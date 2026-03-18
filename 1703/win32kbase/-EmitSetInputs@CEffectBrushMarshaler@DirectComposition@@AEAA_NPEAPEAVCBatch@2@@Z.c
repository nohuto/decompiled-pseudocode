/*
 * XREFs of ?EmitSetInputs@CEffectBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00025D8
 * Callers:
 *     ?EmitUpdateCommands@CEffectBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0002550 (-EmitUpdateCommands@CEffectBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CEffectBrushMarshaler::EmitSetInputs(
        DirectComposition::CEffectBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v4; // rdx
  __int64 v5; // r8
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  for ( ; *((_DWORD *)this + 17) < *((_DWORD *)this + 16); ++*((_DWORD *)this + 17) )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v7) )
      break;
    v4 = (char *)v7;
    *(_DWORD *)v7 = 20;
    *(_QWORD *)(v4 + 4) = 0LL;
    *(_QWORD *)(v4 + 12) = 0LL;
    *((_DWORD *)v4 + 1) = 85;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v4 + 3) = *((_DWORD *)this + 17);
    v5 = *(_QWORD *)(*((_QWORD *)this + 7) + 8LL * *((unsigned int *)this + 17));
    *((_DWORD *)v4 + 4) = v5 ? *(_DWORD *)(v5 + 24) : 0;
  }
  return *((_DWORD *)this + 17) == *((_DWORD *)this + 16);
}
