/*
 * XREFs of ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0216248
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C0217880 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C001D2B0 (GreExtTextOutWInternal.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     GetAppCompatFlags2 @ 0x1C007C450 (GetAppCompatFlags2.c)
 *     MNGetpItemIndex @ 0x1C0097670 (MNGetpItemIndex.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxClientExtTextOutW @ 0x1C013BDEC (xxxClientExtTextOutW.c)
 *     CALL_LPK @ 0x1C013C798 (CALL_LPK.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C02160B4 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C021CF78 (xxxPSMTextOut.c)
 *     GetPrefixCount @ 0x1C023BD70 (GetPrefixCount.c)
 */

void __fastcall xxxDrawMenuItemText(
        struct tagMENU *a1,
        struct tagITEM *a2,
        HDC a3,
        __int64 a4,
        int a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int a8)
{
  unsigned int v8; // r14d
  __int64 v11; // rax
  __int64 v12; // r9
  unsigned __int16 *SourceString; // rbx
  int PrefixCount; // r12d
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // [rsp+58h] [rbp-270h]
  __int64 ThreadWin32Thread; // [rsp+60h] [rbp-268h]
  _QWORD v21[3]; // [rsp+68h] [rbp-260h] BYREF
  _BYTE v22[512]; // [rsp+80h] [rbp-248h] BYREF

  v8 = a4;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, (__int64)a3, a4);
  v19 = *((_QWORD *)a2 + 7);
  if ( (int)a7 < 255 )
  {
    SourceString = (unsigned __int16 *)v22;
  }
  else
  {
    v11 = Win32AllocPool(2LL * (int)(a7 + 1), 1953657685LL);
    SourceString = (unsigned __int16 *)v11;
    if ( !v11 )
      return;
    PushW32ThreadLock(v11, v21, (__int64)Win32FreePool, v12);
  }
  PrefixCount = GetPrefixCount(a6, a7, SourceString, a7);
  if ( !(unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    GreExtTextOutWInternal(a3, v8, a5, 0, 0LL, SourceString, a7 - HIWORD(PrefixCount), 0LL, 0LL, 0);
    goto LABEL_10;
  }
  xxxClientExtTextOutW(a3, v8, a5, 0, 0LL, SourceString, a7 - HIWORD(PrefixCount));
  if ( (unsigned int)MNGetpItemIndex((__int64)a1, (__int64)a2) != -1 && v19 == *((_QWORD *)a2 + 7) )
  {
LABEL_10:
    if ( a8
      || (gdwPUDFlags & 0x20000) != 0
      || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) != 0x80000000
      || (GetAppCompatFlags2(0x400u) & 2) != 0 )
    {
      if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
        xxxPSMTextOut(a3, a7, 0x200000);
      else
        xxxDrawItemUnderline(a1, a2, a3, v8, a5, SourceString, (unsigned __int16)PrefixCount);
    }
  }
  if ( SourceString != (unsigned __int16 *)v22 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v21, v15, v16, v17);
}
