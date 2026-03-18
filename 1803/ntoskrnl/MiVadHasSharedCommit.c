/*
 * XREFs of MiVadHasSharedCommit @ 0x1405BF9E8
 * Callers:
 *     MiAllocateChildVads @ 0x1405BF6F8 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x140756210 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiIncludeSharedCommit @ 0x1400E6C10 (MiIncludeSharedCommit.c)
 */

__int64 __fastcall MiVadHasSharedCommit(__int64 a1)
{
  int v1; // edx
  __int64 *v3; // rcx
  unsigned int v4; // edx

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 7) == 2 )
    return 1LL;
  if ( (v1 & 0x4000) != 0 )
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
