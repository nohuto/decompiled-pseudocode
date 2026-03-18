/*
 * XREFs of xxxPSMTextOut @ 0x1C021CF78
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C0122820 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0216248 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0217880 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C001D2B0 (GreExtTextOutWInternal.c)
 *     GreGetTextColor @ 0x1C0082D98 (GreGetTextColor.c)
 *     GreSetBkColor @ 0x1C009B688 (GreSetBkColor.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     GreGetTextMetricsW @ 0x1C0108CF4 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C0108E28 (GreGetTextExtentW.c)
 *     CALL_LPK @ 0x1C013C798 (CALL_LPK.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     xxxClientPSMTextOut @ 0x1C02028F0 (xxxClientPSMTextOut.c)
 *     GetPrefixCount @ 0x1C023BD70 (GetPrefixCount.c)
 */

HDC __fastcall xxxPSMTextOut(HDC a1, __int64 a2, __int64 a3, const WCHAR *a4, unsigned int a5, unsigned int a6)
{
  unsigned __int16 *v6; // rsi
  unsigned int v9; // r13d
  unsigned int v10; // r15d
  __int64 ThreadWin32Thread; // rax
  int v12; // r12d
  HDC result; // rax
  __int64 v14; // rdx
  int PrefixCount; // edi
  __int64 v16; // r8
  int TextMetricsW; // eax
  int v18; // ebx
  LONG v19; // edi
  int TextColor; // eax
  int v21; // ebx
  struct tagSIZE v22; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v24; // [rsp+68h] [rbp-98h]
  __int128 v25; // [rsp+88h] [rbp-78h]
  _OWORD v26[5]; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v27; // [rsp+100h] [rbp+0h] BYREF

  v6 = &qword_1C0334380;
  v22 = 0LL;
  v9 = a3;
  v10 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
  v12 = 0;
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    RtlInitUnicodeString(&DestinationString, a4);
    return xxxClientPSMTextOut(a1, v10, v9, (char **)&DestinationString, a5, a6);
  }
  else if ( a5 < 0xFF
         || (result = (HDC)Win32AllocPool(2LL * (int)(a5 + 1), 1953657685LL), (v6 = (unsigned __int16 *)result) != 0LL) )
  {
    PrefixCount = GetPrefixCount(a4, a5, v6, a5);
    if ( (a6 & 0x200000) == 0 )
      GreExtTextOutWInternal(a1, v10, v9, 0, 0LL, v6, a5 - HIWORD(PrefixCount), 0LL, 0LL, 0);
    if ( (_WORD)PrefixCount != 0xFFFF && (a6 & 0x100000) == 0 )
    {
      memset(v26, 0, 0x44uLL);
      TextMetricsW = GreGetTextMetricsW(a1, (struct _TMW_INTERNAL *)v26);
      v24 = v26[0];
      v25 = v26[2];
      if ( TextMetricsW )
      {
        v18 = v25;
        v12 = DWORD1(v24);
      }
      else
      {
        v18 = 0;
      }
      if ( (_WORD)PrefixCount )
      {
        GreGetTextExtentW(a1, v6, (unsigned __int16)PrefixCount, &v22, 1);
        v10 += v22.cx - v18;
      }
      GreGetTextExtentW(a1, &v6[(unsigned __int16)PrefixCount], 1u, &v22, 1);
      v19 = v12 + v9 + 1;
      v27.left = v10;
      v27.top = v19;
      v27.bottom = v19 + 1;
      v27.right = v10 + LOWORD(v22.cx) - v18 / 2;
      TextColor = GreGetTextColor(a1);
      v21 = GreSetBkColor(a1, TextColor);
      GreExtTextOutWInternal(a1, v10, v19, 2u, &v27, (unsigned __int16 *)&word_1C02D9FB8, 0, 0LL, 0LL, 0);
      GreSetBkColor(a1, v21);
    }
    result = (HDC)&qword_1C0334380;
    if ( v6 != &qword_1C0334380 )
      return (HDC)Win32FreePool(v6, v14, v16);
  }
  return result;
}
