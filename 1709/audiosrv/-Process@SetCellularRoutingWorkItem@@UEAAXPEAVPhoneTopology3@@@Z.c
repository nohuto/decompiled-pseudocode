/*
 * XREFs of ?Process@SetCellularRoutingWorkItem@@UEAAXPEAVPhoneTopology3@@@Z @ 0x1800EC480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SetCellularRoutingWorkItem::Process(SetCellularRoutingWorkItem *this, struct PhoneTopology3 *a2)
{
  PhoneTopology3::DoSetCellularRouting(a2, (SetCellularRoutingWorkItem *)((char *)this + 24));
}
