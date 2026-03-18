/*
 * XREFs of zzzStartSonar @ 0x1C01C2A28
 * Callers:
 *     EditionHandleSonarKeyEvent @ 0x1C01031D0 (EditionHandleSonarKeyEvent.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01C1578 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 *     CreateFade @ 0x1C01C1A90 (CreateFade.c)
 *     StopFade @ 0x1C01C2190 (StopFade.c)
 *     zzzAnimateFade @ 0x1C01C27AC (zzzAnimateFade.c)
 *     zzzStartFade @ 0x1C01C295C (zzzStartFade.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 zzzStartSonar()
{
  bool v0; // zf
  __int64 v1; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 result; // rax
  _BYTE v4[8]; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v5; // [rsp+38h] [rbp-20h] BYREF

  v0 = gfade[12] == 0;
  v1 = *(_QWORD *)(gpsi + 5368LL);
  gptSonarCenter = v1;
  if ( !v0 )
  {
    StopFade();
    LODWORD(v1) = gptSonarCenter;
  }
  giSonarRadius = 100;
  v5.left = v1 - 100;
  v5.right = v1 + 100;
  v5.top = HIDWORD(gptSonarCenter) - 100;
  v5.bottom = HIDWORD(gptSonarCenter) + 100;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  result = CreateFade(0LL, &v5, 0x3E8u, 192, CurrentThreadDpiAwarenessContext);
  if ( result )
  {
    DrawSonar((HDC)result);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v4);
    zzzStartFade();
    zzzAnimateFade();
    if ( !v4[0] )
    {
      --gdwInAtomicOperation;
      UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v4);
    }
    return 1LL;
  }
  return result;
}
