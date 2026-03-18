/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6f9061fc4e4fd5f8b9e5c5ac49766c58___ @ 0x1C00294AC
 * Callers:
 *     ?EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0056AF0 (-EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _lambda_6f9061fc4e4fd5f8b9e5c5ac49766c58_::operator() @ 0x1C008A5E0 (_lambda_6f9061fc4e4fd5f8b9e5c5ac49766c58_--operator().c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6f9061fc4e4fd5f8b9e5c5ac49766c58___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  char *v5; // rax
  _DWORD *v6; // rbx
  void *v8; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x30uLL, &v8) )
    return 0;
  v5 = (char *)v8;
  *(_DWORD *)v8 = 48;
  v6 = v5 + 4;
  memset(v5 + 4, 0, 0x2CuLL);
  *v6 = 291;
  v6[1] = *(_DWORD *)(a1 + 24);
  lambda_6f9061fc4e4fd5f8b9e5c5ac49766c58_::operator()(a3, v6);
  return 1;
}
