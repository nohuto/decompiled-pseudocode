/*
 * XREFs of MiLocateSessionProtosInSubsection @ 0x1402682B4
 * Callers:
 *     MiGetSharedProtosAtDpcLevel @ 0x1402680B4 (MiGetSharedProtosAtDpcLevel.c)
 *     MiCreatePerSessionProtos @ 0x140754AFC (MiCreatePerSessionProtos.c)
 *     MiDereferenceSubsectionProtos @ 0x140754D20 (MiDereferenceSubsectionProtos.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiLocateSessionProtosInSubsection(__int64 a1, unsigned int a2)
{
  __int64 *result; // rax
  unsigned int v3; // ecx

  result = *(__int64 **)(a1 + 24);
  while ( result )
  {
    v3 = *((_DWORD *)result + 16);
    if ( a2 > v3 )
    {
      result = (__int64 *)result[1];
    }
    else
    {
      if ( a2 >= v3 )
        return result;
      result = (__int64 *)*result;
    }
  }
  return 0LL;
}
