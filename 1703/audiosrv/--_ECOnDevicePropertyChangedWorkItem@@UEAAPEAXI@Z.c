/*
 * XREFs of ??_ECOnDevicePropertyChangedWorkItem@@UEAAPEAXI@Z @ 0x180023C80
 * Callers:
 *     ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800242A0 (-OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180022BF0 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

COnDevicePropertyChangedWorkItem *__fastcall COnDevicePropertyChangedWorkItem::`vector deleting destructor'(
        COnDevicePropertyChangedWorkItem *this,
        char a2)
{
  __int64 v4; // rdx
  void (*v5)(void); // rax

  v4 = *((_QWORD *)this + 1) - 24LL;
  *(_QWORD *)this = &COnDeviceWorkItem::`vftable';
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 16), 0xFFFFFFFF) <= 1 )
  {
    v5 = *(void (**)(void))(**(_QWORD **)v4 + 8LL);
    if ( (char *)v5 == (char *)ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(*(ATL::CAtlStringMgr **)v4, (struct ATL::CStringData *)v4);
    else
      v5();
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
