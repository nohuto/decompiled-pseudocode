/*
 * XREFs of MiVadHasSharedCommit @ 0x14057AFC0
 * Callers:
 *     MiAllocateChildVads @ 0x14057AC60 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1406EC69C (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiIncludeSharedCommit @ 0x1400A26D0 (MiIncludeSharedCommit.c)
 */

__int64 __fastcall MiVadHasSharedCommit(__int64 a1)
{
  int v1; // edx
  __int64 *v3; // rcx
  unsigned int v4; // edx

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 7) == 2 )
    return 1LL;
  if ( (v1 & 0x8000) != 0 )
    return 0LL;
  if ( (v1 & 7) == 1 )
    return 0LL;
  if ( *(__int64 *)(a1 + 120) < 0 )
    return 0LL;
  v3 = *(__int64 **)(a1 + 72);
  if ( !v3 )
    return 0LL;
  LOBYTE(v4) = MiIncludeSharedCommit(*v3);
  return v4;
}
