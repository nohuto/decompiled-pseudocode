/*
 * XREFs of PpmHeteroDetectFavoredCores @ 0x1405C0998
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x1405C0604 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140047190 (KeIsEmptyAffinityEx.c)
 *     KeOrAffinityEx @ 0x140080BD0 (KeOrAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x140160800 (KeIsEqualAffinityEx.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall PpmHeteroDetectFavoredCores(unsigned __int16 *a1, char *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  char v6; // al

  *(_QWORD *)a1 = 1310721LL;
  v4 = 0;
  memset(a1 + 4, 0, 0xA0uLL);
  *a2 = 0;
  if ( !(unsigned int)KeIsEmptyAffinityEx(PpmCheckRegistered)
    && (unsigned int)KeIsEqualAffinityEx(PpmPerfStatesRegistered, PpmCheckRegistered)
    && PpmPerfDomainCount != 1 )
  {
    v5 = PpmPerfDomainHead;
    while ( (__int64 *)v5 != &PpmPerfDomainHead )
    {
      if ( !*(_BYTE *)(v5 + 206) )
        KeOrAffinityEx((unsigned __int16 *)(v5 + 24), a1, a1);
      v6 = *a2;
      if ( (unsigned __int8)*a2 <= *(_BYTE *)(v5 + 206) )
        v6 = *(_BYTE *)(v5 + 206);
      v5 = *(_QWORD *)v5;
      *a2 = v6;
    }
    if ( !(unsigned int)KeIsEqualAffinityEx(PpmPerfStatesRegistered, a1) )
      return 1;
  }
  return v4;
}
