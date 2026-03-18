/*
 * XREFs of MiCleanVad @ 0x1404D3230
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1404D2F70 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiVadDeleted @ 0x14003D4D0 (MiVadDeleted.c)
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiWaitForVadDeletion @ 0x14023032C (MiWaitForVadDeletion.c)
 *     MiUnmapVad @ 0x140499B30 (MiUnmapVad.c)
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
      MiUnmapVad(v2, 0);
    else
      MiDeleteVad(v2, 0);
  }
}
