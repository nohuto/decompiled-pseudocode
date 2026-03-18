/*
 * XREFs of MmCheckMdlPages @ 0x1407A5C04
 * Callers:
 *     ViMmMapLockedPagesSanityChecks @ 0x1407C4EC8 (ViMmMapLockedPagesSanityChecks.c)
 * Callees:
 *     MiIsPfn @ 0x140101790 (MiIsPfn.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall MmCheckMdlPages(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 *v1; // rbx
  __int16 v2; // bp
  ULONG_PTR v3; // rsi
  ULONG_PTR v5; // r14
  __int64 result; // rax
  ULONG_PTR v7; // r9
  __int64 v8; // rcx

  v1 = (unsigned __int64 *)(BugCheckParameter2 + 48);
  v2 = *(_WORD *)(BugCheckParameter2 + 10) & 0x800;
  v3 = (((*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFF)
      + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40)
      + 4095) >> 12;
  v5 = BugCheckParameter2 + 48 + 8 * v3;
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
      VerifierBugCheckIfAppropriate(0xC4u, 0x89uLL, BugCheckParameter2, (ULONG_PTR)v1, v7);
    }
    v8 = 48 * *v1;
    result = 0xFFFFFA8000000020uLL;
    if ( !*(_WORD *)(v8 - 0x57FFFFFFFE0LL) )
      result = VerifierBugCheckIfAppropriate(0xC4u, 0x85uLL, BugCheckParameter2, v3, v8 / 48);
LABEL_8:
    ++v1;
  }
  while ( (unsigned __int64)v1 < v5 );
  return result;
}
