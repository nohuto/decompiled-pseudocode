/*
 * XREFs of ?ScrubDelegatedBaseWindow@@YAHPEAUtagBWND@@@Z @ 0x1C00DE36C
 * Callers:
 *     ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00857D8 (-ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     CleanupInputDelegation @ 0x1C0085870 (CleanupInputDelegation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScrubDelegatedBaseWindow(struct tagBWND *a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  __int64 result; // rax

  v1 = *((_QWORD *)a1 + 2);
  v3 = *((_QWORD *)a1 + 8);
  *((_QWORD *)a1 + 8) = 0LL;
  *((_DWORD *)a1 + 18) = 0;
  --*(_DWORD *)(v1 + 1216);
  --*(_DWORD *)(v3 + 1216);
  if ( *(struct tagBWND **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL) + 136LL) == a1
    && (int)IsClearDelegationCaptureSupported() >= 0 )
  {
    ClearDelegationCapture(*(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL));
  }
  if ( *(_DWORD *)(v3 + 1216) )
    return 0LL;
  *(_DWORD *)(v3 + 1184) &= ~0x2000u;
  result = 1LL;
  *(_QWORD *)(v3 + 1200) = 0LL;
  *(_QWORD *)(v3 + 1208) = 0LL;
  *(_DWORD *)(v3 + 464) &= 0xFFFFFF3F;
  return result;
}
