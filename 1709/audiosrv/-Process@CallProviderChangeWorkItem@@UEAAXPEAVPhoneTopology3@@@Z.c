/*
 * XREFs of ?Process@CallProviderChangeWorkItem@@UEAAXPEAVPhoneTopology3@@@Z @ 0x1800EC440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CallProviderChangeWorkItem::Process(CallProviderChangeWorkItem *this, struct PhoneTopology3 *a2)
{
  PhoneTopology3::DoSetProviderChange((__int64)a2, (__int64)this + 8, *((_DWORD *)this + 5));
}
