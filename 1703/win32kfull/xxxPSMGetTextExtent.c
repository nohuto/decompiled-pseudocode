/*
 * XREFs of xxxPSMGetTextExtent @ 0x1C000CBA8
 * Callers:
 *     ?xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z @ 0x1C000CAC4 (-xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0042EB4 (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0118F78 (xxxDrawMenuBarUnderlines.c)
 *     xxxRealDrawMenuItem @ 0x1C02166C4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreGetTextExtentW @ 0x1C000C2DC (GreGetTextExtentW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C000CC7C (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C000EAB4 (CALL_LPK.c)
 *     GetPrefixCount @ 0x1C000EAF0 (GetPrefixCount.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall xxxPSMGetTextExtent(HDC a1, unsigned __int16 *a2, __int64 a3, struct tagSIZE *a4)
{
  unsigned int v6; // edi
  unsigned __int16 *v7; // rbp
  __int64 ThreadWin32Thread; // r15
  unsigned __int16 *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 result; // rax
  _BYTE v13[32]; // [rsp+30h] [rbp-268h] BYREF
  _BYTE v14[512]; // [rsp+50h] [rbp-248h] BYREF

  v6 = a3;
  v7 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  if ( v6 >= 0xFF )
  {
    result = Win32AllocPool(2LL * (int)(v6 + 1), 1953657685LL);
    v9 = (unsigned __int16 *)result;
    if ( !result )
    {
      a4->cy = 0;
      a4->cx = 0;
      return result;
    }
    PushW32ThreadLock(result, v13, Win32FreePool);
  }
  else
  {
    v9 = (unsigned __int16 *)v14;
  }
  v10 = (unsigned int)GetPrefixCount(v7, v6, v9, v6) >> 16;
  if ( v10 )
  {
    v7 = v9;
    v6 -= v10;
  }
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread, v11) )
    xxxClientGetTextExtentPointW(a1);
  else
    GreGetTextExtentW(a1, v7, v6, a4, 1);
  if ( v9 != (unsigned __int16 *)v14 )
    PopAndFreeAlwaysW32ThreadLock(v13);
  return 1LL;
}
