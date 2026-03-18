/*
 * XREFs of xxxPSMGetTextExtent @ 0x1C023D948
 * Callers:
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C009853C (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122820 (xxxDrawMenuBarUnderlines.c)
 *     xxxRealDrawMenuItem @ 0x1C0217880 (xxxRealDrawMenuItem.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     GreGetTextExtentW @ 0x1C0108E28 (GreGetTextExtentW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C013C0B8 (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C013C798 (CALL_LPK.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     GetPrefixCount @ 0x1C023BD70 (GetPrefixCount.c)
 */

__int64 __fastcall xxxPSMGetTextExtent(HDC a1, unsigned __int16 *a2, __int64 a3, struct tagSIZE *a4)
{
  unsigned int v6; // edi
  __int16 *v7; // rbp
  __int64 ThreadWin32Thread; // r15
  __int64 result; // rax
  __int64 v10; // r9
  __int16 *v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD v16[4]; // [rsp+30h] [rbp-268h] BYREF
  _BYTE v17[512]; // [rsp+50h] [rbp-248h] BYREF

  v6 = a3;
  v7 = (__int16 *)a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, (__int64)a4);
  if ( v6 < 0xFF )
  {
    v11 = (__int16 *)v17;
  }
  else
  {
    result = Win32AllocPool(2LL * (int)(v6 + 1), 1953657685LL);
    v11 = (__int16 *)result;
    if ( !result )
    {
      a4->cy = 0;
      a4->cx = 0;
      return result;
    }
    PushW32ThreadLock(result, v16, (__int64)Win32FreePool, v10);
  }
  v12 = (unsigned int)GetPrefixCount(v7, v6, (__int64)v11, v6) >> 16;
  if ( v12 )
  {
    v7 = v11;
    v6 -= v12;
  }
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
    xxxClientGetTextExtentPointW(a1, (const WCHAR *)v7, v6, a4);
  else
    GreGetTextExtentW(a1, (unsigned __int16 *)v7, v6, a4, 1);
  if ( v11 != (__int16 *)v17 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v16, v13, v14, v15);
  return 1LL;
}
