/*
 * XREFs of PostIAMShellHookMessageEx @ 0x1C00C90D0
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     xxxDeactivate @ 0x1C0051FE8 (xxxDeactivate.c)
 *     xxxUpdateTray @ 0x1C0055370 (xxxUpdateTray.c)
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C0061CB0 (xxxNotifyMonitorChanged.c)
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C00668A0 (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006815C (xxxEndDeferWindowPosEx.c)
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     xxxSetWindowStyle @ 0x1C00A55A0 (xxxSetWindowStyle.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C00C6B80 (HandleDisplayChangeForInactiveDesktops.c)
 *     xxxSetForegroundWindow @ 0x1C00CBA34 (xxxSetForegroundWindow.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0107D7C (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     NtUserLayoutCompleted @ 0x1C010F930 (NtUserLayoutCompleted.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C0115E64 (SetWindowCompositionFreezeSWR.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0116C8C (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C0124C98 (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0134BF0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01C6D78 (-RequestModernAppClose@@YAHXZ.c)
 * Callees:
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C005D1E0 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
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
          v6 = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)a3);
          if ( a2 == 18 )
          {
            *(_BYTE *)(v6 + 306) &= ~2u;
          }
          else
          {
            *(_BYTE *)(v6 + 306) |= 2u;
            if ( ((a2 - 19) & 0xFFFFFFFB) == 0 && (!gpqForeground || *(_QWORD *)(gpqForeground + 120LL) != v6) )
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
