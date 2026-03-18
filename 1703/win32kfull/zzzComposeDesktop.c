/*
 * XREFs of zzzComposeDesktop @ 0x1C0016E24
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C0011B6C (xxxCreateDesktopEx.c)
 *     zzzDwmStartRedirection @ 0x1C0016490 (zzzDwmStartRedirection.c)
 * Callees:
 *     GreTransferSpriteStateToDwmState @ 0x1C001665C (GreTransferSpriteStateToDwmState.c)
 *     DwmAsyncShellWindowChange @ 0x1C0016728 (DwmAsyncShellWindowChange.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00170BC (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z @ 0x1C00172B4 (-ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z.c)
 *     MapDesktop @ 0x1C001B370 (MapDesktop.c)
 *     ComposeWindow @ 0x1C001C75C (ComposeWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C001DCFC (IsWindowBeingDestroyed.c)
 *     ComposeWindowIfNeeded @ 0x1C0022184 (ComposeWindowIfNeeded.c)
 *     IsDesktopWindow @ 0x1C002250C (IsDesktopWindow.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C002260C (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     GreUpdateSpriteVisRgn @ 0x1C006D400 (GreUpdateSpriteVisRgn.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00A1A24 (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00A1A50 (GreTransferDwmStateToSpriteState.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1C00A1E3C (GreRemoveDisplayDriverRealizations.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00B9A10 (zzzEnableDwmPointerSupport.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C00C60EC (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C0209844 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C0211494 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 *     DwmAsyncMagnCreate @ 0x1C024B12C (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C024B29C (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C024B570 (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C024B65C (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C024B758 (DwmAsyncMagnSetWindowSharedTextures.c)
 */

__int64 __fastcall zzzComposeDesktop(struct tagDESKTOP *a1)
{
  __int64 v2; // rcx
  int v3; // r15d
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 **v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rbx
  void *v18; // rax
  __int64 v20; // rbx
  struct tagDESKTOP *v21; // rax
  struct tagWND *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  CSwapChainProp *Prop; // rax
  struct tagWND *v32; // rcx
  ULONG v33; // eax
  __int64 v34; // rbx
  void *v35; // rax
  struct tagWND *v36; // r9
  void *v37; // rax
  int v38; // [rsp+40h] [rbp-48h] BYREF
  __int64 v39; // [rsp+48h] [rbp-40h]
  struct tagDESKTOP *v40; // [rsp+50h] [rbp-38h]
  int v41; // [rsp+58h] [rbp-30h]
  int v42; // [rsp+5Ch] [rbp-2Ch]

  v2 = *((_QWORD *)a1 + 1);
  v3 = -1073741823;
  if ( (*(_DWORD *)(*(_QWORD *)v2 + 52LL) & 1) != 0 )
    return 0;
  *(_DWORD *)(*(_QWORD *)v2 + 52LL) |= 1u;
  v4 = ReferenceDwmProcess();
  v5 = 0LL;
  v6 = v4;
  if ( v4 )
  {
    v38 = 1;
    v39 = v4;
    v40 = a1;
    v41 = 0;
    v42 = 1;
    v3 = MapDesktop(&v38);
    if ( v3 < 0 )
    {
      v33 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v33);
      *(_DWORD *)(**((_QWORD **)a1 + 1) + 52LL) &= ~1u;
      DereferenceDwmProcess(v6);
      return 3221225473LL;
    }
    DereferenceDwmProcess(v6);
  }
  if ( !(unsigned int)GreTransferSpriteStateToDwmState(*(HDEV *)(gpDispInfo + 32LL), ***((_QWORD ***)a1 + 1)) )
  {
    v3 = -1073741823;
LABEL_47:
    *(_DWORD *)(**((_QWORD **)a1 + 1) + 52LL) &= ~1u;
LABEL_14:
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 32LL), 0LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    if ( v3 >= 0 )
    {
      v15 = (__int64 **)*((_QWORD *)a1 + 1);
      v16 = v15[20];
      if ( v16 )
        v5 = *v16;
      v17 = **v15;
      v18 = (void *)ReferenceDwmApiPort(v15, v12, v13, v14);
      DwmAsyncShellWindowChange(v18, v5, v17);
    }
    return (unsigned int)v3;
  }
  v7 = *((_QWORD *)a1 + 1);
  if ( *(_QWORD *)(v7 + 16) )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( *(_BYTE *)(32LL * v8 + gSharedInfo[1] + 24) == 1 )
      {
        v20 = *(_QWORD *)(gpKernelHandleTable + 16LL * v8);
        if ( (unsigned int)ShouldComposeWindow((struct tagWND *const)v20, a1) )
        {
          if ( (*(_BYTE *)(v20 + 71) & 1) != 0 )
            PostEventMessageEx(*(_QWORD *)(v20 + 16), *(_QWORD *)(*(_QWORD *)(v20 + 16) + 384LL), 16LL);
          IsDesktopWindow(v20);
          v3 = ComposeWindow(v32);
          if ( v3 < 0 )
            break;
        }
        if ( (GetProp(v20, (unsigned __int16)atomDispAffinity, 1LL) & 1) != 0 )
        {
          if ( (*(_BYTE *)(v20 + 67) & 0x20) == 0 )
            ComposeWindowIfNeeded(v20, 1LL);
          ChangeWindowTreeProtection((struct tagWND *)v20, 1);
        }
        v21 = *(struct tagDESKTOP **)(v20 + 24);
        if ( v21 )
        {
          if ( v21 == a1 && !(unsigned int)IsWindowBeingDestroyed(v20) )
          {
            CHwndTargetProp::ReNotifyDwm(v22);
            if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection(v24, v23, v25, v26)
              || (unsigned int)UserIsRemoteAndNotDisconnectConnection(v28, v27, v29, v30) )
            {
              Prop = (CSwapChainProp *)GetProp(v20, CSwapChainProp::s_atom, 1LL);
              if ( Prop )
                CSwapChainProp::NotifyDwm(Prop, (struct tagWND *const)v20);
            }
          }
        }
        if ( v3 < 0 )
          break;
      }
      if ( ++v8 > giheLast )
      {
        if ( v3 >= 0 )
        {
          ReorderChildrenSpriteList(*(struct tagWND **)(*((_QWORD *)a1 + 1) + 16LL), 0LL);
          if ( *((_QWORD *)a1 + 29) )
          {
            v37 = (void *)ReferenceDwmApiPort(**((_QWORD **)a1 + 1), v9, v10, v11);
            DwmAsyncMagnSetDesktopColorTransform(v37);
          }
          BroadcastCompositionChange(a1);
          goto LABEL_14;
        }
        break;
      }
    }
    while ( v8 <= giheLast )
    {
      if ( *(_BYTE *)(32LL * v8 + gSharedInfo[1] + 24) == 1
        && (unsigned int)IsWindowComposedOnDesktop(*(struct tagWND *const *)(gpKernelHandleTable + 16LL * v8), a1) )
      {
        ComposeWindow(v36);
      }
      --v8;
    }
    GreRemoveDisplayDriverRealizations(*(_QWORD *)(gpDispInfo + 32LL));
    zzzEnableDwmPointerSupport(0LL, 0LL);
    GreTransferDwmStateToSpriteState(*(HDEV *)(gpDispInfo + 32LL));
    goto LABEL_47;
  }
  v34 = **(_QWORD **)v7;
  v35 = (void *)((__int64 (*)(void))ReferenceDwmApiPort)();
  DwmAsyncShellWindowChange(v35, 0LL, v34);
  return 0LL;
}
