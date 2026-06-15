/*
 * XREFs of ?Process@CallHoldWorkItem@@UEAAXPEAVPhoneTopology3@@@Z @ 0x1800EC420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CallHoldWorkItem::Process(CallHoldWorkItem *this, struct PhoneTopology3 *a2)
{
  PhoneTopology3::DoSetCellularRxMute(a2, (CallHoldWorkItem *)((char *)this + 8), *((_DWORD *)this + 4));
}
