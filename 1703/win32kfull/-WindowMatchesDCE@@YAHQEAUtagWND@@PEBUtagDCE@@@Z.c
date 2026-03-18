/*
 * XREFs of ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C0022BA8
 * Callers:
 *     ChangeRedirectionParentInDCEs @ 0x1C0021674 (ChangeRedirectionParentInDCEs.c)
 *     UnredirectDCEs @ 0x1C0022A58 (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x1C0022B14 (RedirectDCEs.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowMatchesDCE(struct tagWND *const a1, struct tagWND *const *a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rcx
  struct tagWND *v5; // rax
  __int64 v6; // rcx
  __int64 i; // rcx

  v2 = 0;
  v4 = *((_QWORD *)a1 + 3);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 8);
    if ( v6 )
      v5 = *(struct tagWND **)(v6 + 16);
  }
  if ( a1 == v5 )
  {
    LOBYTE(v2) = a1 == a2[2];
  }
  else
  {
    for ( i = *((_QWORD *)a2 + 2); a1 != (struct tagWND *const)i; i = *(_QWORD *)(i + 104) )
    {
      if ( (*(_WORD *)(i + 82) & 0x3FFF) == 0x29D )
        return v2;
    }
    return 1;
  }
  return v2;
}
