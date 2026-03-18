/*
 * XREFs of xxxDWP_DoNCActivate @ 0x1C003BC28
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C0201780 (xxxEndMenuLoop.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0061478 (IsToplevelWindowDesktopComposed.c)
 *     xxxDrawCaptionBar @ 0x1C00C22F8 (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C00C285C (GetWindowBorders.c)
 *     IsModelessMenuNotificationWindow @ 0x1C00C3138 (IsModelessMenuNotificationWindow.c)
 *     DwmAsyncActivationChange @ 0x1C0102EF0 (DwmAsyncActivationChange.c)
 *     xxxMenuBarDraw @ 0x1C021640C (xxxMenuBarDraw.c)
 */

__int64 __fastcall xxxDWP_DoNCActivate(__int64 a1, char a2, __int64 a3)
{
  int v5; // r15d
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11; // rax
  char v12; // dl
  unsigned __int16 v13; // di
  __int64 v14; // rbp
  __int64 DCEx; // rsi
  unsigned int WindowBorders; // eax

  v5 = 4108;
  if ( (a2 & 1) != 0 || (a2 & 2) == 0 && (unsigned int)IsModelessMenuNotificationWindow() )
  {
    SetOrClrWF(1, (_DWORD *)a1, 0x40u, 1);
    v5 = 4109;
  }
  else
  {
    SetOrClrWF(0, (_DWORD *)a1, 0x40u, 1);
  }
  if ( a3 != -1 )
  {
    v12 = *(_BYTE *)(a1 + 71);
    if ( (v12 & 0x10) != 0 && (*(_BYTE *)(a1 + 57) & 1) == 0 )
    {
      v13 = 0;
      if ( *(_DWORD *)(gpsi + 4968LL) != *(_DWORD *)(gpsi + 4972LL)
        || *(_DWORD *)(gpsi + 4996LL) != *(_DWORD *)(gpsi + 5036LL) )
      {
        v13 = 4108;
      }
      if ( (v12 & 0x20) == 0
        && (*(_BYTE *)(a1 + 70) & 4) != 0
        && *(_DWORD *)(gpsi + 5000LL) != *(_DWORD *)(gpsi + 5004LL) )
      {
        v13 |= 0x8000u;
      }
      if ( v13 )
      {
        v14 = UserValidateCopyRgn(a3);
        DCEx = _GetDCEx(a1, v14, 65537LL);
        if ( DCEx )
        {
          if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
          {
            WindowBorders = GetWindowBorders(*(unsigned int *)(a1 + 68), *(unsigned int *)(a1 + 64));
            xxxMenuBarDraw(a1, DCEx, WindowBorders, WindowBorders);
          }
          xxxDrawCaptionBar(a1, DCEx, v5 | (unsigned int)v13);
          _ReleaseDC(DCEx);
        }
        else
        {
          GreDeleteObject(v14);
        }
      }
    }
  }
  result = IsToplevelWindowDesktopComposed(a1);
  if ( (_DWORD)result )
  {
    if ( (*(_BYTE *)(a1 + 66) & 8) != 0 )
    {
      v11 = (void *)ReferenceDwmApiPort(v8, v7, v9, v10);
      return DwmAsyncActivationChange(v11);
    }
  }
  return result;
}
