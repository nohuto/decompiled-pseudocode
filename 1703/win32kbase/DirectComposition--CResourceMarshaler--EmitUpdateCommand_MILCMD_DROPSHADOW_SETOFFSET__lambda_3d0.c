/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_DROPSHADOW_SETOFFSET__lambda_3d0c5b44ea74fc7ebfe1dabea39653cd___ @ 0x1C000302C
 * Callers:
 *     ?EmitUpdateCommands@CDropShadowMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0002E30 (-EmitUpdateCommands@CDropShadowMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_DROPSHADOW_SETOFFSET__lambda_3d0c5b44ea74fc7ebfe1dabea39653cd___(
        struct DirectComposition::CBatch **a1,
        __int64 a2)
{
  char *v3; // r8
  char result; // al
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a1, 0x18uLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 24;
  *(_QWORD *)(v3 + 4) = 0LL;
  *(_QWORD *)(v3 + 12) = 0LL;
  *((_DWORD *)v3 + 5) = 0;
  *((_DWORD *)v3 + 1) = 310;
  *((_DWORD *)v3 + 2) = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
  *((_DWORD *)v3 + 3) = *(_DWORD *)(*(_QWORD *)a2 + 84LL);
  *((_DWORD *)v3 + 4) = *(_DWORD *)(*(_QWORD *)a2 + 88LL);
  result = 1;
  *((_DWORD *)v3 + 5) = *(_DWORD *)(*(_QWORD *)a2 + 92LL);
  return result;
}
