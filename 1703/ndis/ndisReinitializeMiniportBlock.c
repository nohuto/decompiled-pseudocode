/*
 * XREFs of ndisReinitializeMiniportBlock @ 0x1C0104AA8
 * Callers:
 *     ndisPnPStartDevice @ 0x1C00AB254 (ndisPnPStartDevice.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00DA398 (ndisIMInitializeDeviceInstance_ea_1C00DA398.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisOpenULongRef @ 0x1C005DB2C (ndisOpenULongRef.c)
 *     ndisMInitializeMiniportBlockFront @ 0x1C00F5CEC (ndisMInitializeMiniportBlockFront.c)
 */

void __fastcall ndisReinitializeMiniportBlock(_DWORD *DeferredContext)
{
  int v1; // esi
  __int64 v3; // rbp
  KIRQL v4; // r13
  int v5; // r14d
  int v6; // r15d
  int v7; // edi
  int v8; // r12d
  __int64 v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  unsigned __int16 v12; // [rsp+50h] [rbp+8h]

  v1 = 0;
  v3 = 0LL;
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0x5Bu, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)DeferredContext);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v5 = DeferredContext[31] & 0x8613000;
  v6 = DeferredContext[672] & 0x200;
  v7 = DeferredContext[30] & 0x40000000;
  v12 = *((_WORD *)DeferredContext + 1);
  v8 = DeferredContext[468] & 0x4000;
  if ( (DeferredContext[30] & 0x80u) != 0 )
  {
    v3 = *((_QWORD *)DeferredContext + 3);
    v1 = DeferredContext[142] & 8;
  }
  memset(DeferredContext + 1, 0, 0xE68uLL);
  ndisMInitializeMiniportBlockFront((char *)DeferredContext, v12);
  v9 = *((_QWORD *)DeferredContext + 473);
  DeferredContext[1112] = 0;
  DeferredContext[1113] = 0;
  DeferredContext[31] = v5;
  DeferredContext[672] = v6;
  DeferredContext[30] = v7;
  DeferredContext[468] = v8;
  if ( (*(_BYTE *)(v9 + 26) & 0x40) != 0 )
  {
    DeferredContext[142] = v1;
    DeferredContext[30] = v7 | 0x80;
    *((_QWORD *)DeferredContext + 3) = v3;
  }
  if ( (*(_BYTE *)(v9 + 26) & 1) != 0 )
    DeferredContext[30] |= 0x8000u;
  v10 = (void *)*((_QWORD *)DeferredContext + 395);
  if ( v10 )
    memset(v10, 0, 112LL * ndisMaxNumberOfProcessors);
  v11 = (void *)*((_QWORD *)DeferredContext + 515);
  if ( v11 )
    memset(v11, 0, 0x4C8uLL);
  KeReleaseSpinLock(&ndisMiniportListLock, v4);
  ndisOpenULongRef((__int64)(DeferredContext + 1116));
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x5Cu, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)DeferredContext);
}
