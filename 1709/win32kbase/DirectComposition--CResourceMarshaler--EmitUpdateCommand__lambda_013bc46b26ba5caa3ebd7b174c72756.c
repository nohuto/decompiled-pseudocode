/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_013bc46b26ba5caa3ebd7b174c727569___ @ 0x1C0146C20
 * Callers:
 *     ?EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0147040 (-EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_013bc46b26ba5caa3ebd7b174c727569___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 *a3)
{
  char *v5; // rdx
  __int64 v6; // rax
  void *v8; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v8) )
    return 0;
  v5 = (char *)v8;
  *(_DWORD *)v8 = 24;
  *(_QWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 12) = 0LL;
  *((_DWORD *)v5 + 5) = 0;
  *((_DWORD *)v5 + 1) = 241;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 24);
  *((_DWORD *)v5 + 1) = 241;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(*a3 + 24);
  v6 = *a3;
  *(_QWORD *)(v5 + 12) = *(_QWORD *)(*a3 + 144);
  *((_DWORD *)v5 + 5) = *(_DWORD *)(v6 + 152);
  return 1;
}
