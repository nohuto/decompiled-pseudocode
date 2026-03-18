/*
 * XREFs of ??1DMMVIDPNTARGETSET@@UEAA@XZ @ 0x1C000C820
 * Callers:
 *     ??_GDMMVIDPNTARGETSET@@UEAAPEAXI@Z @ 0x1C000C740 (--_GDMMVIDPNTARGETSET@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DMMVIDPNTARGETSET::~DMMVIDPNTARGETSET(DMMVIDPNTARGETSET *this)
{
  *(_QWORD *)this = &DMMVIDPNTARGETSET::`vftable'{for `IndexedSet<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNTARGETSET::`vftable'{for `ContainedBy<DMMVIDPN>'};
  *((_DWORD *)this + 22) |= 0x6D640000u;
  *((_QWORD *)this + 10) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &IndexedSet<DMMVIDPNTARGET>::`vftable';
  Set<DMMVIDPNTARGET>::~Set<DMMVIDPNTARGET>();
}
