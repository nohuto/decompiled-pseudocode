/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM3D_SETORIENTATION__lambda_0da63ec28eaf95972bb33284f20f15c0___ @ 0x1C0080710
 * Callers:
 *     ?EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001E8D0 (-EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPONENTTRANSFORM3D_SETORIENTATION__lambda_0da63ec28eaf95972bb33284f20f15c0___(
        struct DirectComposition::CBatch **a1,
        __int64 a2)
{
  char *v3; // r8
  char result; // al
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a1, 0x1CuLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 28;
  *(_QWORD *)(v3 + 4) = 0LL;
  *(_QWORD *)(v3 + 12) = 0LL;
  *(_QWORD *)(v3 + 20) = 0LL;
  *((_DWORD *)v3 + 1) = 302;
  *((_DWORD *)v3 + 2) = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
  *((_DWORD *)v3 + 3) = *(_DWORD *)(*(_QWORD *)a2 + 76LL);
  *((_DWORD *)v3 + 4) = *(_DWORD *)(*(_QWORD *)a2 + 80LL);
  *((_DWORD *)v3 + 5) = *(_DWORD *)(*(_QWORD *)a2 + 84LL);
  result = 1;
  *((_DWORD *)v3 + 6) = *(_DWORD *)(*(_QWORD *)a2 + 88LL);
  return result;
}
