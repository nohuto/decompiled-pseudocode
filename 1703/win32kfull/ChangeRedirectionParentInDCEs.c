/*
 * XREFs of ChangeRedirectionParentInDCEs @ 0x1C0021674
 * Callers:
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     UnredirectDCEs @ 0x1C0022A58 (UnredirectDCEs.c)
 *     RecreateRedirectionBitmap @ 0x1C009DE40 (RecreateRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01C1844 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C0022BA8 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     UpdateRedirectedDCE @ 0x1C00E3320 (UpdateRedirectedDCE.c)
 */

__int64 __fastcall ChangeRedirectionParentInDCEs(struct tagWND *a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rbx
  int v6; // ecx

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  v4 = gpDispInfo;
  v5 = *(__int64 **)(gpDispInfo + 16LL);
  if ( v5 )
  {
    do
    {
      v6 = *((_DWORD *)v5 + 16);
      if ( (v6 & 0x4404800) == 0x4000
        && v5[2]
        && (v6 & 0x1000) != 0
        && (unsigned int)WindowMatchesDCE(a1, (const struct tagDCE *)v5) )
      {
        UpdateRedirectedDCE(v5, a2);
      }
      v5 = (__int64 *)*v5;
    }
    while ( v5 );
    v4 = gpDispInfo;
  }
  return GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)v4 + 32LL));
}
