/*
 * XREFs of UnredirectDCEs @ 0x1C0022A58
 * Callers:
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     UnsetRedirectedWindow @ 0x1C001D5C8 (UnsetRedirectedWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C005D85C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     UserReleaseRedirectionBitmap @ 0x1C01C2300 (UserReleaseRedirectionBitmap.c)
 * Callees:
 *     ChangeRedirectionParentInDCEs @ 0x1C0021674 (ChangeRedirectionParentInDCEs.c)
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C0022BA8 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     GetStyleWindow @ 0x1C0067050 (GetStyleWindow.c)
 *     UpdateRedirectedDCE @ 0x1C00E3320 (UpdateRedirectedDCE.c)
 */

__int64 __fastcall UnredirectDCEs(struct tagWND *a1)
{
  __int64 v2; // rcx
  const struct tagDCE *v3; // rbx
  __int16 v4; // r10

  if ( GetStyleWindow(a1, 2848LL) )
    return ChangeRedirectionParentInDCEs(a1, 0);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  v2 = gpDispInfo;
  v3 = *(const struct tagDCE **)(gpDispInfo + 16LL);
  if ( v3 )
  {
    do
    {
      if ( (*((_DWORD *)v3 + 16) & 0x4400800) == 0
        && *((_QWORD *)v3 + 2)
        && (unsigned int)WindowMatchesDCE(a1, v3)
        && (v4 & 0x1002) != 2 )
      {
        UpdateRedirectedDCE(v3, 0LL);
      }
      v3 = *(const struct tagDCE **)v3;
    }
    while ( v3 );
    v2 = gpDispInfo;
  }
  return GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)v2 + 32LL));
}
