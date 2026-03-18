/*
 * XREFs of ?EmitSetComponents@CManipulationTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00060D4
 * Callers:
 *     ?EmitUpdateCommands@CManipulationTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0005F40 (-EmitUpdateCommands@CManipulationTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

char __fastcall DirectComposition::CManipulationTransformMarshaler::EmitSetComponents(
        DirectComposition::CManipulationTransformMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // si
  char *v4; // rax
  _DWORD *v5; // rbx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x80u) == 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x3CuLL, &v7) )
    {
      v4 = (char *)v7;
      *(_DWORD *)v7 = 60;
      v5 = v4 + 4;
      memset(v4 + 4, 0, 0x38uLL);
      *v5 = 264;
      v5[1] = *((_DWORD *)this + 6);
      v5[2] = *((_DWORD *)this + 14);
      v5[3] = *((_DWORD *)this + 15);
      v5[4] = *((_DWORD *)this + 16);
      v5[5] = *((_DWORD *)this + 17);
      v5[6] = *((_DWORD *)this + 18);
      v5[7] = *((_DWORD *)this + 19);
      v5[8] = *((_DWORD *)this + 20);
      v5[9] = *((_DWORD *)this + 21);
      v5[10] = *((_DWORD *)this + 22);
      v5[11] = *((_DWORD *)this + 23);
      v5[12] = *((_DWORD *)this + 24);
      v5[13] = *((_DWORD *)this + 25);
      *((_DWORD *)this + 4) |= 0x80u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
