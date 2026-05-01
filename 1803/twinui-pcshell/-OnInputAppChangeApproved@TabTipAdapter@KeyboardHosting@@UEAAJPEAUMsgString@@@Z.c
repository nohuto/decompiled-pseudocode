/*
 * XREFs of ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@UEAAJPEAUMsgString@@@Z @ 0x18024AD20
 * Callers:
 *     <none>
 * Callees:
 *     ?MsgStringGetData@@YAPEBGPEAUMsgString@@@Z @ 0x1800961B0 (-MsgStringGetData@@YAPEBGPEAUMsgString@@@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved(
        KeyboardHosting::TabTipAdapter *this,
        struct MsgString *a2)
{
  unsigned __int16 *Data; // rax
  __int64 v3; // r8

  Data = (unsigned __int16 *)MsgStringGetData(a2);
  return KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved((KeyboardHosting::TabTipAdapter *)(v3 - 8), Data);
}
