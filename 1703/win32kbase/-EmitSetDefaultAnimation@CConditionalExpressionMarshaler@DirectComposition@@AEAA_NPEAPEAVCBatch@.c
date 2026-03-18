/*
 * XREFs of ?EmitSetDefaultAnimation@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0148B7C
 * Callers:
 *     ?EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0148C80 (-EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
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
  if ( (*((_DWORD *)this + 4) & 0x400) == 0 )
  {
    v4 = DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v9);
    v5 = 0;
    if ( v4 )
    {
      v6 = (char *)v9;
      *(_DWORD *)v9 = 16;
      *(_QWORD *)(v6 + 4) = 0LL;
      *((_DWORD *)v6 + 3) = 0;
      *((_DWORD *)v6 + 1) = 242;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
      v7 = *((_QWORD *)this + 15);
      if ( v7 )
        v5 = *(_DWORD *)(v7 + 24);
      *((_DWORD *)v6 + 3) = v5;
      *((_DWORD *)this + 4) |= 0x400u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
