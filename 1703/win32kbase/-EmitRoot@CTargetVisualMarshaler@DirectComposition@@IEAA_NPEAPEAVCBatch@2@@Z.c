/*
 * XREFs of ?EmitRoot@CTargetVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000C2AC
 * Callers:
 *     ?EmitUpdateCommands@CTargetVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000C190 (-EmitUpdateCommands@CTargetVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDeletionCommand@CTargetVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000C390 (-EmitDeletionCommand@CTargetVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CTargetVisualMarshaler::EmitRoot(
        DirectComposition::CTargetVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  char *v5; // rcx
  __int64 v6; // rax
  char *v7; // rdx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v9) )
    {
      v5 = (char *)v9;
      *(_DWORD *)v9 = 12;
      *(_QWORD *)(v5 + 4) = 0LL;
      *((_DWORD *)v5 + 1) = 56;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
      v6 = *((_QWORD *)this + 7);
      if ( !v6 || (*(_BYTE *)(v6 + 232) & 0x40) == 0 )
        goto LABEL_7;
      if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v9) )
      {
        v7 = (char *)v9;
        *(_DWORD *)v9 = 20;
        *(_QWORD *)(v7 + 4) = 0LL;
        *(_QWORD *)(v7 + 12) = 0LL;
        *((_DWORD *)v7 + 1) = 58;
        *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
        *(_QWORD *)(v7 + 12) = *(unsigned int *)(*((_QWORD *)this + 7) + 24LL);
        *(_DWORD *)(*((_QWORD *)this + 7) + 16LL) |= 0x10u;
LABEL_7:
        *((_DWORD *)this + 4) &= ~0x20u;
        return v4;
      }
    }
    return 0;
  }
  return v4;
}
