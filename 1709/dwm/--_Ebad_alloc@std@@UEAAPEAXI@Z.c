/*
 * XREFs of ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x140002E20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z_0 @ 0x140003EE7 (--3@YAXPEAX@Z_0.c)
 *     ??1exception@@UEAA@XZ_0 @ 0x140003F05 (--1exception@@UEAA@XZ_0.c)
 */

std::bad_alloc *__fastcall std::bad_alloc::`vector deleting destructor'(std::bad_alloc *this, char a2)
{
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  exception::~exception(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
