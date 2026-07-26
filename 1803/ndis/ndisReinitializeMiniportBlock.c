/*
 * XREFs of ndisReinitializeMiniportBlock @ 0x1C010F99C
 * Callers:
 *     ndisPnPStartDevice @ 0x1C00C6974 (ndisPnPStartDevice.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00E5C1C (ndisIMInitializeDeviceInstance_ea_1C00E5C1C.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisOpenULongRef @ 0x1C005E0A4 (ndisOpenULongRef.c)
 *     ndisMInitializeMiniportBlockFront @ 0x1C01073C8 (ndisMInitializeMiniportBlockFront.c)
 */

void __fastcall ndisReinitializeMiniportBlock(char *DeferredContext)
{
  int v1; // esi
  __int64 v3; // rbp
  KIRQL v4; // r13
  int v5; // edi
  int v6; // r14d
  int v7; // r15d
  int v8; // r12d
  __int64 v9; // rcx
  __int16 v10; // ax
  void *v11; // rcx
  void *v12; // rcx
  unsigned __int16 v13; // [rsp+50h] [rbp+8h]

  v1 = 0;
  v3 = 0LL;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x5Fu, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)DeferredContext);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v5 = *((_DWORD *)DeferredContext + 30) & 0x40000000;
  v6 = *((_DWORD *)DeferredContext + 31) & 0x8613000;
  v7 = *((_DWORD *)DeferredContext + 673) & 0x200;
  v8 = *((_DWORD *)DeferredContext + 468) & 0x4000;
  v13 = *((_WORD *)DeferredContext + 1);
  if ( (*((_DWORD *)DeferredContext + 30) & 0x80u) != 0 )
  {
    v3 = *((_QWORD *)DeferredContext + 3);
    v1 = *((_DWORD *)DeferredContext + 142) & 8;
  }
  memset(DeferredContext + 4, 0, 0xE68uLL);
  ndisMInitializeMiniportBlockFront(DeferredContext, v13);
  *((_DWORD *)DeferredContext + 1112) = 0;
  *((_DWORD *)DeferredContext + 1113) = 0;
  v9 = *((_QWORD *)DeferredContext + 473);
  *((_DWORD *)DeferredContext + 31) = v6;
  *((_DWORD *)DeferredContext + 673) = v7;
  *((_DWORD *)DeferredContext + 30) = v5;
  *((_DWORD *)DeferredContext + 468) = v8;
  v10 = *(_WORD *)(v9 + 26);
  if ( (v10 & 0x40) != 0 )
  {
    v5 |= 0x80u;
    *((_DWORD *)DeferredContext + 142) = v1;
    *((_DWORD *)DeferredContext + 30) = v5;
    *((_QWORD *)DeferredContext + 3) = v3;
    v10 = *(_WORD *)(v9 + 26);
  }
  if ( (v10 & 1) != 0 )
    *((_DWORD *)DeferredContext + 30) = v5 | 0x8000;
  v11 = (void *)*((_QWORD *)DeferredContext + 395);
  if ( v11 )
    memset(v11, 0, 112LL * ndisMaxNumberOfProcessors);
  v12 = (void *)*((_QWORD *)DeferredContext + 515);
  if ( v12 )
    memset(v12, 0, 0x4C8uLL);
  KeReleaseSpinLock(&ndisMiniportListLock, v4);
  ndisOpenULongRef((PKSPIN_LOCK)DeferredContext + 558);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x60u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)DeferredContext);
}
