/*
 * XREFs of PostIAMShellHookMessageEx @ 0x1C00B3840
 * Callers:
 *     SetWindowCompositionFreezeSWR @ 0x1C0004F60 (SetWindowCompositionFreezeSWR.c)
 *     xxxUpdateTray @ 0x1C0019CC0 (xxxUpdateTray.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0021794 (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxSetWindowStyle @ 0x1C0050000 (xxxSetWindowStyle.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C005EF98 (xxxNotifyMonitorChanged.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006407C (xxxEndDeferWindowPosEx.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C00B03E0 (HandleDisplayChangeForInactiveDesktops.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C00B043C (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxDeactivate @ 0x1C00B304C (xxxDeactivate.c)
 *     xxxSetForegroundWindow @ 0x1C00B3F50 (xxxSetForegroundWindow.c)
 *     NtUserLayoutCompleted @ 0x1C0104550 (NtUserLayoutCompleted.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0132A60 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01C4A14 (-RequestModernAppClose@@YAHXZ.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C00B46D4 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 */

void __fastcall PostIAMShellHookMessageEx(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  struct tagWND *TopLevelHost; // rax
  __int64 TopLevelWindow; // rax

  if ( a1 )
  {
    v3 = a3;
    v4 = a2;
    if ( (*(_DWORD *)(gpsi + 2104LL) & 8) != 0 )
    {
      if ( *(_QWORD *)(a1 + 288) )
      {
        if ( a2 != 35 )
        {
          v6 = *(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)a3);
          if ( a2 == 18 )
          {
            *(_BYTE *)(v6 + 306) &= ~2u;
          }
          else
          {
            *(_BYTE *)(v6 + 306) |= 2u;
            if ( ((a2 - 19) & 0xFFFFFFFB) == 0 && (!gpqForeground || *(_QWORD *)(gpqForeground + 88LL) != v6) )
              return;
            if ( a2 == 19 )
            {
              TopLevelHost = CoreWindowProp::GetTopLevelHost((struct tagWND *)v6);
              TopLevelWindow = GetTopLevelWindow((__int64)TopLevelHost);
              if ( !TopLevelWindow )
                TopLevelWindow = v6;
              v6 = TopLevelWindow;
            }
          }
          if ( v6 )
            v3 = *(_QWORD *)v6;
          else
            v3 = 0LL;
        }
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL);
        if ( v7 )
          PostMessage(v7, *(unsigned int *)(gpsi + 912LL), v4, v3);
      }
    }
  }
}
