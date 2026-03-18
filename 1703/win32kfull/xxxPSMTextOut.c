/*
 * XREFs of xxxPSMTextOut @ 0x1C021BCC8
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C0118F78 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0215328 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C02166C4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreGetTextExtentW @ 0x1C000C2DC (GreGetTextExtentW.c)
 *     GreGetTextMetricsW @ 0x1C000C4B4 (GreGetTextMetricsW.c)
 *     CALL_LPK @ 0x1C000EAB4 (CALL_LPK.c)
 *     GetPrefixCount @ 0x1C000EAF0 (GetPrefixCount.c)
 *     GreSetBkColor @ 0x1C0044AD0 (GreSetBkColor.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     GreExtTextOutWInternal @ 0x1C0090298 (GreExtTextOutWInternal.c)
 *     GreGetTextColor @ 0x1C00D6898 (GreGetTextColor.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     xxxClientPSMTextOut @ 0x1C020103C (xxxClientPSMTextOut.c)
 */

unsigned __int8 *__fastcall xxxPSMTextOut(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        WCHAR *SourceString,
        unsigned int a5,
        unsigned int a6)
{
  unsigned __int16 *v6; // rsi
  __int64 ThreadWin32Thread; // rax
  int v12; // r12d
  unsigned __int8 *result; // rax
  int PrefixCount; // edi
  int TextMetricsW; // eax
  int v16; // ebx
  LONG v17; // edi
  int TextColor; // eax
  int v19; // ebx
  struct tagSIZE v20; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+68h] [rbp-98h]
  __int128 v23; // [rsp+88h] [rbp-78h]
  _OWORD v24[5]; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v25; // [rsp+100h] [rbp+0h] BYREF

  v6 = &word_1C0338C60;
  v20 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = 0;
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    return xxxClientPSMTextOut(a1, a2, a3, (char **)&DestinationString, a5, a6);
  }
  else if ( a5 < 0xFF
         || (result = (unsigned __int8 *)Win32AllocPool(2LL * (int)(a5 + 1), 1953657685LL),
             (v6 = (unsigned __int16 *)result) != 0LL) )
  {
    PrefixCount = GetPrefixCount((__int16 *)SourceString, a5, (__int64)v6, a5);
    if ( (a6 & 0x200000) == 0 )
      GreExtTextOutWInternal(a1, a2, a3, 0, 0LL, v6, a5 - HIWORD(PrefixCount), 0LL, 0LL, 0);
    if ( (_WORD)PrefixCount != 0xFFFF && (a6 & 0x100000) == 0 )
    {
      memset(v24, 0, 0x44uLL);
      TextMetricsW = GreGetTextMetricsW(a1, (struct _TMW_INTERNAL *)v24);
      v22 = v24[0];
      v23 = v24[2];
      if ( TextMetricsW )
      {
        v16 = v23;
        v12 = DWORD1(v22);
      }
      else
      {
        v16 = 0;
      }
      if ( (_WORD)PrefixCount )
      {
        GreGetTextExtentW(a1, v6, (unsigned __int16)PrefixCount, &v20, 1);
        a2 += v20.cx - v16;
      }
      GreGetTextExtentW(a1, &v6[(unsigned __int16)PrefixCount], 1u, &v20, 1);
      v17 = v12 + a3 + 1;
      v25.left = a2;
      v25.top = v17;
      v25.bottom = v17 + 1;
      v25.right = a2 + LOWORD(v20.cx) - v16 / 2;
      TextColor = GreGetTextColor(a1);
      v19 = GreSetBkColor(a1, TextColor);
      GreExtTextOutWInternal(a1, a2, v17, 2, &v25, (unsigned __int16 *)&word_1C02E2588, 0, 0LL, 0LL, 0);
      GreSetBkColor(a1, v19);
    }
    result = (unsigned __int8 *)&word_1C0338C60;
    if ( v6 != &word_1C0338C60 )
      return (unsigned __int8 *)Win32FreePool(v6);
  }
  return result;
}
