/*
 * XREFs of RedirectDCEs @ 0x1C0022B14
 * Callers:
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     UnsetLayeredWindow @ 0x1C001D9B4 (UnsetLayeredWindow.c)
 *     SetRedirectedWindow @ 0x1C0022830 (SetRedirectedWindow.c)
 * Callees:
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C0022BA8 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     UpdateRedirectedDCE @ 0x1C00E3320 (UpdateRedirectedDCE.c)
 */

__int64 __fastcall RedirectDCEs(struct tagWND *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rbx
  int v4; // eax

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  v2 = gpDispInfo;
  v3 = *(__int64 **)(gpDispInfo + 16LL);
  if ( v3 )
  {
    do
    {
      v4 = *((_DWORD *)v3 + 16);
      if ( (v4 & 0x4400800) == 0
        && v3[2]
        && (v4 & 0x1000) != 0
        && (unsigned int)WindowMatchesDCE(a1, (const struct tagDCE *)v3) )
      {
        UpdateRedirectedDCE(v3, 0LL);
      }
      v3 = (__int64 *)*v3;
    }
    while ( v3 );
    v2 = gpDispInfo;
  }
  return GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)v2 + 32LL));
}
