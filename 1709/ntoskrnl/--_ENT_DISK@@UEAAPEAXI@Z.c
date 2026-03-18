/*
 * XREFs of ??_ENT_DISK@@UEAAPEAXI@Z @ 0x1406B24A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SC_DISK@@UEAA@XZ @ 0x140146AE4 (--1SC_DISK@@UEAA@XZ.c)
 *     ??3SC_ENV_ALLOCATOR@@SAXPEAX@Z @ 0x1402926AC (--3SC_ENV_ALLOCATOR@@SAXPEAX@Z.c)
 */

NT_DISK *__fastcall NT_DISK::`vector deleting destructor'(NT_DISK *this, char a2)
{
  *(_QWORD *)this = &NT_DISK::`vftable';
  SC_DISK::~SC_DISK(this);
  if ( (a2 & 1) != 0 )
    SC_ENV_ALLOCATOR::operator delete(this);
  return this;
}
