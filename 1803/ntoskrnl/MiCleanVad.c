/*
 * XREFs of MiCleanVad @ 0x140595BD8
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140595928 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x1401175E0 (MiVadDeleted.c)
 *     MiWaitForVadDeletion @ 0x14026B614 (MiWaitForVadDeletion.c)
 *     MiUnmapVad @ 0x1404D72FC (MiUnmapVad.c)
 */

__int64 __fastcall MiCleanVad(PVOID P)
{
  unsigned int v2; // edi
  unsigned int *v3; // rcx
  unsigned int v4; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  v2 = 0;
  if ( (unsigned int)MiVadDeleted((__int64)P) == 1 )
  {
    MiWaitForVadDeletion((__int64)v3);
    MiUnlockAndDereferenceVad(P, v6, v7, v8);
    return 1;
  }
  else
  {
    v4 = v3[12];
    if ( (v4 & 0x4000) == 0 || (v4 & 7) == 1 )
      MiUnmapVad((__int64)v3, 0LL, 0);
    else
      MiDeleteVad(v3, 0LL, 0);
  }
  return v2;
}
