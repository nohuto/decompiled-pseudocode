/*
 * XREFs of ??1InteractionSourceManager@@QEAA@XZ @ 0x1801C96F8
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x180193288 (--1CInteractionTracker@@UEAA@XZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Tidy@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@IEAAXXZ @ 0x1801972A4 (-_Tidy@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$co.c)
 *     ?clear@?$list@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x180197318 (-clear@-$list@U-$pair@$$CBV-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$uniq.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCInteractionTracker@@@@@@YAXAEAPEAV?$CWeakReference@VCInteractionTracker@@@@@Z @ 0x1801BDAB4 (--$ReleaseInterface@V-$CWeakReference@VCInteractionTracker@@@@@@YAXAEAPEAV-$CWeakReference@VCInt.c)
 *     ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1801C9A80 (-ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 *     ?ReleaseManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1801CA8C4 (-ReleaseManipulations@InteractionSourceManager@@AEAAXXZ.c)
 */

void __fastcall InteractionSourceManager::~InteractionSourceManager(InteractionSourceManager *this)
{
  char *v2; // rcx

  InteractionSourceManager::ClearActiveManipulations(this);
  InteractionSourceManager::ReleaseManipulations(this);
  ReleaseInterface<CWeakReference<CInteractionTracker>>((CWeakReferenceBase **)this + 1);
  std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Tidy((_QWORD *)this + 10);
  std::_Deallocate(*((char **)this + 10), 1uLL, 0x10uLL);
  *((_QWORD *)this + 10) = 0LL;
  v2 = (char *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    std::_Deallocate(v2, (__int64)(*((_QWORD *)this + 7) - (_QWORD)v2) >> 3, 8uLL);
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
  std::list<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>::clear((__int64)this + 24);
  std::_Deallocate(*((char **)this + 3), 1uLL, 0x20uLL);
}
