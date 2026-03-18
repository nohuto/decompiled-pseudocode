/*
 * XREFs of PpmHeteroDetectFavoredCores @ 0x140640260
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x14063F9AC (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x1400352E0 (KeIsEmptyAffinityEx.c)
 *     KeOrAffinityEx @ 0x1400D3780 (KeOrAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x14017FE90 (KeIsEqualAffinityEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall PpmHeteroDetectFavoredCores(unsigned __int16 *a1)
{
  unsigned int v2; // ebx
  __int64 i; // rdi

  *(_QWORD *)a1 = 1310721LL;
  v2 = 0;
  memset(a1 + 4, 0, 0xA0uLL);
  if ( !(unsigned int)KeIsEmptyAffinityEx(PpmCheckRegistered)
    && (unsigned int)KeIsEqualAffinityEx(PpmPerfStatesRegistered, PpmCheckRegistered)
    && PpmPerfDomainCount != 1 )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      if ( !*(_BYTE *)(i + 206) )
        KeOrAffinityEx((unsigned __int16 *)(i + 24), a1, a1);
    }
    if ( !(unsigned int)KeIsEqualAffinityEx(PpmPerfStatesRegistered, a1) )
      return 1;
  }
  return v2;
}
