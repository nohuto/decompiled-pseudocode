/*
 * XREFs of CalcVisRgn @ 0x1C0066160
 * Callers:
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0025E60 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     NtUserGetWindowRgnEx @ 0x1C0062B60 (NtUserGetWindowRgnEx.c)
 *     zzzResetSharedDesktops @ 0x1C00A1180 (zzzResetSharedDesktops.c)
 *     _VisrgnFromWindow @ 0x1C01C23C8 (_VisrgnFromWindow.c)
 *     InvalidateGDIWindows @ 0x1C01C2B80 (InvalidateGDIWindows.c)
 *     UserGetClientRgn @ 0x1C01C2CA0 (UserGetClientRgn.c)
 * Callees:
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0066340 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     GetStyleWindow @ 0x1C0067050 (GetStyleWindow.c)
 *     _IsDescendant @ 0x1C0134A10 (_IsDescendant.c)
 */

__int64 __fastcall CalcVisRgn(HRGN *a1, __int64 a2, struct tagWND *a3, unsigned int a4)
{
  __int64 v6; // rdx
  __int64 v7; // r10
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rcx

  v6 = *(_QWORD *)(a2 + 24);
  v7 = a2;
  while ( 1 )
  {
    v10 = *(_BYTE *)(v7 + 71);
    if ( (v10 & 0x10) == 0 || (v10 & 0x20) != 0 && v7 != a2 )
      break;
    if ( (*(_WORD *)(v7 + 82) & 0x3FFF) != 0x29D )
    {
      v7 = *(_QWORD *)(v7 + 104);
      if ( v7 )
        continue;
    }
    if ( v6 == grpdeskRitInput
      || (a4 & 0x4000) != 0
      || GetStyleWindow(a2, 2568LL) && ((a4 & 0x8000000) == 0 || (unsigned int)IsWindowDesktopComposed(a2)) )
    {
      if ( (a4 & 0x4000) == 0 )
        goto LABEL_34;
      v11 = a2;
      do
      {
        if ( (*(_BYTE *)(v11 + 67) & 0x20) != 0 )
          break;
        v11 = *(_QWORD *)(v11 + 104);
      }
      while ( v11 );
      if ( !v11 || (*(_WORD *)(v11 + 82) & 0x3FFF) == 0x29D && v11 != a2 )
        goto LABEL_34;
      v12 = *(_QWORD *)(v11 + 184);
      if ( v12 && atomLayer )
      {
        v13 = *(_DWORD *)(v12 + 4);
        v14 = v12 + 8;
        if ( v13 )
        {
          while ( *(_WORD *)(v14 + 8) != atomLayer || (*(_BYTE *)(v14 + 10) & 1) == 0 )
          {
            v14 += 16LL;
            if ( !--v13 )
              goto LABEL_39;
          }
        }
        else
        {
LABEL_39:
          v14 = 0LL;
        }
        if ( v14 && *(_QWORD *)v14 && **(_QWORD **)v14 )
        {
LABEL_34:
          if ( (!gspwndLockUpdate || (a4 & 0x400) != 0 || !(unsigned int)IsDescendant(gspwndLockUpdate, a2))
            && (!(unsigned int)UpdatesLockedForDwm() || (a4 & 0x4000) != 0) )
          {
            return CalcVisRgnWorker(a3, a1, a4);
          }
        }
      }
    }
    break;
  }
  SetOrCreateRectRgnIndirectPublic(a1, gZero);
  return 0LL;
}
