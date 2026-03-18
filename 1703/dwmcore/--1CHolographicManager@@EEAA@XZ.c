/*
 * XREFs of ??1CHolographicManager@@EEAA@XZ @ 0x1801A5A90
 * Callers:
 *     ??_ECHolographicManager@@EEAAPEAXI@Z @ 0x1801A5AF0 (--_ECHolographicManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseClient@CHolographicManager@@AEAAXXZ @ 0x1801A62F0 (-ReleaseClient@CHolographicManager@@AEAAXXZ.c)
 */

void __fastcall CHolographicManager::~CHolographicManager(void **this)
{
  void *v2; // rcx

  *this = &CHolographicManager::`vftable';
  CHolographicManager::ReleaseClient((CHolographicManager *)this);
  v2 = this[22];
  if ( v2 )
    CloseHandle(v2);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 18);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 14);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 10);
  *this = &CMILRefCountBase::`vftable';
}
