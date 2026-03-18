/*
 * XREFs of ?EmitTransformParent@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002CEC4
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002C690 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitTransformParent(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v4; // rcx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v8) )
  {
    v4 = (char *)v8;
    *(_DWORD *)v8 = 20;
    *(_QWORD *)(v4 + 4) = 0LL;
    *(_QWORD *)(v4 + 12) = 0LL;
    *((_DWORD *)v4 + 1) = 345;
    v5 = *((_DWORD *)this + 6);
    *((_DWORD *)v4 + 3) = 0;
    *((_DWORD *)v4 + 2) = v5;
    *((_DWORD *)v4 + 4) = *((unsigned __int8 *)this + 236) >> 7;
    v6 = *((_QWORD *)this + 14);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 16);
      if ( v7 )
        *((_DWORD *)v4 + 3) = *(_DWORD *)(v7 + 24);
    }
    *((_DWORD *)this + 4) &= ~0x200u;
    return 1;
  }
  return 0;
}
