/*
 * XREFs of ?ScrubDelegatedBaseWindow@@YAHPEAUtagBWND@@@Z @ 0x1C00A75E8
 * Callers:
 *     ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00127DC (-ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     CleanupInputDelegation @ 0x1C006B160 (CleanupInputDelegation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScrubDelegatedBaseWindow(struct tagBWND *a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  v1 = *((_QWORD *)a1 + 2);
  v3 = *((_QWORD *)a1 + 8);
  *((_QWORD *)a1 + 8) = 0LL;
  *((_DWORD *)a1 + 18) = 0;
  --*(_DWORD *)(v1 + 1240);
  --*(_DWORD *)(v3 + 1240);
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  if ( *(struct tagBWND **)(v4 + 136) == a1 && (int)IsClearDelegationCaptureSupported(v4) >= 0 )
    ClearDelegationCapture(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL));
  if ( *(_DWORD *)(v3 + 1240) )
    return 0LL;
  *(_DWORD *)(v3 + 1200) &= ~0x2000u;
  result = 1LL;
  *(_QWORD *)(v3 + 1224) = 0LL;
  *(_QWORD *)(v3 + 1232) = 0LL;
  *(_DWORD *)(v3 + 480) &= 0xFFFFFF3F;
  return result;
}
