/*
 * XREFs of ?DxgkEngGetWindowRectApiExt@@YAHPEAUHWND__@@QEAUtagRECT@@@Z @ 0x1C0092570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngGetWindowRectApiExt(HWND a1, struct tagRECT *const a2)
{
  int WindowRectSupported; // eax
  unsigned int v5; // r8d

  WindowRectSupported = IsDxgkEngGetWindowRectSupported();
  v5 = 0;
  if ( WindowRectSupported >= 0 )
    return (unsigned int)DxgkEngGetWindowRect(a1, a2, 0LL);
  return v5;
}
