/*
 * XREFs of xxxDWP_DoNCActivate @ 0x1C007B494
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C0203090 (xxxEndMenuLoop.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C0064AC8 (IsToplevelWindowDesktopComposed.c)
 *     IsModelessMenuNotificationWindow @ 0x1C007B608 (IsModelessMenuNotificationWindow.c)
 *     DwmAsyncActivationChange @ 0x1C007B62C (DwmAsyncActivationChange.c)
 *     xxxDrawCaptionBar @ 0x1C007B6D0 (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C007BB30 (GetWindowBorders.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     xxxMenuBarDraw @ 0x1C02175E0 (xxxMenuBarDraw.c)
 */

__int64 __fastcall xxxDWP_DoNCActivate(__int64 a1, char a2, __int64 a3)
{
  int v5; // r15d
  char v6; // dl
  unsigned __int16 v7; // di
  __int64 v8; // rbp
  __int64 DCEx; // rsi
  __int64 result; // rax
  __int64 v11; // rcx
  void *v12; // rax
  unsigned int WindowBorders; // eax

  v5 = 4108;
  if ( (a2 & 1) != 0 || (a2 & 2) == 0 && (unsigned int)IsModelessMenuNotificationWindow() )
  {
    SetOrClrWF(1LL, a1, 64LL, 1LL);
    v5 = 4109;
  }
  else
  {
    SetOrClrWF(0LL, a1, 64LL, 1LL);
  }
  if ( a3 != -1 )
  {
    v6 = *(_BYTE *)(a1 + 71);
    if ( (v6 & 0x10) != 0 && (*(_BYTE *)(a1 + 57) & 1) == 0 )
    {
      v7 = 0;
      if ( *(_DWORD *)(gpsi + 4560LL) != *(_DWORD *)(gpsi + 4564LL)
        || *(_DWORD *)(gpsi + 4588LL) != *(_DWORD *)(gpsi + 4628LL) )
      {
        v7 = 4108;
      }
      if ( (v6 & 0x20) == 0
        && (*(_BYTE *)(a1 + 70) & 4) != 0
        && *(_DWORD *)(gpsi + 4592LL) != *(_DWORD *)(gpsi + 4596LL) )
      {
        v7 |= 0x8000u;
      }
      if ( v7 )
      {
        v8 = UserValidateCopyRgn(a3);
        DCEx = _GetDCEx(a1, v8, 65537LL);
        if ( DCEx )
        {
          if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
          {
            WindowBorders = GetWindowBorders(*(unsigned int *)(a1 + 68), *(unsigned int *)(a1 + 64));
            xxxMenuBarDraw(a1, DCEx, WindowBorders, WindowBorders);
          }
          xxxDrawCaptionBar(a1, DCEx, v5 | (unsigned int)v7);
          _ReleaseDC(DCEx);
        }
        else
        {
          GreDeleteObject(v8);
        }
      }
    }
  }
  result = IsToplevelWindowDesktopComposed(a1);
  if ( (_DWORD)result )
  {
    if ( (*(_BYTE *)(a1 + 66) & 8) != 0 )
    {
      v12 = (void *)ReferenceDwmApiPort(v11);
      return DwmAsyncActivationChange(v12);
    }
  }
  return result;
}
