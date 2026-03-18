/*
 * XREFs of xxxSendNCActivateMessage @ 0x1C0019BA8
 * Callers:
 *     xxxActivateThisWindow @ 0x1C001930C (xxxActivateThisWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062854 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C00B46D4 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 */

__int64 __fastcall xxxSendNCActivateMessage(struct tagWND *a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  struct tagWND *v7; // rcx
  struct tagWND *TopLevelHost; // rax
  __int64 TopLevelWindow; // r10
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v13[4]; // [rsp+50h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp+8h] BYREF

  v3 = 1;
  LODWORD(BugCheckParameter3) = 1;
  if ( (unsigned int)CoreWindowProp::IsComponent(a1) && CoreWindowProp::GetTopLevelHost(v7) && a2 )
  {
    TopLevelHost = CoreWindowProp::GetTopLevelHost(a1);
    TopLevelWindow = GetTopLevelWindow(TopLevelHost);
    if ( TopLevelWindow && gpqForegroundPrev && *(_QWORD *)(gpqForegroundPrev + 96LL) != TopLevelWindow )
    {
      v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v13;
      v13[1] = TopLevelWindow;
      ++*(_DWORD *)(TopLevelWindow + 8);
      xxxSendTransformableMessageTimeout(TopLevelWindow, 134, a2, 0, 0, 100, (ULONG_PTR)&BugCheckParameter3, 1, 0);
      ThreadUnlock1(v12, v11);
      return (int)BugCheckParameter3;
    }
  }
  else
  {
    return (int)xxxSendMessage(a1, 134LL, a2, a3);
  }
  return v3;
}
