/*
 * XREFs of zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C006CCF4
 * Callers:
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     UnsetLayeredWindow @ 0x1C001D9B4 (UnsetLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C001DD44 (xxxSetLayeredWindow.c)
 *     xxxSetWindowStyle @ 0x1C0050000 (xxxSetWindowStyle.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00636D0 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C006985C (xxxScrollWindowEx.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C009DAEC (zzzUpdateWindowsAfterModeChange.c)
 *     zzzResetSharedDesktops @ 0x1C00A1180 (zzzResetSharedDesktops.c)
 *     zzzLockWindowUpdate2 @ 0x1C00B6C84 (zzzLockWindowUpdate2.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0107FCC (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C020CBF8 (xxxMinimizeHungWindow.c)
 * Callees:
 *     GreLockDisplayArea @ 0x1C0007E18 (GreLockDisplayArea.c)
 *     zzzSetFMouseMoved @ 0x1C003C3C0 (zzzSetFMouseMoved.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     GreClientRgnUpdated @ 0x1C006CC5C (GreClientRgnUpdated.c)
 *     GreUpdateSpriteVisRgn @ 0x1C006D400 (GreUpdateSpriteVisRgn.c)
 *     InvalidateDCE @ 0x1C00E34E4 (InvalidateDCE.c)
 *     SpbCheckDce @ 0x1C00E3550 (SpbCheckDce.c)
 *     InvalidateGDIWindows @ 0x1C01C2B80 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzLockDisplayAreaAndInvalidateDCCache(__int64 a1, char a2, struct tagRECT *a3)
{
  char v3; // si
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 *v7; // rbx
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // esi
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // r8
  int v19; // ecx
  __int64 v20; // rdx
  _QWORD v21[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  v5 = a1;
  v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v21;
  ++*(_DWORD *)(a1 + 8);
  v21[1] = a1;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x8000) == 0 && (a2 & 0x10) == 0 )
    zzzSetFMouseMoved();
  if ( (v3 & 1) != 0 )
  {
    v3 = 0;
    if ( *(_QWORD *)(v5 + 104) )
    {
      if ( v5 != GetDesktopWindow(v5) )
      {
        if ( (*(_BYTE *)(v20 + 71) & 2) != 0 )
        {
          v3 = 4;
LABEL_41:
          v5 = v20;
          goto LABEL_4;
        }
        if ( (*(_BYTE *)(v5 + 71) & 4) != 0 )
        {
          v3 = 2;
          goto LABEL_41;
        }
      }
    }
  }
LABEL_4:
  if ( a3 )
    GreLockDisplayArea(*(_QWORD *)(gpDispInfo + 32LL), a3);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  GreLockVisRgnPublish(*(_QWORD *)(gpDispInfo + 32LL));
  v6 = gpDispInfo;
  v7 = *(__int64 **)(gpDispInfo + 16LL);
  if ( v7 )
  {
    do
    {
      v8 = *((_DWORD *)v7 + 16);
      if ( (v8 & 0x400800) == 0 )
      {
        if ( (v8 & 3) == 0 )
        {
          v16 = v7[2];
          if ( (*(_BYTE *)(v16 + 71) & 2) != 0 )
            *((_DWORD *)v7 + 16) = v8 | 8;
          if ( (*(_BYTE *)(v16 + 71) & 0x20) != 0 )
            *((_DWORD *)v7 + 16) &= ~8u;
        }
        v9 = v7[2];
        v10 = v9;
        if ( v9 )
        {
          while ( v10 != v5 )
          {
            v10 = *(_QWORD *)(v10 + 104);
            if ( !v10 )
              goto LABEL_12;
          }
          if ( v5 != v9 || (v3 & 2) == 0 && ((v3 & 4) == 0 || (v7[8] & 1) == 0) )
          {
            v17 = *((_DWORD *)v7 + 16);
            if ( (v17 & 0x1000) != 0 )
            {
              v18 = v7[3];
              if ( v17 >= 0 )
              {
                v19 = v17 & 0x7FFFFFE7;
                *((_DWORD *)v7 + 16) = v19;
                if ( *(char *)(*(_QWORD *)(v9 + 168) + 92LL) >= 0
                  || (*(_BYTE *)(v9 + 61) & 1) == 0 && (*(_BYTE *)(v18 + 71) & 2) != 0
                  || (LOBYTE(v18) = *(_BYTE *)(v18 + 71), (((unsigned __int8)v18 ^ *(_BYTE *)(v9 + 71)) & 0x10) != 0) )
                {
                  if ( (*(_BYTE *)(v9 + 71) & 0x22) == 2 )
                    *((_DWORD *)v7 + 16) = v19 | 8;
                  if ( (*(_BYTE *)(v9 + 71) & 4) != 0 )
                    *((_DWORD *)v7 + 16) |= 0x10u;
                }
                else if ( (v18 & 4) != 0 )
                {
                  *((_DWORD *)v7 + 16) = v19 | 0x10;
                }
              }
              *((_DWORD *)v7 + 16) |= 0x2000u;
              UserSetDCVisRgn(v7, v9, v18);
            }
            else
            {
              SpbCheckDce(v7);
              InvalidateDCE(v7);
            }
          }
        }
      }
LABEL_12:
      v7 = (__int64 *)*v7;
    }
    while ( v7 );
    v6 = gpDispInfo;
  }
  GreUnlockVisRgnPublish(*(_QWORD *)(*(_QWORD *)v6 + 32LL));
  v11 = v3 & 8;
  v12 = v11 != 0 ? 2 : 0;
  if ( gcountPWO )
  {
    InvalidateGDIWindows(v5);
    LOBYTE(v12) = v12 | 1;
  }
  GreClientRgnUpdated(v12);
  GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 32LL), v11 != 0 ? 4 : 0);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  ThreadUnlock1(v14, v13);
  return 1LL;
}
