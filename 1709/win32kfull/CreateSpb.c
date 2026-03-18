/*
 * XREFs of CreateSpb @ 0x1C0125804
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C00CB554 (zzzLockWindowUpdate2.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0023138 (GreCreateCompatibleBitmapInternal.c)
 *     _MonitorFromRect @ 0x1C005D960 (_MonitorFromRect.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     IsDesktopWindow @ 0x1C0092C4C (IsDesktopWindow.c)
 *     SubtractRect @ 0x1C00FB1A0 (SubtractRect.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C01EFA30 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     SpbCheck @ 0x1C01EFF50 (SpbCheck.c)
 *     GreSaveScreenBits @ 0x1C027A0D8 (GreSaveScreenBits.c)
 */

char __fastcall CreateSpb(struct tagWND *a1, int a2, HDC a3)
{
  struct tagWND *v4; // rsi
  __int64 DesktopWindow; // rax
  __int64 v6; // rdx
  _QWORD *i; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int *v12; // r14
  __int64 *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // r12d
  int v19; // r13d
  LONG v20; // ebx
  __int64 CompatibleBitmapInternal; // rax
  __int64 v22; // rbp
  int v23; // ebx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rcx
  struct tagWND *v27; // rdx
  __int128 v30; // [rsp+70h] [rbp-68h] BYREF
  __int128 v31; // [rsp+80h] [rbp-58h] BYREF

  v4 = a1;
  LODWORD(DesktopWindow) = IsWindowDesktopComposed(a1);
  if ( (_DWORD)DesktopWindow && a2 != 2 )
    return DesktopWindow;
  if ( (a2 & 2) == 0 )
  {
    if ( *((_QWORD *)v4 + 13) )
    {
      DesktopWindow = GetDesktopWindow((__int64)v4);
      if ( v6 != DesktopWindow )
        return DesktopWindow;
    }
  }
  if ( *(_QWORD *)(gpDispInfo + 24LL) )
  {
    SpbCheck();
  }
  else
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    for ( i = *(_QWORD **)(gpDispInfo + 16LL); i; i = (_QWORD *)*i )
      GreGetBounds(i[1], 0LL, 1LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  }
  DesktopWindow = Win32AllocPoolWithQuota(72LL, 1651733333LL);
  v8 = DesktopWindow;
  if ( !DesktopWindow )
    return DesktopWindow;
  v9 = Win32AllocPoolNonPaged(88LL, 1651733333LL);
  *(_QWORD *)(v8 + 64) = v9;
  if ( !v9 )
  {
LABEL_39:
    LOBYTE(DesktopWindow) = Win32FreePool(v8, v10, v11);
    return DesktopWindow;
  }
  v12 = (int *)(v8 + 24);
  v13 = (__int64 *)(v8 + 8);
  *(_QWORD *)(v8 + 8) = 0LL;
  *(_OWORD *)(v8 + 24) = *((_OWORD *)v4 + 8);
  v30 = *(_OWORD *)(*gpDispInfo + 24LL);
  if ( !(unsigned int)IntersectRect((_DWORD *)(v8 + 24), (int *)(v8 + 24), (int *)&v30) )
  {
LABEL_38:
    Win32FreePool(*(_QWORD *)(v8 + 64), v14, v15);
    goto LABEL_39;
  }
  *(_QWORD *)(v8 + 40) = 0LL;
  *(_QWORD *)(v8 + 16) = 0LL;
  *(_QWORD *)&v30 = v8 + 8;
  *((_QWORD *)&v30 + 1) = v4;
  *(_DWORD *)(v8 + 48) = a2;
  HMAssignmentLock(&v30);
  if ( (a2 & 2) == 0 )
  {
    v31 = *(_OWORD *)v12;
    if ( *(_DWORD *)(gpsi + 2204LL)
      || ((v16 = MonitorFromRect((struct tagRECT *)(v8 + 24), 1u, 0),
           !SubtractRect((__int64)&v30, (int *)(v8 + 24), (int *)(*(_QWORD *)(v16 + 40) + 28LL)))
       || !(unsigned int)GreRectInRegion(*(_QWORD *)(gpDispInfo + 112LL), &v30))
      && (unsigned int)IntersectRect((_DWORD *)(v8 + 24), (int *)(v8 + 24), (int *)(*(_QWORD *)(v16 + 40) + 28LL))
      && v16 == *(_QWORD *)(gpDispInfo + 88LL) )
    {
      if ( !*((_QWORD *)v4 + 27) )
      {
        v17 = GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 32LL), 0LL, 0LL, &v31);
        *(_QWORD *)(v8 + 56) = v17;
        if ( v17 )
        {
          *(_DWORD *)(v8 + 48) |= 1u;
LABEL_29:
          SetOrClrWF(1, v4, 0x80u, 1);
          v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
          goto LABEL_30;
        }
      }
      v18 = *(_DWORD *)(v8 + 32) - *v12;
      v19 = *(_DWORD *)(v8 + 36) - *(_DWORD *)(v8 + 28);
      v20 = *v12 & 7;
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a3, v18 + v20, v19, 0, 0LL, 0LL);
      *(_QWORD *)(v8 + 16) = CompatibleBitmapInternal;
      if ( CompatibleBitmapInternal )
      {
        v22 = GreSelectBitmap(*(_QWORD *)ghdcMem, CompatibleBitmapInternal);
        if ( v22 )
        {
          v23 = NtGdiBitBltInternal(*(HDC *)ghdcMem, v20, 0, v18, v19, a3, *v12, *(_DWORD *)(v8 + 28), 13369344, 0, 0);
          GreSelectBitmap(*(_QWORD *)ghdcMem, v22);
          if ( v23 )
          {
            GreSetBitmapOwner(*(_QWORD *)(v8 + 16), 0LL);
            goto LABEL_29;
          }
        }
      }
    }
    v26 = *(_QWORD *)(v8 + 16);
    if ( v26 )
      GreDeleteObject(v26);
    HMAssignmentUnlock(v8 + 8);
    goto LABEL_38;
  }
LABEL_30:
  *(_QWORD *)v8 = *(_QWORD *)(gpDispInfo + 24LL);
  *(_QWORD *)(gpDispInfo + 24LL) = v8;
  SetRectRgnIndirect(ghrgnSPB2, v8 + 24);
  v24 = *(_QWORD *)(*v13 + 216);
  if ( !v24 || (LODWORD(DesktopWindow) = GreCombineRgn(ghrgnSPB2, ghrgnSPB2, v24, 1LL), (_DWORD)DesktopWindow) )
  {
    LOBYTE(DesktopWindow) = IsDesktopWindow(*v13);
    if ( (_DWORD)DesktopWindow || (*(_BYTE *)(v25 + 66) & 8) == 0 )
    {
      v27 = *(struct tagWND **)(v25 + 104);
      if ( !v27 || (LODWORD(DesktopWindow) = SpbTransfer((struct tagSPB *)v8, v27, 0), (_DWORD)DesktopWindow) )
      {
        while ( v4 )
        {
          LODWORD(DesktopWindow) = SpbTransfer((struct tagSPB *)v8, v4, 1);
          if ( !(_DWORD)DesktopWindow )
            break;
          v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
        }
      }
    }
    else
    {
      LOBYTE(DesktopWindow) = SpbTransfer((struct tagSPB *)v8, (struct tagWND *)v25, 1);
    }
  }
  return DesktopWindow;
}
