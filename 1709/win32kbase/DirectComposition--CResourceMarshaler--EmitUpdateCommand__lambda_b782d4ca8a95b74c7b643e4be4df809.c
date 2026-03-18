/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b782d4ca8a95b74c7b643e4be4df8097___ @ 0x1C01486B0
 * Callers:
 *     ?EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00029E4 (-EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b782d4ca8a95b74c7b643e4be4df8097___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  char *v5; // rdx
  char result; // al
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 16;
  *(_QWORD *)(v5 + 4) = 0LL;
  *((_DWORD *)v5 + 3) = 0;
  *((_DWORD *)v5 + 1) = 150;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 24);
  *((_DWORD *)v5 + 1) = 150;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(*(_QWORD *)a3 + 24LL);
  result = 1;
  *((_DWORD *)v5 + 3) = *(_DWORD *)(*(_QWORD *)a3 + 40LL);
  return result;
}
