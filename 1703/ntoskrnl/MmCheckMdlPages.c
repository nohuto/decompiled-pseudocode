/*
 * XREFs of MmCheckMdlPages @ 0x140763EF4
 * Callers:
 *     ViMmMapLockedPagesSanityChecks @ 0x140782B38 (ViMmMapLockedPagesSanityChecks.c)
 * Callees:
 *     MiIsPfn @ 0x1400DC8A0 (MiIsPfn.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall MmCheckMdlPages(__int64 a1)
{
  unsigned __int64 *v1; // rbx
  __int16 v2; // bp
  unsigned __int64 v3; // r14
  __int64 result; // rax
  ULONG_PTR v5; // r9
  __int64 v6; // rcx

  v1 = (unsigned __int64 *)(a1 + 48);
  v2 = *(_WORD *)(a1 + 10) & 0x800;
  v3 = a1
     + 48
     + 8
     * ((((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12);
  do
  {
    result = MiIsPfn(*v1);
    if ( v2 )
    {
      if ( (_DWORD)result != 1 )
        goto LABEL_8;
    }
    else if ( !(_DWORD)result )
    {
      VerifierBugCheckIfAppropriate(0xC4u, v5);
    }
    v6 = 48 * *v1;
    result = 0xFFFFFA8000000020uLL;
    if ( !*(_WORD *)(v6 - 0x57FFFFFFFE0LL) )
      result = VerifierBugCheckIfAppropriate(0xC4u, v6 / 48);
LABEL_8:
    ++v1;
  }
  while ( (unsigned __int64)v1 < v3 );
  return result;
}
