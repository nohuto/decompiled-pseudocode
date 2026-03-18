/*
 * XREFs of ?EmitUpdateCommands@CAnimationTriggerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014A580
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CAnimationTriggerMarshaler::EmitUpdateCommands(
        LARGE_INTEGER *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rdx
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 20;
  *(_QWORD *)(v3 + 4) = 0LL;
  *(_QWORD *)(v3 + 12) = 0LL;
  *((_DWORD *)v3 + 1) = 215;
  *((_DWORD *)v3 + 2) = this[3].LowPart;
  *(LARGE_INTEGER *)(v3 + 12) = this[5];
  if ( !this[5].QuadPart )
    this[5] = KeQueryPerformanceCounter(0LL);
  return 1;
}
