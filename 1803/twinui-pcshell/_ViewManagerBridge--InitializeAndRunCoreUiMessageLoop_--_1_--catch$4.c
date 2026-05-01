/*
 * XREFs of _ViewManagerBridge::InitializeAndRunCoreUiMessageLoop_::_1_::catch$4 @ 0x1801DD0FF
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180148910 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180189CB8 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewManagerBridge::InitializeAndRunCoreUiMessageLoop_::_1_::catch_4(wil *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  void *v5; // rdx

  v3 = wil::ResultFromCaughtException(a1);
  v4 = *(_QWORD *)(a2 + 112);
  *(_DWORD *)(v4 + 148) = v3;
  wil::details::SetEvent(*(wil::details **)(v4 + 128), v5);
  return &loc_1801DD0C4;
}
