/*
 * XREFs of MiCleanVad @ 0x14047AE9C
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14047ABC0 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiVadDeleted @ 0x1400CE370 (MiVadDeleted.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     MiWaitForVadDeletion @ 0x1402238D8 (MiWaitForVadDeletion.c)
 *     MiUnmapVad @ 0x14047B5C0 (MiUnmapVad.c)
 */

void __fastcall MiCleanVad(char *P)
{
  __int64 v2; // rcx
  int v3; // eax

  if ( (unsigned int)MiVadDeleted((__int64)P) == 1 )
  {
    MiWaitForVadDeletion(v2);
    MiUnlockAndDereferenceVad(P);
  }
  else
  {
    v3 = *(_DWORD *)(v2 + 48);
    if ( (v3 & 0x8000) == 0 || (v3 & 7) == 1 )
      MiUnmapVad(v2, 0LL);
    else
      MiDeleteVad(v2, 0);
  }
}
