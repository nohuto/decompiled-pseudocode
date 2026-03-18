/*
 * XREFs of ?EmitUpdateCommands@CRenderTargetTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C006B9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateTransform@CRenderTargetTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C006BB50 (-EmitUpdateTransform@CRenderTargetTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_10e5acfe46b659e41e9168f1d8738530___ @ 0x1C014CB78 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_10e5acfe46b659e41e9168f1d873853.c)
 */

char __fastcall DirectComposition::CRenderTargetTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CRenderTargetTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char v5; // bp
  bool v6; // zf
  char *v8; // rax
  char *v9; // rbx
  char *v10; // rcx
  char *v11; // rcx
  void *v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+50h] [rbp+18h] BYREF
  void *v14; // [rsp+58h] [rbp+20h] BYREF

  v2 = *((_DWORD *)this + 4);
  v5 = 1;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x30uLL, &v12) )
      return 0;
    v8 = (char *)v12;
    *(_DWORD *)v12 = 48;
    v9 = v8 + 4;
    memset(v8 + 4, 0, 0x2CuLL);
    *(_DWORD *)v9 = 131;
    *((_DWORD *)v9 + 1) = *((_DWORD *)this + 6);
    *((_DWORD *)v9 + 5) = 1;
    *((_DWORD *)v9 + 2) = *((_DWORD *)this + 10);
    *((_QWORD *)v9 + 3) = *((_QWORD *)this + 6);
    *(_QWORD *)(v9 + 12) = *((_QWORD *)this + 7);
    *((_DWORD *)v9 + 8) = *((_DWORD *)this + 17);
    *((_DWORD *)v9 + 9) = *((_DWORD *)this + 18);
    *((_DWORD *)v9 + 10) = *((_DWORD *)this + 20);
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x80u) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v13) )
      return 0;
    v10 = (char *)v13;
    *(_DWORD *)v13 = 16;
    *(_QWORD *)(v10 + 4) = 0LL;
    *((_DWORD *)v10 + 3) = 0;
    *((_DWORD *)v10 + 1) = 132;
    *((_DWORD *)v10 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v10 + 3) = *((_DWORD *)this + 16);
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x200) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v14) )
      return 0;
    v11 = (char *)v14;
    *(_DWORD *)v14 = 16;
    *(_QWORD *)(v11 + 4) = 0LL;
    *((_DWORD *)v11 + 3) = 0;
    *((_DWORD *)v11 + 1) = 130;
    *((_DWORD *)v11 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v11 + 3) = *((_DWORD *)this + 31);
    *((_DWORD *)this + 4) &= ~0x200u;
  }
  if ( !DirectComposition::CRenderTargetTargetMarshaler::EmitUpdateTransform(
          this,
          (struct DirectComposition::CBatch **)a2) )
    return 0;
  v6 = (*((_DWORD *)this + 4) & 0x100) == 0;
  v12 = this;
  if ( !v6 )
  {
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_10e5acfe46b659e41e9168f1d8738530___(
                            this,
                            a2,
                            &v12) )
    {
      *((_DWORD *)this + 4) &= ~0x100u;
      return v5;
    }
    return 0;
  }
  return v5;
}
