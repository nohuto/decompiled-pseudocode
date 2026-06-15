/*
 * XREFs of ??1?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@QEAA@XZ @ 0x18005C5D4
 * Callers:
 *     _CBaseStreamGroupProxy::_CBaseStreamGroupProxy_::_1_::dtor$8 @ 0x1800380CB (_CBaseStreamGroupProxy--_CBaseStreamGroupProxy_--_1_--dtor$8.c)
 *     _CProcessSubmixProxy::_CProcessSubmixProxy_::_1_::dtor$5 @ 0x180038674 (_CProcessSubmixProxy--_CProcessSubmixProxy_--_1_--dtor$5.c)
 *     _CPdcActivationClient::CPdcActivationClient_::_1_::dtor$0 @ 0x18009C8FC (_CPdcActivationClient--CPdcActivationClient_--_1_--dtor$0.c)
 *     _CPdcActivationClient::_CPdcActivationClient_::_1_::dtor$0 @ 0x18009C99D (_CPdcActivationClient--_CPdcActivationClient_--_1_--dtor$0.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$6 @ 0x1800BF374 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$6.c)
 *     _Sarm::CSpatialAudioResourceManager::_CSpatialAudioResourceManager_::_1_::dtor$6 @ 0x1800BF745 (_Sarm--CSpatialAudioResourceManager--_CSpatialAudioResourceManager_--_1_--dtor$6.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
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
