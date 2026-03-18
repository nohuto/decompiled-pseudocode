/*
 * XREFs of MmTryIdentifyPage @ 0x1402185D4
 * Callers:
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x14042BD80 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 * Callees:
 *     MiIdentifyPfn @ 0x140001280 (MiIdentifyPfn.c)
 *     MiIsPageSecured @ 0x140217BEC (MiIsPageSecured.c)
 */

__int64 __fastcall MmTryIdentifyPage(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 *v5; // r9

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = 1;
  a2[2] = 0LL;
  v3 = 48 * a1 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
  {
    v2 = 0;
  }
  else
  {
    if ( (*(_BYTE *)(v3 + 35) & 0x40) != 0 || MiIsPageSecured(48 * a1 - 0x58000000000LL) )
      v2 = 0;
    else
      MiIdentifyPfn((_OWORD *)v3, v5);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  __writecr8(CurrentIrql);
  return v2;
}
