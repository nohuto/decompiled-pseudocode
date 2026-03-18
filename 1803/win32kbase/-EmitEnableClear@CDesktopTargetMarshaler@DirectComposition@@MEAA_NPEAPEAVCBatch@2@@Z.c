/*
 * XREFs of ?EmitEnableClear@CDesktopTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C006B520
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CDesktopTargetMarshaler::EmitEnableClear(
        DirectComposition::CDesktopTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v4; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x100) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v5) )
  {
    v4 = (char *)v5;
    *(_DWORD *)v5 = 16;
    *(_QWORD *)(v4 + 4) = 0LL;
    *((_DWORD *)v4 + 3) = 0;
    *((_DWORD *)v4 + 1) = 345;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v4 + 3) = *((unsigned __int8 *)this + 52);
    *((_DWORD *)this + 4) &= ~0x100u;
    return 1;
  }
  return 0;
}
