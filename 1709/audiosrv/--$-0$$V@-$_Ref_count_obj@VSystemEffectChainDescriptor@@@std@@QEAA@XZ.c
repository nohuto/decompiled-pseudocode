/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj@VSystemEffectChainDescriptor@@@std@@QEAA@XZ @ 0x1800BB9E0
 * Callers:
 *     ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x1800BBDB4 (-CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GU.c)
 * Callees:
 *     memset @ 0x180033A5A (memset.c)
 */

__int64 __fastcall std::_Ref_count_obj<SystemEffectChainDescriptor>::_Ref_count_obj<SystemEffectChainDescriptor>(
        __int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 16;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<SystemEffectChainDescriptor>::`vftable';
  if ( a1 != -16 )
  {
    memset((void *)(a1 + 16), 0, 0x48uLL);
    *(_QWORD *)v1 = 0LL;
    *(_QWORD *)(v1 + 8) = 0LL;
    *(_DWORD *)(v1 + 16) = 0;
    *(_BYTE *)(v1 + 20) = 0;
    *(_QWORD *)(v1 + 24) = 0LL;
    *(_QWORD *)(v1 + 32) = 0LL;
    *(_QWORD *)(v1 + 40) = 0LL;
    *(_QWORD *)(v1 + 48) = 0LL;
    *(_QWORD *)(v1 + 56) = 0LL;
    *(_QWORD *)(v1 + 64) = 0LL;
  }
  return a1;
}
