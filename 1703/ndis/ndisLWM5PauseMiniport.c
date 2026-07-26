/*
 * XREFs of ndisLWM5PauseMiniport @ 0x1C005F448
 * Callers:
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00F6BC8 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisLWM5PauseMiniport(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  unsigned int v3; // edi
  KIRQL v4; // dl
  bool v5; // zf
  KSPIN_LOCK *v6; // rcx

  v1 = (KSPIN_LOCK *)(a1 + 2000);
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2000));
  *(_QWORD *)(a1 + 2016) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 2024) = 731088;
  *(_DWORD *)(a1 + 2008) = 5;
  if ( *(_BYTE *)(a1 + 1993) )
  {
    if ( *(_DWORD *)(a1 + 2012) )
      v3 = 259;
    else
      *(_DWORD *)(a1 + 2008) = 6;
    *(_QWORD *)(a1 + 2016) = 0LL;
    v6 = v1;
    *(_DWORD *)(a1 + 2024) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 2012) = 0;
    *(_QWORD *)(a1 + 2016) = 0LL;
    *(_DWORD *)(a1 + 2024) = 0;
    *(_BYTE *)(a1 + 1993) = 1;
    *(_DWORD *)(a1 + 2008) = 6;
    KeReleaseSpinLock(v1, v4);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v5 = (*(_DWORD *)(a1 + 120) & 0x20000000) == 0;
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_QWORD *)(a1 + 2184) = ndisSynchReturnPacketsForTranslation;
    *(_QWORD *)(a1 + 640) = &EthIndicateReceive;
    *(_QWORD *)(a1 + 1896) = ndisMIndicatePacketsToNetBufferLists;
    *(_DWORD *)(a1 + 1856) = 731107;
    *(_QWORD *)(a1 + 2192) = a1;
    if ( !v5 )
      *(_QWORD *)(a1 + 432) = ndisMIndicatePacketsToNetBufferLists;
    *(_QWORD *)(a1 + 520) = 0LL;
    v6 = (KSPIN_LOCK *)(a1 + 96);
    *(_DWORD *)(a1 + 1856) = 0;
  }
  KeReleaseSpinLock(v6, v4);
  return v3;
}
