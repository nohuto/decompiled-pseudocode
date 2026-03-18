/*
 * XREFs of ??1DMMVIDPNTOPOLOGY@@UEAA@XZ @ 0x1C00043A8
 * Callers:
 *     ??_EDMMVIDPNTOPOLOGY@@UEAAPEAXI@Z @ 0x1C0046510 (--_EDMMVIDPNTOPOLOGY@@UEAAPEAXI@Z.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1C00BC478 (--1DMMVIDPN@@UEAA@XZ.c)
 * Callees:
 *     ??1ProtectableFromChange@@UEAA@XZ @ 0x1C00040A0 (--1ProtectableFromChange@@UEAA@XZ.c)
 *     ??1?$Set@VDMMVIDPNPRESENTPATH@@@@UEAA@XZ @ 0x1C0006ED0 (--1-$Set@VDMMVIDPNPRESENTPATH@@@@UEAA@XZ.c)
 */

void __fastcall DMMVIDPNTOPOLOGY::~DMMVIDPNTOPOLOGY(DMMVIDPNTOPOLOGY *this)
{
  *((_DWORD *)this + 46) |= 0x6D640000u;
  *((_QWORD *)this + 22) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 20) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  ProtectableFromChange::~ProtectableFromChange((DMMVIDPNTOPOLOGY *)((char *)this + 56));
  Set<DMMVIDPNPRESENTPATH>::~Set<DMMVIDPNPRESENTPATH>(this);
}
