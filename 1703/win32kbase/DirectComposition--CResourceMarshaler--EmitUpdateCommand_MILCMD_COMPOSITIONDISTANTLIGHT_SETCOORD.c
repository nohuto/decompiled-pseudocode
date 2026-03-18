/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE__lambda_6c97bdd75333e172b3f4469c63192950___ @ 0x1C014917C
 * Callers:
 *     ?EmitUpdateCommands@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0149270 (-EmitUpdateCommands@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE__lambda_6c97bdd75333e172b3f4469c63192950___(
        struct DirectComposition::CBatch **a1,
        __int64 a2)
{
  char v3; // al
  int v4; // r8d
  char *v5; // r9
  __int64 v6; // rcx
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = DirectComposition::CBatch::EnsureBatchBuffer(a1, 0x10uLL, &v8);
  v4 = 0;
  if ( !v3 )
    return 0;
  v5 = (char *)v8;
  *(_DWORD *)v8 = 16;
  *(_QWORD *)(v5 + 4) = 0LL;
  *((_DWORD *)v5 + 3) = 0;
  *((_DWORD *)v5 + 1) = 316;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
  v6 = *(_QWORD *)(*(_QWORD *)a2 + 72LL);
  if ( v6 )
    v4 = *(_DWORD *)(v6 + 24);
  *((_DWORD *)v5 + 3) = v4;
  return 1;
}
