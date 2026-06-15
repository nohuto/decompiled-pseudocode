/*
 * XREFs of ??1CWorkFifo@@QEAA@XZ @ 0x1800C1F1C
 * Callers:
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$6 @ 0x18005BA54 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$6.c)
 *     _Sarm::CSpatialAudioResourceManager::_CSpatialAudioResourceManager_::_1_::dtor$6 @ 0x1800C1EC9 (_Sarm--CSpatialAudioResourceManager--_CSpatialAudioResourceManager_--_1_--dtor$6.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18002EEF4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?_Tidy@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@IEAAXXZ @ 0x1800AD75C (-_Tidy@-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr@VWorkItem@CWo.c)
 *     ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x1800C498C (-Shutdown@CWorkFifo@@QEAAXXZ.c)
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
