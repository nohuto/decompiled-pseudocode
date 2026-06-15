/*
 * XREFs of ?Process@CallEnableWorkItem@@UEAAXPEAVPhoneTopology3@@@Z @ 0x1800EC400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CallEnableWorkItem::Process(CallEnableWorkItem *this, struct PhoneTopology3 *a2)
{
  PhoneTopology3::DoSetCellularEnable(a2, (CallEnableWorkItem *)((char *)this + 8), *((_DWORD *)this + 4));
}
