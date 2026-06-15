/*
 * XREFs of ??1?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@QEAA@XZ @ 0x1800F1E1C
 * Callers:
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$4 @ 0x180069970 (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$4.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$6 @ 0x18006B1CE (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$6.c)
 *     asm_GetApplicationSubmixes$dtor$2 @ 0x1800D7F1F (asm_GetApplicationSubmixes$dtor$2.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
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
