/*
 * XREFs of xxxSetForegroundWindow @ 0x1C00B3F50
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C00069B0 (xxxSwitchToThisWindow.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxActivateWindow @ 0x1C00B3994 (xxxActivateWindow.c)
 *     xxxStubSetForegroundWindow @ 0x1C00B3D00 (xxxStubSetForegroundWindow.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00B9844 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxSysCommand @ 0x1C0112C2C (xxxSysCommand.c)
 *     xxxOldNextWindow @ 0x1C01CC84C (xxxOldNextWindow.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxFlashWindow @ 0x1C00175F8 (xxxFlashWindow.c)
 *     GetNonChildAncestor @ 0x1C001E9D4 (GetNonChildAncestor.c)
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     IsTrayWindow @ 0x1C00613B0 (IsTrayWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C00B3840 (PostIAMShellHookMessageEx.c)
 *     xxxActivateWindow @ 0x1C00B3994 (xxxActivateWindow.c)
 *     _GhostWindowFromHungWindow @ 0x1C00B4280 (_GhostWindowFromHungWindow.c)
 *     CheckForegroundRight @ 0x1C00B431C (CheckForegroundRight.c)
 *     FRemoveForegroundActivate @ 0x1C00B483C (FRemoveForegroundActivate.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C00B9628 (IsImmersiveBandOrShellManaged.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C011A460 (DSW_GetTopLevelCreatorWindow.c)
 */

__int64 __fastcall xxxSetForegroundWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  int v5; // edi
  struct tagWND *v6; // rbx
  int v7; // r12d
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // edi
  int v14; // ecx
  bool v15; // zf
  int v16; // eax
  __int64 NonChildAncestor; // rax
  __int64 *TopLevelCreatorWindow; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  unsigned __int16 v21; // r15
  _DWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD v25[3]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v26[3]; // [rsp+58h] [rbp-40h] BYREF

  v4 = 1;
  v5 = a2;
  v6 = a1;
  v7 = 1;
  v8 = GhostWindowFromHungWindow(a1, a2, a3, a4);
  if ( v8 )
  {
    v6 = (struct tagWND *)v8;
    v25[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v25;
    v25[1] = v8;
    ++*(_DWORD *)(v8 + 8);
  }
  if ( v6 && *(_QWORD *)(*((_QWORD *)v6 + 2) + 384LL) == gpqForeground )
  {
    v14 = 0;
    v15 = gpqForeground == *(_QWORD *)(gptiCurrent + 384LL);
  }
  else
  {
    if ( (unsigned int)CheckForegroundRight(v6) )
    {
      FRemoveForegroundActivate(gptiCurrent);
      if ( IAMThreadAccessGranted(gptiCurrent) && v6 )
        FRemoveForegroundActivate(*((_QWORD *)v6 + 2));
      v11 = xxxSetForegroundWindow2(v6);
      v12 = v11;
      if ( v6 )
      {
        if ( !v11 )
        {
          v9 = grpdeskRitInput;
          if ( *(_QWORD *)(gptiCurrent + 408LL) != grpdeskRitInput )
          {
            v9 = *(unsigned int *)v6;
            if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v9 + gSharedInfo[1] + 25LL) & 1) == 0
              && !IAMThreadAccessGranted(gptiCurrent)
              && *((_DWORD *)v6 + 80) != 15
              && (unsigned int)IsImmersiveBandOrShellManaged(v6) )
            {
              NonChildAncestor = GetNonChildAncestor(v10);
              TopLevelCreatorWindow = (__int64 *)DSW_GetTopLevelCreatorWindow(NonChildAncestor);
              PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 0x22u, *TopLevelCreatorWindow);
            }
          }
        }
      }
      goto LABEL_9;
    }
    v7 = 0;
    if ( !v6 )
    {
      v12 = 0;
      goto LABEL_9;
    }
    if ( v5 )
    {
      v19 = GetNonChildAncestor((__int64)v6);
      v20 = DSW_GetTopLevelCreatorWindow(v19);
      if ( (unsigned int)IsTrayWindow(v20) )
      {
        v21 = 2;
      }
      else
      {
        v20 = (__int64)v6;
        v21 = 3;
      }
      if ( *(_DWORD *)(v20 + 320) != 15 )
      {
        if ( (unsigned int)IsImmersiveBandOrShellManaged(v20) )
        {
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 0x22u, *(_QWORD *)v20);
        }
        else
        {
          v26[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v26;
          v26[1] = v20;
          ++*(_DWORD *)(v20 + 8);
          v22 = (_DWORD *)UPDWORDPointer(8196LL);
          xxxFlashWindow((struct tagWND *)v20, v21 | ((unsigned __int16)*v22 << 16) | 0xC, 0);
          ThreadUnlock1(v24, v23);
        }
      }
    }
    v14 = 0;
    v15 = *(_QWORD *)(gptiCurrent + 384LL) == *(_QWORD *)(*((_QWORD *)v6 + 2) + 384LL);
  }
  LOBYTE(v14) = v15;
  if ( v14 )
  {
    v16 = xxxActivateWindow(v6, 1LL);
  }
  else
  {
    v10 = *((_QWORD *)v6 + 2);
    v9 = *(_QWORD *)(v10 + 384);
    if ( v6 == *(struct tagWND **)(v9 + 88) )
    {
      v12 = 1;
      goto LABEL_9;
    }
    v16 = PostEventMessageEx(v10, v9, 6u, 0LL, 0, 0LL, *(_QWORD *)v6, 0LL);
  }
  v12 = v16;
LABEL_9:
  if ( v8 )
    ThreadUnlock1(v10, v9);
  if ( !v7 || !v12 )
    return 0;
  return v4;
}
