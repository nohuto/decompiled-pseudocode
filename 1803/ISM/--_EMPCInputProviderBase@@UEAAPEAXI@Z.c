/*
 * XREFs of ??_EMPCInputProviderBase@@UEAAPEAXI@Z @ 0x180042250
 * Callers:
 *     <none>
 * Callees:
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x1800498D8 (--1MPCInputProviderBase@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

MPCInputProviderBase *__fastcall MPCInputProviderBase::`vector deleting destructor'(
        MPCInputProviderBase *this,
        char a2)
{
  MPCInputProviderBase::~MPCInputProviderBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
