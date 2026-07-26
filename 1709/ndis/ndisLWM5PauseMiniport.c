/*
 * XREFs of ndisLWM5PauseMiniport @ 0x1C005F1F4
 * Callers:
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0105224 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisLWM5PauseMiniport(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  unsigned int v3; // esi
  KIRQL v4; // dl
  KIRQL v5; // dl
  bool v6; // zf
  int v7; // eax
  int v8; // ebx

  v1 = (KSPIN_LOCK *)(a1 + 2000);
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2000));
  *(_QWORD *)(a1 + 2016) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 2024) = 731271;
  *(_QWORD *)(a1 + 2016) = 0LL;
  *(_DWORD *)(a1 + 2008) = 5;
  *(_DWORD *)(a1 + 2024) = 0;
  if ( *(_BYTE *)(a1 + 1993) )
  {
    v7 = *(_DWORD *)(a1 + 2008);
    v8 = *(_DWORD *)(a1 + 2012);
    if ( !v8 )
      v7 = 6;
    *(_DWORD *)(a1 + 2008) = v7;
    KeReleaseSpinLock(v1, v4);
    return v8 != 0 ? 0x103 : 0;
  }
  else
  {
    *(_QWORD *)(a1 + 2008) = 6LL;
    *(_BYTE *)(a1 + 1993) = 1;
    KeReleaseSpinLock(v1, v4);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v6 = (*(_DWORD *)(a1 + 120) & 0x20000000) == 0;
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_QWORD *)(a1 + 2184) = ndisSynchReturnPacketsForTranslation;
    *(_QWORD *)(a1 + 640) = &EthIndicateReceive;
    *(_QWORD *)(a1 + 1896) = ndisMIndicatePacketsToNetBufferLists;
    *(_DWORD *)(a1 + 1856) = 731290;
    *(_QWORD *)(a1 + 2192) = a1;
    if ( !v6 )
      *(_QWORD *)(a1 + 432) = ndisMIndicatePacketsToNetBufferLists;
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v5);
  }
  return v3;
}
