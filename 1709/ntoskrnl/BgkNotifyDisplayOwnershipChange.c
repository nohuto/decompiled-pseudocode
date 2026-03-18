/*
 * XREFs of BgkNotifyDisplayOwnershipChange @ 0x14013EC50
 * Callers:
 *     BgkSetDisplayOwnership @ 0x14013EC30 (BgkSetDisplayOwnership.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x1401F4120 (BgkNotifyDisplayOwnershipLost.c)
 *     BvgaNotifyDisplayOwnershipChange @ 0x1401F45A0 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1400ADB30 (ExRundownCompleted.c)
 *     InbvSetFunction @ 0x14013EB00 (InbvSetFunction.c)
 *     BgkpTryEnableConsole @ 0x14013ED70 (BgkpTryEnableConsole.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     BgLibraryEnable @ 0x140290490 (BgLibraryEnable.c)
 *     BgkResumeFinished @ 0x14042A5B8 (BgkResumeFinished.c)
 *     BgSetFrameBufferAccess @ 0x1407CE008 (BgSetFrameBufferAccess.c)
 *     BgConsoleGetInterface @ 0x1407CE5F0 (BgConsoleGetInterface.c)
 *     BgkpUnlockBgfxCodeSection @ 0x1407D08B8 (BgkpUnlockBgfxCodeSection.c)
 *     BgConsoleDestroyInterface @ 0x1407D0938 (BgConsoleDestroyInterface.c)
 *     BgLibraryDisable @ 0x1407D0994 (BgLibraryDisable.c)
 *     BgDisplayFade @ 0x1407D09D0 (BgDisplayFade.c)
 *     BgkpLockBgfxCodeSection @ 0x1407D0C80 (BgkpLockBgfxCodeSection.c)
 *     BgkDestroy @ 0x1407D0D0C (BgkDestroy.c)
 */

__int64 __fastcall BgkNotifyDisplayOwnershipChange(char a1, __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD))
{
  __int64 result; // rax
  int v3; // ebx
  int v4; // eax
  char v5; // cl
  void (__fastcall **Interface)(_QWORD, __int64, _QWORD, _QWORD); // rax
  __int64 (*v7)(void); // [rsp+30h] [rbp-48h] BYREF
  _BYTE v8[40]; // [rsp+38h] [rbp-40h] BYREF

  if ( byte_1403A33E0 && !a1 )
  {
    BgkResumeFinished();
    qword_1403A33D8 = 0LL;
    byte_140389F22 = 0;
    return 0LL;
  }
  if ( a1 == byte_140389F22 )
    return 0LL;
  if ( !a1 )
  {
    if ( a2 )
    {
      qword_140389F10 = a2;
    }
    else if ( !qword_140389F10 )
    {
      return 3221225712LL;
    }
    BgDisplayFade();
    byte_140389F21 = 0;
    byte_140389F18 = 0;
    ExWaitForRundownProtectionRelease(&stru_1403586B8);
    ExRundownCompleted(&stru_1403586B8);
    v3 = BgLibraryDisable();
    if ( v3 < 0 )
    {
      BgkDestroy();
      InbvSetFunction(3);
      v3 = 0;
    }
    else
    {
      byte_140389F22 = 0;
      byte_140389F19 = 0;
      if ( qword_140389F08 )
      {
        BgConsoleDestroyInterface();
        qword_140389F08 = 0LL;
      }
    }
    BgSetFrameBufferAccess(0LL, 0LL, 0LL);
    BgkpUnlockBgfxCodeSection();
    if ( qword_1403A33D8 )
    {
      qword_1403A33D8();
      qword_1403A33D8 = 0LL;
    }
    return (unsigned int)v3;
  }
  if ( !qword_140389F10 )
    return 3221225473LL;
  v7 = 0LL;
  result = qword_140389F10(0LL, v8, &v7);
  if ( (int)result >= 0 )
  {
    qword_1403A33D8 = v7;
    BgkpLockBgfxCodeSection();
    v4 = BgLibraryEnable(v8, 0LL);
    v5 = byte_140389F22;
    v3 = v4;
    if ( v4 >= 0 )
      v5 = 1;
    byte_140389F22 = v5;
    Interface = (void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))BgConsoleGetInterface();
    qword_140389F08 = (__int64)Interface;
    if ( Interface )
      (*Interface)(0LL, 4291217094LL, (unsigned int)dword_1403A3670, 0LL);
    BgkpTryEnableConsole();
    return (unsigned int)v3;
  }
  return result;
}
