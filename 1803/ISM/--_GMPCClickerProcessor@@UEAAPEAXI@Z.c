/*
 * XREFs of ??_GMPCClickerProcessor@@UEAAPEAXI@Z @ 0x1800495A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x1800498D8 (--1MPCInputProviderBase@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

MPCClickerProcessor *__fastcall MPCClickerProcessor::`scalar deleting destructor'(MPCClickerProcessor *this, char a2)
{
  *((_DWORD *)this + 573) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
