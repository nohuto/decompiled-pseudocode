/*
 * XREFs of ndisReinitializeMiniportBlock @ 0x1C010DA28
 * Callers:
 *     ndisPnPStartDevice @ 0x1C00C0924 (ndisPnPStartDevice.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00E43B8 (ndisIMInitializeDeviceInstance_ea_1C00E43B8.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisOpenULongRef @ 0x1C005D714 (ndisOpenULongRef.c)
 *     ndisMInitializeMiniportBlockFront @ 0x1C0105034 (ndisMInitializeMiniportBlockFront.c)
 */

void __fastcall ndisReinitializeMiniportBlock(char *DeferredContext)
{
  int v1; // edi
  __int64 v3; // rbp
  KIRQL v4; // r13
  int v5; // esi
  int v6; // r14d
  int v7; // r15d
  int v8; // r12d
  __int64 v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  unsigned __int16 v12; // [rsp+50h] [rbp+8h]

  v1 = 0;
  v3 = 0LL;
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x5Bu, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)DeferredContext);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v5 = *((_DWORD *)DeferredContext + 30) & 0x40000000;
  v6 = *((_DWORD *)DeferredContext + 31) & 0x8613000;
  v7 = *((_DWORD *)DeferredContext + 673) & 0x200;
  v8 = *((_DWORD *)DeferredContext + 468) & 0x4000;
  v12 = *((_WORD *)DeferredContext + 1);
  if ( (*((_DWORD *)DeferredContext + 30) & 0x80u) != 0 )
  {
    v3 = *((_QWORD *)DeferredContext + 3);
    v1 = *((_DWORD *)DeferredContext + 142) & 8;
  }
  memset(DeferredContext + 4, 0, 0xE68uLL);
  ndisMInitializeMiniportBlockFront(DeferredContext, v12);
  v9 = *((_QWORD *)DeferredContext + 473);
  *((_DWORD *)DeferredContext + 1112) = 0;
  *((_DWORD *)DeferredContext + 1113) = 0;
  *((_DWORD *)DeferredContext + 31) = v6;
  *((_DWORD *)DeferredContext + 673) = v7;
  *((_DWORD *)DeferredContext + 30) = v5;
  *((_DWORD *)DeferredContext + 468) = v8;
  if ( (*(_BYTE *)(v9 + 26) & 0x40) != 0 )
  {
    *((_DWORD *)DeferredContext + 142) = v1;
    *((_DWORD *)DeferredContext + 30) = v5 | 0x80;
    *((_QWORD *)DeferredContext + 3) = v3;
  }
  if ( (*(_BYTE *)(v9 + 26) & 1) != 0 )
    *((_DWORD *)DeferredContext + 30) |= 0x8000u;
  v10 = (void *)*((_QWORD *)DeferredContext + 395);
  if ( v10 )
    memset(v10, 0, 112LL * ndisMaxNumberOfProcessors);
  v11 = (void *)*((_QWORD *)DeferredContext + 515);
  if ( v11 )
    memset(v11, 0, 0x4C8uLL);
  KeReleaseSpinLock(&ndisMiniportListLock, v4);
  ndisOpenULongRef((PKSPIN_LOCK)DeferredContext + 558);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x5Cu, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)DeferredContext);
}
