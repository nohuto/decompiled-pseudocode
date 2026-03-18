/*
 * XREFs of BgkNotifyDisplayOwnershipChange @ 0x140164C40
 * Callers:
 *     BgkSetDisplayOwnership @ 0x14017C450 (BgkSetDisplayOwnership.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x140231650 (BgkNotifyDisplayOwnershipLost.c)
 *     BvgaNotifyDisplayOwnershipChange @ 0x140231AD0 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x14008AE10 (ExRundownCompleted.c)
 *     BgLibraryEnable @ 0x140156038 (BgLibraryEnable.c)
 *     BgkpTryEnableConsole @ 0x140165B6C (BgkpTryEnableConsole.c)
 *     InbvSetFunction @ 0x14017C310 (InbvSetFunction.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     BgkResumeFinished @ 0x1404767D0 (BgkResumeFinished.c)
 *     BgSetFrameBufferAccess @ 0x14083B008 (BgSetFrameBufferAccess.c)
 *     BgkpUnlockBgfxCodeSection @ 0x14083B364 (BgkpUnlockBgfxCodeSection.c)
 *     BgDisplayFade @ 0x14083B49C (BgDisplayFade.c)
 *     BgConsoleGetInterface @ 0x14083B4E4 (BgConsoleGetInterface.c)
 *     BgkpLockBgfxCodeSection @ 0x14083C6B0 (BgkpLockBgfxCodeSection.c)
 *     BgLibraryDisable @ 0x14083CF88 (BgLibraryDisable.c)
 *     BgConsoleDestroyInterface @ 0x14083D050 (BgConsoleDestroyInterface.c)
 *     BgkDestroy @ 0x14083DC74 (BgkDestroy.c)
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

  if ( byte_1403CDB50 && !a1 )
  {
    BgkResumeFinished();
    qword_1403CDD50 = 0LL;
    byte_1403CDD5D = 0;
    return 0LL;
  }
  if ( a1 == byte_1403CDD5D )
    return 0LL;
  if ( !a1 )
  {
    if ( a2 )
    {
      qword_1403CDD40 = a2;
    }
    else if ( !qword_1403CDD40 )
    {
      return 3221225712LL;
    }
    BgDisplayFade();
    byte_1403CDC2D = 0;
    byte_1403CDC2C = 0;
    ExWaitForRundownProtectionRelease(&stru_14039BCA8);
    ExRundownCompleted(&stru_14039BCA8);
    v2 = BgLibraryDisable();
    if ( v2 < 0 )
    {
      BgkDestroy();
      InbvSetFunction(3LL);
      v2 = 0;
    }
    else
    {
      byte_1403CDD5D = 0;
      byte_1403CDD48 = 0;
      if ( qword_1403CDD38 )
      {
        BgConsoleDestroyInterface();
        qword_1403CDD38 = 0LL;
      }
    }
    BgSetFrameBufferAccess(0LL, 0LL, 0LL);
    BgkpUnlockBgfxCodeSection();
    if ( qword_1403CDD50 )
    {
      qword_1403CDD50();
      qword_1403CDD50 = 0LL;
    }
    return (unsigned int)v2;
  }
  if ( !qword_1403CDD40 )
    return 3221225473LL;
  v7 = 0LL;
  result = qword_1403CDD40(0LL, v8, &v7);
  if ( (int)result >= 0 )
  {
    qword_1403CDD50 = v7;
    BgkpLockBgfxCodeSection();
    v4 = BgLibraryEnable((__int64)v8, 0);
    v5 = byte_1403CDD5D;
    v2 = v4;
    if ( v4 >= 0 )
      v5 = 1;
    byte_1403CDD5D = v5;
    Interface = (void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))BgConsoleGetInterface();
    qword_1403CDD38 = (__int64)Interface;
    if ( Interface )
      (*Interface)(0LL, 4291217094LL, (unsigned int)dword_1403E9BB0, 0LL);
    BgkpTryEnableConsole();
    return (unsigned int)v2;
  }
  return result;
}
