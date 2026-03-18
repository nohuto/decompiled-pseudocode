/*
 * XREFs of MiStoreSetEvictPageFile @ 0x14022CBA8
 * Callers:
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 * Callees:
 *     MiSufficientAvailablePages @ 0x1400649E0 (MiSufficientAvailablePages.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 */

LONG __fastcall MiStoreSetEvictPageFile(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  LONG result; // eax

  v2 = *(_QWORD *)(a1 + 256);
  _bittestandreset(*(signed __int32 **)(*(_QWORD *)(a1 + 112) + 32LL), a2);
  if ( ++*(_DWORD *)(a1 + 200) == 256 )
    return KeSetEvent((PRKEVENT)(v2 + 1184), 0, 0);
  result = MiSufficientAvailablePages(v2, 0xA0uLL);
  if ( !result )
    return KeSetEvent((PRKEVENT)(v2 + 1184), 0, 0);
  return result;
}
