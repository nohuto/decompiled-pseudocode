/*
 * XREFs of zzzComposeDesktop @ 0x1C0044710
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C00443AC (zzzDwmStartRedirection.c)
 *     xxxCreateDesktopEx @ 0x1C00D9EA0 (xxxCreateDesktopEx.c)
 * Callees:
 *     GreRemoveDisplayDriverRealizations @ 0x1C0043D84 (GreRemoveDisplayDriverRealizations.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0044380 (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00449AC (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z @ 0x1C0044A00 (-ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z.c)
 *     DwmAsyncShellWindowChange @ 0x1C0044EC4 (DwmAsyncShellWindowChange.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C0044F58 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0044FBC (GreTransferSpriteStateToDwmState.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C0045C40 (GreTransferDwmStateToSpriteState.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00471BC (zzzEnableDwmPointerSupport.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     GreUpdateSpriteVisRgn @ 0x1C00721C0 (GreUpdateSpriteVisRgn.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     ComposeWindow @ 0x1C008A290 (ComposeWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C008BBE4 (IsWindowBeingDestroyed.c)
 *     MapDesktop @ 0x1C008E520 (MapDesktop.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C0090E28 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     ComposeWindowIfNeeded @ 0x1C009286C (ComposeWindowIfNeeded.c)
 *     IsDesktopWindow @ 0x1C0092C4C (IsDesktopWindow.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C013E914 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C02129AC (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 *     DwmAsyncMagnCreate @ 0x1C024C98C (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C024CAFC (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C024CF30 (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C024D01C (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C024D118 (DwmAsyncMagnSetWindowSharedTextures.c)
 */

__int64 __fastcall zzzComposeDesktop(struct tagDESKTOP *a1)
{
  int v2; // r15d
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // edi
  void *v8; // rax
  __int64 v10; // rbx
  struct tagDESKTOP *v11; // rax
  struct tagWND *v12; // rcx
  CSwapChainProp *Prop; // rax
  struct tagWND *v14; // rcx
  ULONG v15; // eax
  void *v16; // rax
  struct tagWND *v17; // r9
  void *v18; // rax
  int v19; // [rsp+40h] [rbp-48h] BYREF
  __int64 v20; // [rsp+48h] [rbp-40h]
  struct tagDESKTOP *v21; // [rsp+50h] [rbp-38h]
  int v22; // [rsp+58h] [rbp-30h]
  int v23; // [rsp+5Ch] [rbp-2Ch]

  v2 = -1073741823;
  v3 = **((_QWORD **)a1 + 1);
  v4 = *(_DWORD *)(v3 + 52);
  if ( (v4 & 1) != 0 )
    return 0;
  *(_DWORD *)(v3 + 52) = v4 | 1;
  v5 = ReferenceDwmProcess();
  v6 = v5;
  if ( v5 )
  {
    v19 = 1;
    v20 = v5;
    v21 = a1;
    v22 = 0;
    v23 = 1;
    v2 = MapDesktop(&v19);
    if ( v2 < 0 )
    {
      v15 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v15);
      *(_DWORD *)(**((_QWORD **)a1 + 1) + 52LL) &= ~1u;
      DereferenceDwmProcess(v6);
      return 3221225473LL;
    }
    DereferenceDwmProcess(v6);
  }
  if ( !(unsigned int)GreTransferSpriteStateToDwmState(*(HDEV *)(gpDispInfo + 32LL)) )
  {
    v2 = -1073741823;
LABEL_45:
    *(_DWORD *)(**((_QWORD **)a1 + 1) + 52LL) &= ~1u;
LABEL_14:
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 32LL), 0LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    if ( v2 >= 0 )
    {
      v8 = (void *)ReferenceDwmApiPort();
      DwmAsyncShellWindowChange(v8);
    }
    return (unsigned int)v2;
  }
  if ( *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL) )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( *(_BYTE *)(32LL * v7 + gSharedInfo[1] + 24) == 1 )
      {
        v10 = *(_QWORD *)(gpKernelHandleTable + 24LL * v7);
        if ( (unsigned int)ShouldComposeWindow((struct tagWND *const)v10, a1) )
        {
          if ( (*(_BYTE *)(v10 + 71) & 1) != 0 )
            PostEventMessageEx(*(struct tagTHREADINFO **)(v10 + 16), 0, 0LL, 0LL, 0LL);
          IsDesktopWindow(v10);
          v2 = ComposeWindow(v14);
          if ( v2 < 0 )
            break;
        }
        if ( (GetProp(v10, (unsigned __int16)atomDispAffinity, 1LL) & 1) != 0 )
        {
          if ( (*(_BYTE *)(v10 + 67) & 0x20) == 0 )
            ComposeWindowIfNeeded((struct tagWND *)v10);
          ChangeWindowTreeProtection((struct tagWND *)v10, 1);
        }
        v11 = *(struct tagDESKTOP **)(v10 + 24);
        if ( v11 )
        {
          if ( v11 == a1 && !(unsigned int)IsWindowBeingDestroyed(v10) )
          {
            CHwndTargetProp::ReNotifyDwm(v12);
            if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection()
              || (unsigned int)UserIsRemoteAndNotDisconnectConnection() )
            {
              Prop = (CSwapChainProp *)GetProp(v10, LOWORD(WPP_MAIN_CB.Dpc.DeferredContext), 1LL);
              if ( Prop )
                CSwapChainProp::NotifyDwm(Prop, (struct tagWND *const)v10);
            }
          }
        }
        if ( v2 < 0 )
          break;
      }
      if ( ++v7 > giheLast )
      {
        if ( v2 >= 0 )
        {
          ReorderChildrenSpriteList(*(struct tagWND **)(*((_QWORD *)a1 + 1) + 16LL), 0LL);
          if ( *((_QWORD *)a1 + 29) )
          {
            v18 = (void *)ReferenceDwmApiPort();
            DwmAsyncMagnSetDesktopColorTransform(v18);
          }
          BroadcastCompositionChange(a1);
          goto LABEL_14;
        }
        break;
      }
    }
    while ( v7 <= giheLast )
    {
      if ( *(_BYTE *)(32LL * v7 + gSharedInfo[1] + 24) == 1
        && IsWindowComposedOnDesktop(*(struct tagWND *const *)(gpKernelHandleTable + 24LL * v7), a1) )
      {
        ComposeWindow(v17);
      }
      --v7;
    }
    GreRemoveDisplayDriverRealizations(*(_QWORD *)(gpDispInfo + 32LL));
    zzzEnableDwmPointerSupport(0LL, 0LL);
    GreTransferDwmStateToSpriteState(*(HDEV *)(gpDispInfo + 32LL));
    goto LABEL_45;
  }
  v16 = (void *)ReferenceDwmApiPort();
  DwmAsyncShellWindowChange(v16);
  return 0LL;
}
