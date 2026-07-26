/*
 * XREFs of ndisSSUpdateCounters @ 0x1C0070C44
 * Callers:
 *     ?ndisPcwUpdatePhysicalMiniportCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K@Z @ 0x1C00EEC84 (-ndisPcwUpdatePhysicalMiniportCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisSSUpdateCounters(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbp
  KIRQL v6; // al
  __int64 v7; // rbx

  v2 = a1[560];
  v4 = a1[575];
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2);
  v7 = 10000LL * (*(_QWORD *)(v2 + 688) + a1[578]);
  if ( (*(_DWORD *)(v2 + 504) & 0x10) != 0 )
    v7 += a2 - *(_QWORD *)(v2 + 648);
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v6);
  *(_QWORD *)(v4 + 8) = v7;
}
