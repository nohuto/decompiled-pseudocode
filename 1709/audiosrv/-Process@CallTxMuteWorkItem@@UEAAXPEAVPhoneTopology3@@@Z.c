/*
 * XREFs of ?Process@CallTxMuteWorkItem@@UEAAXPEAVPhoneTopology3@@@Z @ 0x1800EC460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CallTxMuteWorkItem::Process(CallTxMuteWorkItem *this, struct PhoneTopology3 *a2)
{
  PhoneTopology3::DoSetCellularTxMute(a2, (CallTxMuteWorkItem *)((char *)this + 8), *((_DWORD *)this + 4));
}
