/*
 * XREFs of ?DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004C460
 * Callers:
 *     ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004D1CC (-NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DEVICE::DecrementCurrentUsage(VIDMM_DEVICE *this, __int64 **a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // eax
  __int64 v5; // rcx

  v2 = **a2;
  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) + 264LL * (*(_DWORD *)(v2 + 76) & 0x3F);
  if ( (*((_BYTE *)a2 + 36) & 1) != 0 && (*(_DWORD *)(v2 + 76) & 0xF0000) == 0x20000 )
    v4 = 0;
  else
    v4 = *(_WORD *)(v2 + 78) & 0xF;
  *(_QWORD *)(v3 + 8LL * v4 + 72) -= *(_QWORD *)(v2 + 16);
  v5 = (unsigned __int8)HIBYTE(*(_WORD *)(v2 + 76)) >> 4;
  *(_QWORD *)(v3 + 8 * v5 + 136) -= *(_QWORD *)(v2 + 16);
}
