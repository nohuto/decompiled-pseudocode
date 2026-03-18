/*
 * XREFs of ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0215328
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C02166C4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     CALL_LPK @ 0x1C000EAB4 (CALL_LPK.c)
 *     GetPrefixCount @ 0x1C000EAF0 (GetPrefixCount.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     MNGetpItemIndex @ 0x1C004231C (MNGetpItemIndex.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     GreExtTextOutWInternal @ 0x1C0090298 (GreExtTextOutWInternal.c)
 *     GetAppCompatFlags2 @ 0x1C00C3100 (GetAppCompatFlags2.c)
 *     xxxClientExtTextOutW @ 0x1C0138734 (xxxClientExtTextOutW.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0215194 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C021BCC8 (xxxPSMTextOut.c)
 */

void __fastcall xxxDrawMenuItemText(
        struct tagMENU *a1,
        struct tagITEM *a2,
        HDC a3,
        unsigned int a4,
        int a5,
        unsigned __int16 *a6,
        int a7,
        int a8)
{
  __int64 v11; // rax
  unsigned __int16 *SourceString; // rbx
  int PrefixCount; // r12d
  __int64 v15; // [rsp+58h] [rbp-270h]
  __int64 ThreadWin32Thread; // [rsp+60h] [rbp-268h]
  _QWORD v17[3]; // [rsp+68h] [rbp-260h] BYREF
  _BYTE v18[512]; // [rsp+80h] [rbp-248h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v15 = *((_QWORD *)a2 + 7);
  if ( a7 < 255 )
  {
    SourceString = (unsigned __int16 *)v18;
  }
  else
  {
    v11 = Win32AllocPool(2LL * (a7 + 1), 1953657685LL);
    SourceString = (unsigned __int16 *)v11;
    if ( !v11 )
      return;
    PushW32ThreadLock(v11, v17, (__int64)Win32FreePool);
  }
  PrefixCount = GetPrefixCount((__int16 *)a6, a7, (__int64)SourceString, a7);
  if ( !(unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    GreExtTextOutWInternal(a3, a4, a5, 0, 0LL, SourceString, a7 - HIWORD(PrefixCount), 0LL, 0LL, 0);
    goto LABEL_10;
  }
  xxxClientExtTextOutW(a3, a4, a5, 0, 0LL, SourceString, a7 - HIWORD(PrefixCount));
  if ( (unsigned int)MNGetpItemIndex((__int64)a1, (__int64)a2) != -1 && v15 == *((_QWORD *)a2 + 7) )
  {
LABEL_10:
    if ( a8
      || (gdwPUDFlags & 0x20000) != 0
      || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) != 0x80000000
      || (GetAppCompatFlags2(0x400u) & 2) != 0 )
    {
      if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
        xxxPSMTextOut(a3, a4, a5, a6, a7, 0x200000);
      else
        xxxDrawItemUnderline(a1, a2, a3, a4, a5, SourceString, (unsigned __int16)PrefixCount);
    }
  }
  if ( SourceString != (unsigned __int16 *)v18 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v17);
}
