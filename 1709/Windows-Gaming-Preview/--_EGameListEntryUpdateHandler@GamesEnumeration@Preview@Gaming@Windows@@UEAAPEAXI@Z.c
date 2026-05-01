/*
 * XREFs of ??_EGameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18001C590
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler::`vector deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler *this,
        char a2)
{
  volatile signed __int32 *v4; // rcx
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rcx

  v4 = (volatile signed __int32 *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    *((_QWORD *)this + 5) = 0LL;
    if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  v5 = *((_QWORD *)this + 4);
  if ( v5 < 0 )
  {
    v6 = (volatile signed __int32 *)(2 * v5);
    if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v6 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 32LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x40uLL);
  return this;
}
