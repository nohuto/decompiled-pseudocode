/*
 * XREFs of ?EmitEdgyConfiguration@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0141CBC
 * Callers:
 *     ?EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0142020 (-EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

char __fastcall DirectComposition::CManipulationMarshaler::EmitEdgyConfiguration(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // si
  char *v4; // rax
  char *v5; // rbx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x100) != 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, &v7) )
    {
      v4 = (char *)v7;
      *(_DWORD *)v7 = 52;
      v5 = v4 + 4;
      memset(v4 + 4, 0, 0x30uLL);
      *(_DWORD *)v5 = 228;
      *((_DWORD *)v5 + 1) = *((_DWORD *)this + 6);
      *(_OWORD *)(v5 + 8) = *((_OWORD *)this + 7);
      *(_OWORD *)(v5 + 24) = *((_OWORD *)this + 8);
      *((_QWORD *)v5 + 5) = *((_QWORD *)this + 18);
      *((_DWORD *)this + 4) &= ~0x100u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
