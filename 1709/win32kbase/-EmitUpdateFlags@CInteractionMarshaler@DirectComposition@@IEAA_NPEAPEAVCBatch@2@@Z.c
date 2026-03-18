/*
 * XREFs of ?EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00221AC
 * Callers:
 *     ?EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0021DF0 (-EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionMarshaler::EmitUpdateFlags(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // bl
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x200) != 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 32;
      *(_QWORD *)(v4 + 4) = 0LL;
      *(_QWORD *)(v4 + 12) = 0LL;
      *(_QWORD *)(v4 + 20) = 0LL;
      *((_DWORD *)v4 + 7) = 0;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v4 + 1) = 187;
      *((_DWORD *)v4 + 3) = (*((unsigned __int8 *)this + 280) >> 1) & 1;
      *((_DWORD *)v4 + 4) = *((_BYTE *)this + 280) & 1;
      *((_DWORD *)v4 + 5) = (*((unsigned __int8 *)this + 280) >> 2) & 1;
      *((_DWORD *)v4 + 6) = (*((unsigned __int8 *)this + 280) >> 3) & 1;
      *((_DWORD *)v4 + 7) = (*((unsigned __int8 *)this + 280) >> 4) & 1;
      *((_DWORD *)this + 4) &= ~0x200u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
