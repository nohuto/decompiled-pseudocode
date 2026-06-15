/*
 * XREFs of ?UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z @ 0x140002790
 * Callers:
 *     ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140011370 (-DestroyStream@CSubmixImpl@@UEAAJ_K@Z.c)
 * Callees:
 *     ?FinalUnregisterForProcess@GraphStreamingResourceManager@@EEAAXPEAU_t@HandleRegistrations@1@@Z @ 0x140002CC0 (-FinalUnregisterForProcess@GraphStreamingResourceManager@@EEAAXPEAU_t@HandleRegistrations@1@@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140005470 (-RemoveAtPos@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElemen.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GraphStreamingResourceManager::UnregisterProcess(
        GraphStreamingResourceManager *this,
        struct ProcessRegistrationToken__ *a2)
{
  GraphStreamingResourceManager *v4; // rcx
  struct GraphStreamingResourceManager::HandleRegistrations::_t *v5; // rdx
  void (__fastcall *v6)(GraphStreamingResourceManager *__hidden, struct GraphStreamingResourceManager::HandleRegistrations::_t *); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 2, 0xFFFFFFFF) == 1 )
  {
    v4 = (GraphStreamingResourceManager *)((char *)this - 8);
    v5 = (struct ProcessRegistrationToken__ *)((char *)a2 + 16);
    v6 = *(void (__fastcall **)(GraphStreamingResourceManager *__hidden, struct GraphStreamingResourceManager::HandleRegistrations::_t *))(*((_QWORD *)this - 1) + 40LL);
    if ( v6 == GraphStreamingResourceManager::FinalUnregisterForProcess )
      GraphStreamingResourceManager::FinalUnregisterForProcess(v4, v5);
    else
      v6(v4, v5);
    ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveAtPos(
      (char *)this + 56,
      a2);
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
}
