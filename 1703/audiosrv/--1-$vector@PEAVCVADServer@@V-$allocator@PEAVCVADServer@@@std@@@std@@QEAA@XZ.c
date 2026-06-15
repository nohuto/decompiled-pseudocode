/*
 * XREFs of ??1?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@QEAA@XZ @ 0x18007CEE0
 * Callers:
 *     _CProcessSubmixProxy::_CProcessSubmixProxy_::_1_::dtor$4 @ 0x1800599E7 (_CProcessSubmixProxy--_CProcessSubmixProxy_--_1_--dtor$4.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$5 @ 0x18005BA41 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$5.c)
 *     _std::make_unique_CPowerReferenceManager__::_1_::dtor$4 @ 0x18005C28B (_std--make_unique_CPowerReferenceManager__--_1_--dtor$4.c)
 *     _CPdcActivationClient::_CPdcActivationClient_::_1_::dtor$0 @ 0x1800ADF55 (_CPdcActivationClient--_CPdcActivationClient_--_1_--dtor$0.c)
 *     _Sarm::CSpatialAudioResourceManager::_CSpatialAudioResourceManager_::_1_::dtor$5 @ 0x1800C1EB6 (_Sarm--CSpatialAudioResourceManager--_CSpatialAudioResourceManager_--_1_--dtor$5.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::vector<CVADServer *>::~vector<CVADServer *>(__int64 a1)
{
  _QWORD *v2; // rcx

  v2 = *(_QWORD **)a1;
  if ( v2 )
  {
    std::_Deallocate(v2, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 3, 8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
