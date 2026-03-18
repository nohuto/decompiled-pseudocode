/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8b4d1ab061ef78a7fec96846a93fc31c___ @ 0x1C0146DAC
 * Callers:
 *     ?EmitUpdateMotionParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0147140 (-EmitUpdateMotionParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8b4d1ab061ef78a7fec96846a93fc31c___(
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
  *((_DWORD *)v5 + 1) = 236;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 24);
  *((_DWORD *)v5 + 1) = 236;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(*(_QWORD *)a3 + 24LL);
  result = 1;
  *((_DWORD *)v5 + 3) = *(_DWORD *)(*(_QWORD *)a3 + 160LL);
  return result;
}
