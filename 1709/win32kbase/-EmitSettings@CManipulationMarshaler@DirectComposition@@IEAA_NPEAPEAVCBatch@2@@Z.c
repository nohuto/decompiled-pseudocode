/*
 * XREFs of ?EmitSettings@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0141E4C
 * Callers:
 *     ?EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0142020 (-EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

char __fastcall DirectComposition::CManipulationMarshaler::EmitSettings(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // di
  char *v4; // rax
  _DWORD *v5; // rbx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x28uLL, &v7) )
    {
      v4 = (char *)v7;
      *(_DWORD *)v7 = 40;
      v5 = v4 + 4;
      memset(v4 + 4, 0, 0x24uLL);
      *v5 = 229;
      v5[1] = *((_DWORD *)this + 6);
      v5[2] = *((_DWORD *)this + 22);
      v5[3] = *((_BYTE *)this + 92) & 1;
      v5[4] = (*((unsigned __int8 *)this + 92) >> 1) & 1;
      v5[5] = (*((unsigned __int8 *)this + 92) >> 2) & 1;
      v5[6] = (*((unsigned __int8 *)this + 92) >> 3) & 1;
      v5[7] = (*((unsigned __int8 *)this + 92) >> 4) & 1;
      v5[8] = (*((unsigned __int8 *)this + 92) >> 5) & 1;
      *((_DWORD *)this + 4) &= ~0x40u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
