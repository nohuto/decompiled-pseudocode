/*
 * XREFs of ??_GDISPMODECHANGEREQUEST@VIDPN_MGR@@UEAAPEAXI@Z @ 0x1C0044570
 * Callers:
 *     ??_EDISPMODECHANGEREQUEST@VIDPN_MGR@@WBI@EAAPEAXI@Z @ 0x1C0015840 (--_EDISPMODECHANGEREQUEST@VIDPN_MGR@@WBI@EAAPEAXI@Z.c)
 *     ??_EDISPMODECHANGEREQUEST@VIDPN_MGR@@WCA@EAAPEAXI@Z @ 0x1C0015850 (--_EDISPMODECHANGEREQUEST@VIDPN_MGR@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 */

VIDPN_MGR::DISPMODECHANGEREQUEST *__fastcall VIDPN_MGR::DISPMODECHANGEREQUEST::`scalar deleting destructor'(
        VIDPN_MGR::DISPMODECHANGEREQUEST *this,
        char a2)
{
  *((_DWORD *)this + 10) |= 0x6D640000u;
  *((_QWORD *)this + 4) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 3) = &DoublyLinkedListElement::`vftable';
  *(_QWORD *)this = &DoublyLinkedListElement::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
