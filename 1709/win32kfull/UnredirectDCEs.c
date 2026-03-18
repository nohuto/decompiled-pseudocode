/*
 * XREFs of UnredirectDCEs @ 0x1C008FFB4
 * Callers:
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0060944 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     UnsetRedirectedWindow @ 0x1C008A4D0 (UnsetRedirectedWindow.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 *     UserReleaseRedirectionBitmap @ 0x1C01C5370 (UserReleaseRedirectionBitmap.c)
 * Callees:
 *     GetStyleWindow @ 0x1C006B4B0 (GetStyleWindow.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C008FF10 (ChangeRedirectionParentInDCEs.c)
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C0090100 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     UpdateRedirectedDCE @ 0x1C00FAEE0 (UpdateRedirectedDCE.c)
 */

__int64 __fastcall UnredirectDCEs(struct tagWND *a1)
{
  const struct tagDCE *i; // rbx
  __int16 v3; // r10

  if ( GetStyleWindow((__int64)a1, 2848) )
    return ChangeRedirectionParentInDCEs(a1, 0);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  for ( i = *(const struct tagDCE **)(gpDispInfo + 16LL); i; i = *(const struct tagDCE **)i )
  {
    if ( (*((_DWORD *)i + 16) & 0x4400800) == 0
      && *((_QWORD *)i + 2)
      && (unsigned int)WindowMatchesDCE(a1, i)
      && (v3 & 0x1002) != 2 )
    {
      UpdateRedirectedDCE(i, 0LL);
    }
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
}
