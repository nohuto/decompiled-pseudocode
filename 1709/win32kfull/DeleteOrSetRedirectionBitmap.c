/*
 * XREFs of DeleteOrSetRedirectionBitmap @ 0x1C00E3E74
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C00443AC (zzzDwmStartRedirection.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     UnsetRedirectedWindow @ 0x1C008A4D0 (UnsetRedirectedWindow.c)
 *     DeleteOldRedirectionBitmap @ 0x1C008A5A0 (DeleteOldRedirectionBitmap.c)
 *     zzzUpdateLayeredWindow @ 0x1C008D65C (zzzUpdateLayeredWindow.c)
 *     SetRedirectedWindow @ 0x1C008FCF8 (SetRedirectedWindow.c)
 *     xxxDwmStopRedirection @ 0x1C00E3780 (xxxDwmStopRedirection.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00E662C (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C00E6938 (RecreateRedirectionBitmap.c)
 *     UserReleaseRedirectionBitmap @ 0x1C01C5370 (UserReleaseRedirectionBitmap.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C00E3F0C (GreDereferenceObject.c)
 *     GreSetRedirection @ 0x1C00E3FAC (GreSetRedirection.c)
 */

__int64 __fastcall DeleteOrSetRedirectionBitmap(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( !a3 && (*(_WORD *)(a1 + 82) & 0x3FFF) == 0x29D )
  {
    result = *(_QWORD *)(v3 + 40);
    *(_QWORD *)(result + 88) = a2;
  }
  else
  {
    GreSetRedirection(a2, 0LL);
    GreMarkDeletableBitmap(a2);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    GreDereferenceObject(a2, 0LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    result = *(_QWORD *)(v3 + 40);
    if ( a2 == *(_QWORD *)(result + 88) )
      *(_QWORD *)(result + 88) = 0LL;
  }
  return result;
}
