/*
 * XREFs of ?EmitSetInjectionData@CInjectionAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01469BC
 * Callers:
 *     ?EmitUpdateCommands@CInjectionAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0146A60 (-EmitUpdateCommands@CInjectionAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInjectionAnimationMarshaler::EmitSetInjectionData(
        DirectComposition::CInjectionAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // di
  char *v4; // rdx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x800) == 0 && *((_QWORD *)this + 15) && *((_QWORD *)this + 17) )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 24;
      *(_QWORD *)(v4 + 4) = 0LL;
      *(_QWORD *)(v4 + 12) = 0LL;
      *((_DWORD *)v4 + 5) = 0;
      *((_DWORD *)v4 + 1) = 174;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v4 + 3) = *(_DWORD *)(*((_QWORD *)this + 15) + 24LL);
      *((_DWORD *)v4 + 4) = *((_DWORD *)this + 32);
      *((_DWORD *)v4 + 5) = *((_DWORD *)this + 34);
      *((_DWORD *)this + 4) |= 0x800u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
