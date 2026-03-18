/*
 * XREFs of MiStoreSetEvictPageFile @ 0x1400C519C
 * Callers:
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiSufficientAvailablePages @ 0x1400FF320 (MiSufficientAvailablePages.c)
 */

LONG __fastcall MiStoreSetEvictPageFile(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  LONG result; // eax

  v2 = *(_QWORD *)(a1 + 256);
  _bittestandreset(*(signed __int32 **)(*(_QWORD *)(a1 + 112) + 32LL), a2);
  if ( ++*(_DWORD *)(a1 + 200) == 256 )
    return KeSetEvent((PRKEVENT)(v2 + 1184), 0, 0);
  result = MiSufficientAvailablePages(v2, 160LL);
  if ( !result )
    return KeSetEvent((PRKEVENT)(v2 + 1184), 0, 0);
  return result;
}
