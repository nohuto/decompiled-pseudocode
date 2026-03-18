/*
 * XREFs of zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0071F0C
 * Callers:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C006C6B0 (xxxScrollWindowEx.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     UnsetLayeredWindow @ 0x1C008B638 (UnsetLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C008BC2C (xxxSetLayeredWindow.c)
 *     xxxSetWindowStyle @ 0x1C00A55A0 (xxxSetWindowStyle.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 *     zzzLockWindowUpdate2 @ 0x1C00CB554 (zzzLockWindowUpdate2.c)
 *     zzzResetSharedDesktops @ 0x1C00E3D10 (zzzResetSharedDesktops.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00E662C (zzzUpdateWindowsAfterModeChange.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0111C44 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C020EA88 (xxxMinimizeHungWindow.c)
 * Callees:
 *     GreLockDisplayArea @ 0x1C000CF60 (GreLockDisplayArea.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     GreUpdateSpriteVisRgn @ 0x1C00721C0 (GreUpdateSpriteVisRgn.c)
 *     GreClientRgnUpdated @ 0x1C0072A88 (GreClientRgnUpdated.c)
 *     InvalidateDCE @ 0x1C0072E04 (InvalidateDCE.c)
 *     SpbCheckDce @ 0x1C0072E70 (SpbCheckDce.c)
 *     InvalidateGDIWindows @ 0x1C01C5894 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzLockDisplayAreaAndInvalidateDCCache(__int64 a1, char a2, struct tagRECT *a3)
{
  char v4; // si
  __int64 v5; // rdi
  __int64 *i; // rbx
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // r8
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // esi
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // rdx
  _QWORD v22[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  v5 = a1;
  v22[0] = *(_QWORD *)(gptiCurrent + 392LL);
  *(_QWORD *)(gptiCurrent + 392LL) = v22;
  v22[1] = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  if ( (*(_DWORD *)(gptiCurrent + 464LL) & 0x8000) == 0 && (a2 & 0x10) == 0 )
    GenerateMouseMove(0LL);
  if ( (v4 & 1) == 0 )
    goto LABEL_4;
  v4 = 0;
  if ( !*(_QWORD *)(v5 + 104) || v5 == GetDesktopWindow(v5) )
    goto LABEL_4;
  if ( (*(_BYTE *)(v21 + 71) & 2) != 0 )
  {
    v4 = 4;
  }
  else
  {
    if ( (*(_BYTE *)(v5 + 71) & 4) == 0 )
      goto LABEL_4;
    v4 = 2;
  }
  v5 = v21;
LABEL_4:
  if ( a3 )
    GreLockDisplayArea(*(_QWORD *)(gpDispInfo + 32LL), a3);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  GreLockVisRgnPublish(*(_QWORD *)(gpDispInfo + 32LL));
  for ( i = *(__int64 **)(gpDispInfo + 16LL); i; i = (__int64 *)*i )
  {
    v8 = *((_DWORD *)i + 16);
    if ( (v8 & 0x400800) == 0 )
    {
      if ( (v8 & 3) == 0 )
      {
        v10 = i[2];
        if ( (*(_BYTE *)(v10 + 71) & 2) != 0 )
          *((_DWORD *)i + 16) = v8 | 8;
        if ( (*(_BYTE *)(v10 + 71) & 0x20) != 0 )
          *((_DWORD *)i + 16) &= ~8u;
      }
      v9 = i[2];
      v7 = v9;
      if ( v9 )
      {
        while ( v7 != v5 )
        {
          v7 = *(_QWORD *)(v7 + 104);
          if ( !v7 )
            goto LABEL_9;
        }
        if ( v5 != v9 || (v4 & 2) == 0 && ((i[8] & 1) == 0 || (v4 & 4) == 0) )
        {
          v11 = *((_DWORD *)i + 16);
          if ( (v11 & 0x1000) != 0 )
          {
            v12 = i[3];
            if ( v11 >= 0 )
            {
              v13 = v11 & 0x7FFFFFE7;
              *((_DWORD *)i + 16) = v13;
              if ( *(char *)(*(_QWORD *)(v9 + 168) + 100LL) >= 0
                || (*(_BYTE *)(v9 + 61) & 1) == 0 && (*(_BYTE *)(v12 + 71) & 2) != 0
                || (LOBYTE(v12) = *(_BYTE *)(v12 + 71), (((unsigned __int8)v12 ^ *(_BYTE *)(v9 + 71)) & 0x10) != 0) )
              {
                if ( (*(_BYTE *)(v9 + 71) & 0x22) == 2 )
                  *((_DWORD *)i + 16) = v13 | 8;
                if ( (*(_BYTE *)(v9 + 71) & 4) != 0 )
                  *((_DWORD *)i + 16) |= 0x10u;
              }
              else if ( (v12 & 4) != 0 )
              {
                *((_DWORD *)i + 16) = v13 | 0x10;
              }
            }
            *((_DWORD *)i + 16) |= 0x2000u;
            UserSetDCVisRgn(i, v9, v12);
          }
          else
          {
            SpbCheckDce(i);
            InvalidateDCE(i);
          }
        }
      }
    }
LABEL_9:
    ;
  }
  GreUnlockVisRgnPublish(*(_QWORD *)(gpDispInfo + 32LL));
  v16 = v4 & 8;
  v17 = v16 != 0 ? 2 : 0;
  if ( gcountPWO )
  {
    InvalidateGDIWindows(v5, v14, v15);
    v17 |= 1u;
  }
  GreClientRgnUpdated(v17);
  GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 32LL), v16 != 0 ? 4 : 0);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  ThreadUnlock1(v19, v18);
  return 1LL;
}
