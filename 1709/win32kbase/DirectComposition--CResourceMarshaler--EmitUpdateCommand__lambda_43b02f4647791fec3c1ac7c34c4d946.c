/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_43b02f4647791fec3c1ac7c34c4d9463___ @ 0x1C0147B00
 * Callers:
 *     ?EmitUpdateCommands@CCompositionSkyBoxBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0147D00 (-EmitUpdateCommands@CCompositionSkyBoxBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_43b02f4647791fec3c1ac7c34c4d9463___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  char *v5; // rax
  char *v6; // rbx
  char result; // al
  void *v8; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v8) )
    return 0;
  v5 = (char *)v8;
  *(_DWORD *)v8 = 36;
  v6 = v5 + 4;
  memset(v5 + 4, 0, 0x20uLL);
  *(_DWORD *)v6 = 85;
  *((_DWORD *)v6 + 1) = *(_DWORD *)(a1 + 24);
  *((double *)v6 + 1) = *(float *)(*(_QWORD *)a3 + 60LL);
  *((double *)v6 + 2) = *(float *)(*(_QWORD *)a3 + 64LL);
  result = 1;
  *((double *)v6 + 3) = *(float *)(*(_QWORD *)a3 + 68LL);
  return result;
}
