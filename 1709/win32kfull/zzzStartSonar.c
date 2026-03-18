/*
 * XREFs of zzzStartSonar @ 0x1C01C574C
 * Callers:
 *     EditionHandleSonarKeyEvent @ 0x1C010EA20 (EditionHandleSonarKeyEvent.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     zzzStartFade @ 0x1C013DD98 (zzzStartFade.c)
 *     zzzAnimateFade @ 0x1C013DECC (zzzAnimateFade.c)
 *     StopFade @ 0x1C013E090 (StopFade.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C013FDAC (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01C4DB8 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 */

HDC __fastcall zzzStartSonar(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  HDC result; // rax
  _BYTE v6[8]; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v7; // [rsp+38h] [rbp-20h] BYREF

  gptSonarCenter = *(_QWORD *)(gpsi + 4944LL);
  if ( LODWORD(gfade[6]) )
    StopFade();
  giSonarRadius = 100;
  v7.left = gptSonarCenter - 100;
  v7.right = gptSonarCenter + 100;
  v7.top = HIDWORD(gptSonarCenter) - 100;
  v7.bottom = HIDWORD(gptSonarCenter) + 100;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(HIDWORD(gptSonarCenter), a2, a3, a4);
  result = CreateFadeInternal(0LL, (__m128i *)&v7, 1000, 192, CurrentThreadDpiAwarenessContext);
  if ( result )
  {
    DrawSonar(result);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v6);
    zzzStartFade();
    zzzAnimateFade();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v6);
    return (HDC)1;
  }
  return result;
}
