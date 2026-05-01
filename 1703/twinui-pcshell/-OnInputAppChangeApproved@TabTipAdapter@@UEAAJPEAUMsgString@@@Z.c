/*
 * XREFs of ?OnInputAppChangeApproved@TabTipAdapter@@UEAAJPEAUMsgString@@@Z @ 0x18016ED60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabTipAdapter::OnInputAppChangeApproved(TabTipAdapter *this, struct MsgString *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct MsgString *))(**((_QWORD **)this + 5) + 24LL))(
           *((_QWORD *)this + 5),
           a2);
}
