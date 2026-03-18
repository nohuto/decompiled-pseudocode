/*
 * XREFs of MiIsVadEligibleForCommitRelease @ 0x1402506DC
 * Callers:
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 *     MiReleaseCommitForResetPages @ 0x140251398 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402515B8 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     MiVadMapsLargeImage @ 0x140062430 (MiVadMapsLargeImage.c)
 */

_BOOL8 __fastcall MiIsVadEligibleForCommitRelease(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rax
  unsigned __int64 v3; // rcx

  if ( ((1 << (*(_BYTE *)(a1 + 48) & 7)) & 0x55) != 0
    && !MiVadMapsLargeImage(a1)
    && (v2 = *(unsigned int *)(v1 + 52),
        LODWORD(v2) = v2 & 0x7FFFFFFF,
        v3 = v2 | ((unsigned __int64)*(unsigned __int8 *)(v1 + 34) << 31),
        v3 < 0x7FFFFFFFDLL)
    && v3 )
  {
    return (*(_DWORD *)(v1 + 48) & 0x8000000) == 0;
  }
  else
  {
    return 0LL;
  }
}
