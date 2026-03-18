/*
 * XREFs of ??_Glength_error@std@@UEAAPEAXI@Z @ 0x140002E90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z_0 @ 0x140003EE7 (--3@YAXPEAX@Z_0.c)
 *     ??1exception@@UEAA@XZ_0 @ 0x140003F05 (--1exception@@UEAA@XZ_0.c)
 */

std::length_error *__fastcall std::length_error::`scalar deleting destructor'(std::length_error *this, char a2)
{
  exception::~exception(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
