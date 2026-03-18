/*
 * XREFs of ?EmitUpdateRails@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000F19C
 * Callers:
 *     ?EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000F0B0 (-EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionMarshaler::EmitUpdateRails(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // bl
  char *v5; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x800) != 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v6) )
    {
      v5 = (char *)v6;
      *(_DWORD *)v6 = 20;
      *(_QWORD *)(v5 + 4) = 0LL;
      *(_QWORD *)(v5 + 12) = 0LL;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v5 + 1) = 224;
      *((_DWORD *)v5 + 3) = (*((unsigned __int8 *)this + 248) >> 5) & 1;
      *((_DWORD *)v5 + 4) = (*((unsigned __int8 *)this + 248) >> 6) & 1;
      *((_DWORD *)this + 4) &= ~0x800u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
