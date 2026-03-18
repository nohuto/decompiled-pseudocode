/*
 * XREFs of UnlockDesktopMenu @ 0x1C01255E0
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C004CB14 (xxxUpdatePerUserSystemParameters.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C011B4F0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnlockDesktopMenu(__int64 a1)
{
  __int64 v1; // rdx

  *(_DWORD *)(*(_QWORD *)a1 + 56LL) &= ~0x40u;
  if ( *(_DWORD *)(*(_QWORD *)a1 + 68LL) )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 96LL) + 16LL);
    if ( v1 )
      *(_DWORD *)(v1 + 56) &= ~0x40u;
  }
  return HMAssignmentUnlock(a1);
}
