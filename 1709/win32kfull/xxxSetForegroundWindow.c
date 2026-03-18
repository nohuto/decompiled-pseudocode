/*
 * XREFs of xxxSetForegroundWindow @ 0x1C00CBA34
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C000BE60 (xxxSwitchToThisWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00C6C40 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxActivateWindow @ 0x1C00CB624 (xxxActivateWindow.c)
 *     xxxStubSetForegroundWindow @ 0x1C00CB9A0 (xxxStubSetForegroundWindow.c)
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 *     xxxOldNextWindow @ 0x1C01D0BF8 (xxxOldNextWindow.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C0057F60 (GetNonChildAncestor.c)
 *     _GhostWindowFromHungWindow @ 0x1C005D3B8 (_GhostWindowFromHungWindow.c)
 *     IAMThreadAccessGranted @ 0x1C005EB84 (IAMThreadAccessGranted.c)
 *     IsTrayWindow @ 0x1C006539C (IsTrayWindow.c)
 *     xxxFlashWindow @ 0x1C0084014 (xxxFlashWindow.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C00C8B90 (IsImmersiveBandOrShellManaged.c)
 *     PostIAMShellHookMessageEx @ 0x1C00C90D0 (PostIAMShellHookMessageEx.c)
 *     xxxActivateWindow @ 0x1C00CB624 (xxxActivateWindow.c)
 *     CheckForegroundRight @ 0x1C00CBD2C (CheckForegroundRight.c)
 *     FRemoveForegroundActivate @ 0x1C00CC160 (FRemoveForegroundActivate.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C0124C54 (DSW_GetTopLevelCreatorWindow.c)
 */

__int64 __fastcall xxxSetForegroundWindow(struct tagWND *a1, int a2)
{
  unsigned int v2; // esi
  struct tagWND *v4; // rbx
  int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // edi
  int v15; // ecx
  bool v16; // zf
  int v17; // eax
  __int64 NonChildAncestor; // rax
  __int64 *TopLevelCreatorWindow; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int16 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  _DWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 ThreadWin32Thread; // rax
  _QWORD v31[3]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v32[3]; // [rsp+58h] [rbp-40h] BYREF

  v2 = 1;
  v4 = a1;
  v5 = 1;
  v9 = GhostWindowFromHungWindow((__int64)a1);
  if ( v9 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8);
    v31[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v31;
    v31[1] = v9;
    _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
    v4 = (struct tagWND *)v9;
  }
  if ( v4 && *(_QWORD *)(*((_QWORD *)v4 + 2) + 408LL) == gpqForeground )
  {
    v15 = 0;
    v16 = gpqForeground == *(_QWORD *)(gptiCurrent + 408LL);
  }
  else
  {
    if ( (unsigned int)CheckForegroundRight(v4) )
    {
      FRemoveForegroundActivate(gptiCurrent);
      if ( IAMThreadAccessGranted(gptiCurrent) && v4 )
        FRemoveForegroundActivate(*((_QWORD *)v4 + 2));
      v12 = xxxSetForegroundWindow2(v4);
      v13 = v12;
      if ( v4 )
      {
        if ( !v12 )
        {
          v10 = grpdeskRitInput;
          if ( *(_QWORD *)(gptiCurrent + 432LL) != grpdeskRitInput )
          {
            v10 = *(unsigned int *)v4;
            if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v10 + gSharedInfo[1] + 25LL) & 1) == 0
              && !IAMThreadAccessGranted(gptiCurrent)
              && *((_DWORD *)v4 + 80) != 15
              && (unsigned int)IsImmersiveBandOrShellManaged((__int64)v4) )
            {
              NonChildAncestor = GetNonChildAncestor(v11);
              TopLevelCreatorWindow = (__int64 *)DSW_GetTopLevelCreatorWindow(NonChildAncestor);
              PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 432LL), 0x22u, *TopLevelCreatorWindow);
            }
          }
        }
      }
      goto LABEL_9;
    }
    v5 = 0;
    if ( !v4 )
    {
      v13 = 0;
      goto LABEL_9;
    }
    if ( a2 )
    {
      v20 = GetNonChildAncestor((__int64)v4);
      v21 = DSW_GetTopLevelCreatorWindow(v20);
      if ( (unsigned int)IsTrayWindow(v21) )
      {
        v22 = 2;
      }
      else
      {
        v21 = (__int64)v4;
        v22 = 3;
      }
      if ( *(_DWORD *)(v21 + 320) != 15 )
      {
        if ( (unsigned int)IsImmersiveBandOrShellManaged(v21) )
        {
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 432LL), 0x22u, *(_QWORD *)v21);
        }
        else
        {
          v26 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25);
          v32[0] = *(_QWORD *)(v26 + 392);
          *(_QWORD *)(v26 + 392) = v32;
          v32[1] = v21;
          _InterlockedAdd((volatile signed __int32 *)(v21 + 8), 1u);
          v27 = (_DWORD *)UPDWORDPointer(8196LL);
          xxxFlashWindow((_QWORD *)v21, v22 | ((unsigned __int16)*v27 << 16) | 0xC, 0);
          ThreadUnlock1(v29, v28);
        }
      }
    }
    v15 = 0;
    v16 = *(_QWORD *)(gptiCurrent + 408LL) == *(_QWORD *)(*((_QWORD *)v4 + 2) + 408LL);
  }
  LOBYTE(v15) = v16;
  if ( v15 )
  {
    v17 = xxxActivateWindow(v4, 1LL);
  }
  else
  {
    v11 = *((_QWORD *)v4 + 2);
    v10 = *(_QWORD *)(v11 + 408);
    if ( v4 == *(struct tagWND **)(v10 + 120) )
    {
      v13 = 1;
      goto LABEL_9;
    }
    v17 = PostEventMessageEx((struct tagTHREADINFO *)v11, v10, 6u, 0LL, 0, 0LL, *(_QWORD *)v4, 0LL);
  }
  v13 = v17;
LABEL_9:
  if ( v9 )
    ThreadUnlock1(v11, v10);
  if ( !v5 || !v13 )
    return 0;
  return v2;
}
