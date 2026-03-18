/*
 * XREFs of BgkNotifyDisplayOwnershipChange @ 0x140140280
 * Callers:
 *     BgkSetDisplayOwnership @ 0x14015E100 (BgkSetDisplayOwnership.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x1401EEA20 (BgkNotifyDisplayOwnershipLost.c)
 *     BvgaNotifyDisplayOwnershipChange @ 0x1401EEEA0 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1401161E0 (ExRundownCompleted.c)
 *     BgLibraryEnable @ 0x14013DDEC (BgLibraryEnable.c)
 *     BgkpTryEnableConsole @ 0x140140224 (BgkpTryEnableConsole.c)
 *     InbvSetFunction @ 0x14015DFD0 (InbvSetFunction.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     BgkResumeFinished @ 0x140409F64 (BgkResumeFinished.c)
 *     BgSetFrameBufferAccess @ 0x140755008 (BgSetFrameBufferAccess.c)
 *     BgkpLockBgfxCodeSection @ 0x140755680 (BgkpLockBgfxCodeSection.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140755710 (BgkpUnlockBgfxCodeSection.c)
 *     BgDisplayFade @ 0x140755790 (BgDisplayFade.c)
 *     BgConsoleGetInterface @ 0x140755EA8 (BgConsoleGetInterface.c)
 *     BgkDestroy @ 0x140758A14 (BgkDestroy.c)
 *     BgLibraryDisable @ 0x140758A34 (BgLibraryDisable.c)
 *     BgConsoleDestroyInterface @ 0x140758AC0 (BgConsoleDestroyInterface.c)
 */

__int64 __fastcall BgkNotifyDisplayOwnershipChange(char a1, __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD))
{
  int v2; // ebx
  __int64 result; // rax
  int v4; // eax
  char v5; // cl
  void (__fastcall **Interface)(_QWORD, __int64, _QWORD, _QWORD); // rax
  __int64 (*v7)(void); // [rsp+30h] [rbp-48h] BYREF
  _BYTE v8[40]; // [rsp+38h] [rbp-40h] BYREF

  if ( byte_14036E288 && !a1 )
  {
    BgkResumeFinished();
    qword_14036E490 = 0LL;
    byte_14036E49D = 0;
    return 0LL;
  }
  if ( a1 == byte_14036E49D )
    return 0LL;
  if ( !a1 )
  {
    if ( a2 )
    {
      qword_14036E480 = a2;
    }
    else if ( !qword_14036E480 )
    {
      return 3221225712LL;
    }
    BgDisplayFade();
    byte_14036E351 = 0;
    byte_14036E350 = 0;
    ExWaitForRundownProtectionRelease(&stru_140340058);
    ExRundownCompleted(&stru_140340058);
    v2 = BgLibraryDisable();
    if ( v2 < 0 )
    {
      BgkDestroy();
      InbvSetFunction(3LL);
      v2 = 0;
    }
    else
    {
      byte_14036E49D = 0;
      byte_14036E488 = 0;
      if ( qword_14036E478 )
      {
        BgConsoleDestroyInterface();
        qword_14036E478 = 0LL;
      }
    }
    BgSetFrameBufferAccess(0LL, 0LL, 0LL);
    BgkpUnlockBgfxCodeSection();
    if ( qword_14036E490 )
    {
      qword_14036E490();
      qword_14036E490 = 0LL;
    }
    return (unsigned int)v2;
  }
  if ( !qword_14036E480 )
    return 3221225473LL;
  v7 = 0LL;
  result = qword_14036E480(0LL, v8, &v7);
  if ( (int)result >= 0 )
  {
    qword_14036E490 = v7;
    BgkpLockBgfxCodeSection();
    v4 = BgLibraryEnable((__int64)v8, 0);
    v5 = byte_14036E49D;
    v2 = v4;
    if ( v4 >= 0 )
      v5 = 1;
    byte_14036E49D = v5;
    Interface = (void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))BgConsoleGetInterface();
    qword_14036E478 = (__int64)Interface;
    if ( Interface )
      (*Interface)(0LL, 4291217094LL, (unsigned int)dword_1403880D0, 0LL);
    BgkpTryEnableConsole();
    return (unsigned int)v2;
  }
  return result;
}
