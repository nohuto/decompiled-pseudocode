/*
 * XREFs of ?FinalUnregisterForThread@GraphStreamingResourceManager@@EEAAXPEAU_t@HandleRegistrations@1@@Z @ 0x140002C90
 * Callers:
 *     ?UnregisterThread@GraphStreamingResourceManager@@UEAAXPEAUThreadRegistrationToken__@@@Z @ 0x140002E70 (-UnregisterThread@GraphStreamingResourceManager@@UEAAXPEAUThreadRegistrationToken__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GraphStreamingResourceManager::FinalUnregisterForThread(
        GraphStreamingResourceManager *this,
        struct GraphStreamingResourceManager::HandleRegistrations::_t *a2)
{
  if ( *((_QWORD *)a2 + 1) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 56LL))(*((_QWORD *)this + 35));
  CloseHandle(*(HANDLE *)a2);
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
}
