/*
 * XREFs of ??1ClientDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18030C9A8
 * Callers:
 *     s_OnMeasureItem @ 0x18030DF18 (s_OnMeasureItem.c)
 * Callees:
 *     ?InternalClose@ClientDC@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x18030CB80 (-InternalClose@ClientDC@Wrappers@WRL@Microsoft@@MEAA_NXZ.c)
 */

void __fastcall Microsoft::WRL::Wrappers::ClientDC::~ClientDC(Microsoft::WRL::Wrappers::ClientDC *this)
{
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::ClientDC::`vftable';
  Microsoft::WRL::Wrappers::ClientDC::InternalClose(this);
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ClientDCTraits>::`vftable';
}
