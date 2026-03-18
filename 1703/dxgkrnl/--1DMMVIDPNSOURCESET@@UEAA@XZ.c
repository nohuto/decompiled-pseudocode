/*
 * XREFs of ??1DMMVIDPNSOURCESET@@UEAA@XZ @ 0x1C000C600
 * Callers:
 *     ??_EDMMVIDPNSOURCESET@@UEAAPEAXI@Z @ 0x1C000C520 (--_EDMMVIDPNSOURCESET@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DMMVIDPNSOURCESET::~DMMVIDPNSOURCESET(DMMVIDPNSOURCESET *this)
{
  *(_QWORD *)this = &DMMVIDPNSOURCESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCESET::`vftable'{for `ContainedBy<DMMVIDPN>'};
  *((_DWORD *)this + 22) |= 0x6D640000u;
  *((_QWORD *)this + 10) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &IndexedSet<DMMVIDPNSOURCE>::`vftable';
  Set<DMMVIDPNSOURCE>::~Set<DMMVIDPNSOURCE>();
}
