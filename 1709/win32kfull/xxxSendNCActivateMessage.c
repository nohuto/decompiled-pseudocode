/*
 * XREFs of xxxSendNCActivateMessage @ 0x1C0054FF8
 * Callers:
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 * Callees:
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C005D1E0 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C005EBDC (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendNCActivateMessage(struct tagWND *a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  struct tagWND *TopLevelHost; // rax
  ULONG_PTR TopLevelWindow; // r10
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v12[4]; // [rsp+50h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp+8h] BYREF

  v3 = 1;
  LODWORD(BugCheckParameter3) = 1;
  if ( (unsigned int)CoreWindowProp::IsComponent(a1) && CoreWindowProp::GetTopLevelHost(a1) && a2 )
  {
    TopLevelHost = CoreWindowProp::GetTopLevelHost(a1);
    TopLevelWindow = GetTopLevelWindow(TopLevelHost);
    if ( TopLevelWindow && gpqForegroundPrev && *(_QWORD *)(gpqForegroundPrev + 128LL) != TopLevelWindow )
    {
      v12[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v12;
      v12[1] = TopLevelWindow;
      _InterlockedAdd((volatile signed __int32 *)(TopLevelWindow + 8), 1u);
      xxxSendTransformableMessageTimeout(TopLevelWindow, 0, 100, (ULONG_PTR)&BugCheckParameter3, 1, 0);
      ThreadUnlock1(v11, v10);
      return (int)BugCheckParameter3;
    }
  }
  else
  {
    return (int)xxxSendMessage(a1, 134LL, a2, a3);
  }
  return v3;
}
