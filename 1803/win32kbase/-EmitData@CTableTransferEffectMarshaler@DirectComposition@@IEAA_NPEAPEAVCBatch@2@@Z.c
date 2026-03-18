/*
 * XREFs of ?EmitData@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0153398
 * Callers:
 *     ?EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0153560 (-EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CTableTransferEffectMarshaler::EmitData(
        DirectComposition::CTableTransferEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rdx
  int v4; // r8d
  int *v5; // r9
  __int64 v6; // r10
  int v7; // edx
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v9) )
    return 0;
  v3 = (char *)v9;
  v4 = 1;
  *(_DWORD *)v9 = 32;
  v5 = (int *)(v3 + 16);
  *(_QWORD *)(v3 + 4) = 0LL;
  v6 = 4LL;
  *(_QWORD *)(v3 + 12) = 0LL;
  *(_QWORD *)(v3 + 20) = 0LL;
  *((_DWORD *)v3 + 7) = 0;
  *((_DWORD *)v3 + 1) = 479;
  *((_DWORD *)v3 + 2) = *((_DWORD *)this + 6);
  *((_DWORD *)v3 + 3) = *((_BYTE *)this + 152) & 1;
  do
  {
    v7 = *((unsigned __int8 *)this + 152) >> v4++;
    *v5++ = v7 & 1;
    --v6;
  }
  while ( v6 );
  return 1;
}
