/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_SURFACEBRUSH_SETSURFACE__lambda_7528276a618854590caf46d859c36d6d___ @ 0x1C0025564
 * Callers:
 *     ?EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0024820 (-EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_SURFACEBRUSH_SETSURFACE__lambda_7528276a618854590caf46d859c36d6d___(
        struct DirectComposition::CBatch **a1,
        __int64 a2)
{
  char v3; // al
  int v4; // r9d
  char *v5; // r8
  __int64 v6; // rcx
  char result; // al
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = DirectComposition::CBatch::EnsureBatchBuffer(a1, 0x20uLL, &v8);
  v4 = 0;
  if ( !v3 )
    return 0;
  v5 = (char *)v8;
  *(_DWORD *)v8 = 32;
  *(_QWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 12) = 0LL;
  *(_QWORD *)(v5 + 20) = 0LL;
  *((_DWORD *)v5 + 7) = 0;
  *((_DWORD *)v5 + 1) = 77;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
  v6 = *(_QWORD *)(*(_QWORD *)a2 + 40LL);
  if ( v6 )
    v4 = *(_DWORD *)(v6 + 24);
  *((_DWORD *)v5 + 3) = v4;
  result = 1;
  *((_OWORD *)v5 + 1) = *(_OWORD *)(*(_QWORD *)a2 + 56LL);
  return result;
}
