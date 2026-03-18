/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX__lambda_8e27e368b213886017cbcce0d374cdc4___ @ 0x1C007E8DC
 * Callers:
 *     ?EmitUpdateCommands@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001F9F0 (-EmitUpdateCommands@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX__lambda_8e27e368b213886017cbcce0d374cdc4___(
        struct DirectComposition::CBatch **a1,
        __int64 *a2)
{
  char *v3; // rax
  char *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // xmm1_8
  char result; // al
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a1, 0x24uLL, &v8) )
    return 0;
  v3 = (char *)v8;
  *(_DWORD *)v8 = 36;
  v4 = v3 + 4;
  memset(v3 + 4, 0, 0x20uLL);
  *(_DWORD *)v4 = 299;
  *((_DWORD *)v4 + 1) = *(_DWORD *)(*a2 + 24);
  v5 = *a2;
  *(_OWORD *)(v4 + 8) = *(_OWORD *)(*a2 + 92);
  v6 = *(_QWORD *)(v5 + 108);
  result = 1;
  *((_QWORD *)v4 + 3) = v6;
  return result;
}
