/*
 * XREFs of ??1CProcessAttribution@@UEAA@XZ @ 0x180129210
 * Callers:
 *     ??_GCProcessAttribution@@UEAAPEAXI@Z @ 0x1801292A0 (--_GCProcessAttribution@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$lower_bound@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@std@@_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@0@V10@0AEB_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@Z @ 0x180009E0C (--$lower_bound@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAURecord@CProcessAttributio.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?erase@?$vector@PEAURecord@CProcessAttributionManager@@V?$allocator@PEAURecord@CProcessAttributionManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@2@@Z @ 0x180124568 (-erase@-$vector@PEAURecord@CProcessAttributionManager@@V-$allocator@PEAURecord@CProcessAttributi.c)
 */

void __fastcall CProcessAttribution::~CProcessAttribution(CProcessAttribution *this)
{
  CProcessAttributionManager *v1; // rsi
  const struct CProcessAttributionManager::ProcessAttributionRecord **v3; // rbx
  const struct CProcessAttributionManager::ProcessAttributionRecord *v4; // rcx
  int v5; // eax
  const struct CProcessAttributionManager::ProcessAttributionRecord **v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = qword_180272960;
  *(_QWORD *)this = &CProcessAttribution::`vftable';
  std::lower_bound<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CProcessAttributionManager::Record *>>>,unsigned __int64,bool (*)(CProcessAttributionManager::ProcessAttributionRecord const *,__int64)>(
    &v6,
    *(const struct CProcessAttributionManager::ProcessAttributionRecord ***)v1,
    *((_QWORD *)v1 + 1),
    (__int64 *)this + 2);
  v3 = v6;
  v4 = *v6;
  if ( *((_DWORD *)*v6 + 31) )
  {
    *(_OWORD *)((char *)v4 + 8) = *(_OWORD *)((char *)this + 24);
    v5 = *((_DWORD *)this + 10);
    *((_QWORD *)v4 + 14) = 0LL;
    *((_DWORD *)v4 + 6) = v5;
  }
  else
  {
    WPF::ProcessHeapImpl::Free(v4);
    std::vector<CProcessAttributionManager::Record *>::erase((__int64)v1, &v6, (__int64)v3);
  }
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
