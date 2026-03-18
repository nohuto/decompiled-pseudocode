/*
 * XREFs of CreateSpb @ 0x1C011C530
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C00B6C84 (zzzLockWindowUpdate2.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     _MonitorFromRect @ 0x1C00209D0 (_MonitorFromRect.c)
 *     IsDesktopWindow @ 0x1C002250C (IsDesktopWindow.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007DB44 (GreCreateCompatibleBitmapInternal.c)
 *     SubtractRect @ 0x1C00EE518 (SubtractRect.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C01E3A04 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     SpbCheck @ 0x1C01E3F34 (SpbCheck.c)
 *     GreSaveScreenBits @ 0x1C027D6D8 (GreSaveScreenBits.c)
 */

char __fastcall CreateSpb(struct tagWND *a1, int a2, HDC a3)
{
  struct tagWND *v4; // rsi
  __int64 DesktopWindow; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax
  int *v11; // r14
  __int64 *v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // ebx
  int v18; // r15d
  int v19; // r13d
  __int64 CompatibleBitmapInternal; // rax
  __int64 v21; // rbp
  int v22; // ebx
  __int64 v23; // r8
  __int64 v24; // rcx
  struct tagWND *v25; // rdx
  _QWORD v28[2]; // [rsp+70h] [rbp-68h] BYREF
  __int128 v29; // [rsp+80h] [rbp-58h] BYREF

  v4 = a1;
  LODWORD(DesktopWindow) = IsWindowDesktopComposed(a1);
  if ( !(_DWORD)DesktopWindow || a2 == 2 )
  {
    if ( (a2 & 2) != 0 || !*((_QWORD *)v4 + 13) || (DesktopWindow = GetDesktopWindow((__int64)v4), v6 == DesktopWindow) )
    {
      if ( *(_QWORD *)(gpDispInfo + 24LL) )
      {
        SpbCheck();
      }
      else
      {
        GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
        v7 = gpDispInfo;
        v8 = *(_QWORD **)(gpDispInfo + 16LL);
        if ( v8 )
        {
          do
          {
            GreGetBounds(v8[1], 0LL, 1LL);
            v8 = (_QWORD *)*v8;
          }
          while ( v8 );
          v7 = gpDispInfo;
        }
        GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)v7 + 32LL));
      }
      DesktopWindow = Win32AllocPoolWithQuota(72LL, 1651733333LL);
      v9 = DesktopWindow;
      if ( DesktopWindow )
      {
        v10 = Win32AllocPoolNonPaged(88LL, 1651733333LL);
        *(_QWORD *)(v9 + 64) = v10;
        if ( !v10 )
        {
LABEL_26:
          LOBYTE(DesktopWindow) = Win32FreePool(v9);
          return DesktopWindow;
        }
        v11 = (int *)(v9 + 24);
        v12 = (__int64 *)(v9 + 8);
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_OWORD *)(v9 + 24) = *((_OWORD *)v4 + 8);
        if ( !(unsigned int)IntersectRect((int *)(v9 + 24), (int *)(v9 + 24), (int *)(*gpDispInfo + 24LL)) )
        {
LABEL_25:
          Win32FreePool(*(_QWORD *)(v9 + 64));
          goto LABEL_26;
        }
        *(_QWORD *)(v9 + 40) = 0LL;
        *(_QWORD *)(v9 + 16) = 0LL;
        v28[0] = v9 + 8;
        v28[1] = v4;
        *(_DWORD *)(v9 + 48) = a2;
        HMAssignmentLock(v28);
        if ( (a2 & 2) == 0 )
        {
          v29 = *(_OWORD *)v11;
          if ( *(_DWORD *)(gpsi + 2204LL) )
          {
            v14 = gpDispInfo;
          }
          else
          {
            v13 = MonitorFromRect((int *)(v9 + 24), 1u);
            if ( SubtractRect((__int64)v28, (int *)(v9 + 24), (int *)(*(_QWORD *)(v13 + 40) + 28LL))
              && (unsigned int)GreRectInRegion(*(_QWORD *)(gpDispInfo + 120LL), v28)
              || !(unsigned int)IntersectRect((int *)(v9 + 24), (int *)(v9 + 24), (int *)(*(_QWORD *)(v13 + 40) + 28LL))
              || (v14 = gpDispInfo, v13 != *(_QWORD *)(gpDispInfo + 88LL)) )
            {
LABEL_22:
              v15 = *(_QWORD *)(v9 + 16);
              if ( v15 )
                GreDeleteObject(v15);
              HMAssignmentUnlock(v9 + 8);
              goto LABEL_25;
            }
          }
          if ( *((_QWORD *)v4 + 27)
            || (v16 = GreSaveScreenBits(*(_QWORD *)(*(_QWORD *)v14 + 32LL), 0LL, 0LL, &v29),
                (*(_QWORD *)(v9 + 56) = v16) == 0LL) )
          {
            v17 = *v11 & 7;
            v18 = *(_DWORD *)(v9 + 32) - *v11;
            v19 = *(_DWORD *)(v9 + 36) - *(_DWORD *)(v9 + 28);
            CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a3, v18 + v17, v19, 0, 0LL, 0LL);
            *(_QWORD *)(v9 + 16) = CompatibleBitmapInternal;
            if ( !CompatibleBitmapInternal )
              goto LABEL_22;
            v21 = GreSelectBitmap(*(_QWORD *)ghdcMem, CompatibleBitmapInternal);
            if ( !v21 )
              goto LABEL_22;
            v22 = NtGdiBitBltInternal(*(HDC *)ghdcMem, v17, 0, v18, v19, a3, *v11, *(_DWORD *)(v9 + 28), 13369344, 0, 0);
            GreSelectBitmap(*(_QWORD *)ghdcMem, v21);
            if ( !v22 )
              goto LABEL_22;
            GreSetBitmapOwner(*(_QWORD *)(v9 + 16), 0LL);
          }
          else
          {
            *(_DWORD *)(v9 + 48) |= 1u;
          }
          SetOrClrWF(1, v4, 0x80u, 1);
          v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
        }
        *(_QWORD *)v9 = *(_QWORD *)(gpDispInfo + 24LL);
        *(_QWORD *)(gpDispInfo + 24LL) = v9;
        SetRectRgnIndirect(ghrgnSPB2, v9 + 24);
        v23 = *(_QWORD *)(*v12 + 216);
        if ( !v23 || (LODWORD(DesktopWindow) = GreCombineRgn(ghrgnSPB2, ghrgnSPB2, v23, 1LL), (_DWORD)DesktopWindow) )
        {
          LOBYTE(DesktopWindow) = IsDesktopWindow(*v12);
          if ( (_DWORD)DesktopWindow || (*(_BYTE *)(v24 + 66) & 8) == 0 )
          {
            v25 = *(struct tagWND **)(v24 + 104);
            if ( !v25 || (LODWORD(DesktopWindow) = SpbTransfer((struct tagSPB *)v9, v25, 0), (_DWORD)DesktopWindow) )
            {
              while ( v4 )
              {
                LODWORD(DesktopWindow) = SpbTransfer((struct tagSPB *)v9, v4, 1);
                if ( !(_DWORD)DesktopWindow )
                  break;
                v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
              }
            }
          }
          else
          {
            LOBYTE(DesktopWindow) = SpbTransfer((struct tagSPB *)v9, (struct tagWND *)v24, 1);
          }
        }
      }
    }
  }
  return DesktopWindow;
}
