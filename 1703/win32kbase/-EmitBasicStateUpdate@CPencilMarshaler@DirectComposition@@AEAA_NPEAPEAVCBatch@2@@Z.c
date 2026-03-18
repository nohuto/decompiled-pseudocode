/*
 * XREFs of ?EmitBasicStateUpdate@CPencilMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0142098
 * Callers:
 *     ?EmitUpdateCommands@CPencilMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0142340 (-EmitUpdateCommands@CPencilMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

char __fastcall DirectComposition::CPencilMarshaler::EmitBasicStateUpdate(
        DirectComposition::CPencilMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v3; // esi
  char *v4; // rax
  char *v5; // rdi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rax
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
    return 1;
  v3 = 0;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x5CuLL, &v10) )
  {
    v4 = (char *)v10;
    *(_DWORD *)v10 = 92;
    v5 = v4 + 4;
    memset(v4 + 4, 0, 0x58uLL);
    *(_DWORD *)v5 = 276;
    *((_DWORD *)v5 + 1) = *((_DWORD *)this + 6);
    *(_OWORD *)(v5 + 8) = *((_OWORD *)this + 3);
    *(_OWORD *)(v5 + 24) = *((_OWORD *)this + 4);
    *((_DWORD *)v5 + 10) = *((_DWORD *)this + 10);
    *((_DWORD *)v5 + 11) = *((_DWORD *)this + 11);
    v6 = *((_QWORD *)this + 12);
    if ( v6 )
      v7 = *(_DWORD *)(v6 + 24);
    else
      v7 = 0;
    *((_DWORD *)v5 + 12) = v7;
    *(_OWORD *)(v5 + 52) = *(_OWORD *)((char *)this + 104);
    v8 = *((_QWORD *)this + 15);
    if ( v8 )
      v3 = *(_DWORD *)(v8 + 24);
    *((_DWORD *)v5 + 17) = v3;
    *(_OWORD *)(v5 + 72) = *((_OWORD *)this + 8);
    *((_DWORD *)this + 4) |= 0x20u;
    return 1;
  }
  return 0;
}
