/*
 * XREFs of ?EmitSetDefaultAnimation@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01499E0
 * Callers:
 *     ?EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0149AF0 (-EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CConditionalExpressionMarshaler::EmitSetDefaultAnimation(
        DirectComposition::CConditionalExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // di
  char v4; // al
  int v5; // ecx
  char *v6; // rdx
  __int64 v7; // rax
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x800) == 0 )
  {
    v4 = DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v9);
    v5 = 0;
    if ( v4 )
    {
      v6 = (char *)v9;
      *(_DWORD *)v9 = 16;
      *(_QWORD *)(v6 + 4) = 0LL;
      *((_DWORD *)v6 + 3) = 0;
      *((_DWORD *)v6 + 1) = 103;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
      v7 = *((_QWORD *)this + 17);
      if ( v7 )
        v5 = *(_DWORD *)(v7 + 24);
      *((_DWORD *)v6 + 3) = v5;
      *((_DWORD *)this + 4) |= 0x800u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
