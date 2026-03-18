/*
 * XREFs of ?DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0050E80
 * Callers:
 *     ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00516D4 (-NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005F630 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DEVICE::DecrementCurrentUsage(VIDMM_DEVICE *this, __int64 **a2)
{
  __int64 v2; // r10
  unsigned int v3; // r8d
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rcx

  v2 = **a2;
  v3 = *(_DWORD *)(v2 + 76);
  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) + 296LL * (v3 & 0x3F);
  if ( (*((_BYTE *)a2 + 36) & 1) != 0 && (v3 & 0xF0000) == 0x20000 )
    v5 = 0LL;
  else
    v5 = HIWORD(v3) & 0xF;
  *(_QWORD *)(v4 + 8 * v5 + 72) -= *(_QWORD *)(v2 + 16);
  v6 = (unsigned __int8)HIBYTE(*(_WORD *)(v2 + 76)) >> 4;
  *(_QWORD *)(v4 + 8 * v6 + 136) -= *(_QWORD *)(v2 + 16);
}
