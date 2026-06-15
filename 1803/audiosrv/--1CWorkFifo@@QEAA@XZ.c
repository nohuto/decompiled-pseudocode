/*
 * XREFs of ??1CWorkFifo@@QEAA@XZ @ 0x1800F1FC0
 * Callers:
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$7 @ 0x18006B1E1 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$7.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18005FA30 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x1800F4E0C (-Shutdown@CWorkFifo@@QEAAXXZ.c)
 *     ?_Tidy@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@IEAAXXZ @ 0x1800F54D8 (-_Tidy@-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr@VWorkItem@CWo.c)
 */

// Hidden C++ exception states: #wind=24
void __fastcall CWorkFifo::~CWorkFifo(wil::details **this)
{
  void *v2; // rdx
  wil::details *v3; // rcx

  CWorkFifo::Shutdown((CWorkFifo *)this);
  v3 = this[28];
  if ( v3 )
    wil::details::CloseHandle(v3, v2);
  _Mtx_destroy_in_situ((_Mtx_t)(this + 18));
  std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::_Tidy(this + 12);
  std::_Deallocate(this[12], 1uLL, 0x10uLL);
  this[12] = 0LL;
}
