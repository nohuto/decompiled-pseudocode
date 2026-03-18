/*
 * XREFs of ??_GCOMMITVIDPNREQUEST@VIDPN_MGR@@UEAAPEAXI@Z @ 0x1C00444E0
 * Callers:
 *     ??_ECOMMITVIDPNREQUEST@VIDPN_MGR@@WBI@EAAPEAXI@Z @ 0x1C0015820 (--_ECOMMITVIDPNREQUEST@VIDPN_MGR@@WBI@EAAPEAXI@Z.c)
 *     ??_ECOMMITVIDPNREQUEST@VIDPN_MGR@@WCA@EAAPEAXI@Z @ 0x1C0015830 (--_ECOMMITVIDPNREQUEST@VIDPN_MGR@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 */

VIDPN_MGR::COMMITVIDPNREQUEST *__fastcall VIDPN_MGR::COMMITVIDPNREQUEST::`scalar deleting destructor'(
        VIDPN_MGR::COMMITVIDPNREQUEST *this,
        char a2)
{
  *(_QWORD *)this = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `QueueElement'};
  *((_QWORD *)this + 3) = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 4) = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `SignedWithClassSignature<VIDPN_MGR::COMMITVIDPNREQUEST>'};
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 6, 0LL);
  *((_DWORD *)this + 10) |= 0x6D640000u;
  *((_QWORD *)this + 4) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 3) = &DoublyLinkedListElement::`vftable';
  *(_QWORD *)this = &DoublyLinkedListElement::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
