/*
 * XREFs of ??$make_shared@VSystemEffectChainDescriptor@@$$V@std@@YA?AV?$shared_ptr@VSystemEffectChainDescriptor@@@0@XZ @ 0x180041A48
 * Callers:
 *     ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180041770 (-CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GU.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::make_shared<SystemEffectChainDescriptor,>(_QWORD *a1)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v3; // rax

  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x58uLL);
  if ( v3 )
  {
    v3[2] = 1;
    v3[3] = 1;
    *(_QWORD *)v3 = &std::_Ref_count_obj<SystemEffectChainDescriptor>::`vftable';
    if ( v3 != (_DWORD *)-16LL )
    {
      *((_QWORD *)v3 + 2) = 0LL;
      *((_QWORD *)v3 + 3) = 0LL;
      *((_BYTE *)v3 + 32) = 0;
      *((_QWORD *)v3 + 5) = 0LL;
      *((_QWORD *)v3 + 6) = 0LL;
      *((_QWORD *)v3 + 7) = 0LL;
      *((_QWORD *)v3 + 8) = 0LL;
      *((_QWORD *)v3 + 9) = 0LL;
      *((_QWORD *)v3 + 10) = 0LL;
    }
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 4;
  return a1;
}
